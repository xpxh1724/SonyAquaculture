#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QComboBox>
#include<QDateTime>
#include<QDebug>
#include<QDockWidget>
#include<QLabel>
#include<QListView>
#include<QSqlQuery>
#include<QtGlobal>
#include<QScrollBar>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    init();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::init()
{   
    setWindowFlags(Qt::FramelessWindowHint);//设置无系统边框  //Qt::WindowStaysOnTopHint窗口最高权限-窗口始终在最上层
    //this->setAttribute(Qt::WA_TranslucentBackground, true);//设置透明-窗体标题栏不透明,背景透明
    setGeometry(110,30,geometry().width(),geometry().height());//窗口初始显示位置
    DockWidgetInit();//DockWidget窗口初始化
    RealTimePageInit();//RealTimePage页面初始化
    RecordQueryPageInit();//RecordQueryPage页面初始化
    ControlPageInit();//ControlPage页面初始化
    FaultDetectInit();//FaultDetectPage页面初始化
    ui->stackedWidget->setCurrentIndex(0);
    myTcp=new MyTcpSocket;
    connect(myTcp,&MyTcpSocket::connectServerOK,this,[=]{qDebug()<<"m_tcp连接成功"<<endl;
    });
    myTcp->initConnect("49.232.149.245",9999);
    //水上水下数据更新事件
    connect(myTcp,&MyTcpSocket::updateData,this,[=](double *Data){
        waterTop->setValue(Data);//更新水上数据
        waterBottom->setValue(Data);//更新水下数据
        graphData->updateDataSlots(ui->Chart);//数据更新
    });

    //监测硬件、PC与服务器间连接状态
    QThread* ConnectTypeThred = new QThread;
    MyChildThread *ConnectTypeWork=new MyChildThread;
    ConnectTypeWork->moveToThread(ConnectTypeThred);
    ConnectTypeThred->start();
    connect(this,&MainWindow::YJtypeSignal,ConnectTypeWork,&MyChildThread::WorkConnectServerStatus);
    //硬件、PC状态事件
    connect(ConnectTypeWork,&MyChildThread::WorkConnectTypeSignal,systemState,&SystemState::updateYJPCType);
    emit YJtypeSignal();//启动连接状态子线程
}

//---------- 窗口移动事件(重写) ----------
//鼠标按下事件
void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {
        m_bIsPressed = true;
        m_lastPt = event->globalPos() - this->pos();
        event->accept();
    }
}
//鼠标释放事件
void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{
    m_bIsPressed = false;	//鼠标按下标志位还原置为false
    Q_UNUSED(event);
}
//鼠标移动事件
void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    if (m_bIsPressed && (event->buttons() & Qt::LeftButton))
    {
        move(event->globalPos() - m_lastPt);
        event->accept();
    }
}
//关闭窗口事件
void MainWindow::closeEvent(QCloseEvent *event)
{
    qDebug()<<"窗口关闭"<<endl;
    menu->deleteLater();
    waterTop->deleteLater();
    waterBottom->deleteLater();
    systemState->deleteLater();
    log->deleteLater();
    chart->deleteLater();
    graphData->deleteLater();
    myTcp->deleteLater();
    Q_UNUSED(event);
}

//DockWidget窗口初始化
void MainWindow::DockWidgetInit()
{
    //--------------------------- Dock_Top-菜单栏 ----------------------------
    {
        QDockWidget *Dock_Top=new QDockWidget;
        //隐藏dw_top标题栏
        QWidget* pTitleWidget = Dock_Top ->titleBarWidget();
        QWidget* pWidget = new QWidget;
        Dock_Top ->setTitleBarWidget(pWidget );
        delete pTitleWidget ;
        //实例化菜单界面
        menu=new Menu(this);
        Dock_Top->setWidget(menu);
        Dock_Top->setFeatures(QDockWidget::NoDockWidgetFeatures);//设置不可移动、停靠
        addDockWidget(Qt::TopDockWidgetArea, Dock_Top);//设置在顶部
        //菜单界面信号的绑定
        connect(menu,&Menu::showMin,this,&MainWindow::showMinimized);//最小化
        connect(menu,&Menu::showMax,this,&MainWindow::showMaximized);//最大化
        connect(menu,&Menu::showNormal,this,&MainWindow::showNormal);//还原
        connect(menu,&Menu::showClose,this,&MainWindow::close);//关闭
        connect(menu,&Menu::toRealTimePage,this,[=]{ui->stackedWidget->setCurrentIndex(0);});
        connect(menu,&Menu::toRecordQueryPage,this,[=]{ui->stackedWidget->setCurrentIndex(1);});
        connect(menu,&Menu::toControlPage,this,[=]{ui->stackedWidget->setCurrentIndex(2);});
        connect(menu,&Menu::toFaultDetectPage,this,[=]{ui->stackedWidget->setCurrentIndex(3);});
    }
    QString LabelStyleSheet="background:rgb(36,61,91);color: rgb(122, 175, 227);font:14pt '楷体';font-weight:bold";
    QString DockStyleSheet="border:1px solid rgb(19,39,67);";
    //--------------------------- Dock_Left-水上数据 ---------------------------
    {
        QDockWidget *Dock_Left_Top=new QDockWidget("水上数据");
        Dock_Left_Top->setStyleSheet(DockStyleSheet);
        QLabel *Dock_Left_Top_Title=new QLabel;
        Dock_Left_Top_Title->setStyleSheet(LabelStyleSheet);
        Dock_Left_Top_Title->setText("水上数据");
        Dock_Left_Top_Title->setAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        Dock_Left_Top->setTitleBarWidget(Dock_Left_Top_Title);
        waterTop=new WaterTop;
        Dock_Left_Top->setWidget(waterTop);
        addDockWidget(Qt::LeftDockWidgetArea, Dock_Left_Top,Qt::Orientation::Vertical);//设置在左侧，第三个参数表示DockWidget的方向是垂直的
        connect(waterTop,&WaterTop::writeLog,this,[=](QString objname,int type){
            QString typeMsg;
            if(objname=="Temp")
            {
                if(type==WARN)
                {
                    typeMsg="警告";
                }
                else if (type==PROMPT)
                {
                    typeMsg="提示";
                }
                log->appendLog(QString("水上温度异常%1！").arg(typeMsg));
                appendLog(type,QString("水上温度异常%1！").arg(typeMsg));
            }
            else if(objname=="Humidity")
            {
                if(type==WARN)
                {
                    typeMsg="警告";
                }
                else if (type==PROMPT)
                {
                    typeMsg="提示";
                }
                log->appendLog(QString("水上湿度异常%1！").arg(typeMsg));
                appendLog(type,QString("水上湿度异常%1！").arg(typeMsg));
            }
            else if(objname=="Pressure")
            {
                if(type==WARN)
                {
                    typeMsg="警告";
                }
                else if (type==PROMPT)
                {
                    typeMsg="提示";
                }
                log->appendLog(QString("水上气压异常%1！").arg(typeMsg));
                appendLog(type,QString("水上气压异常%1！").arg(typeMsg));
            }
            else if(objname=="Voc")
            {
                if(type==WARN)
                {
                    typeMsg="警告";
                }
                else if (type==PROMPT)
                {
                    typeMsg="提示";
                }
                log->appendLog(QString("水上VOC异常%1！").arg(typeMsg));
                appendLog(type,QString("水上VOC异常%1！").arg(typeMsg));
            }
            else if(objname=="Light")
            {
                if(type==WARN)
                {
                    typeMsg="警告";
                }
                else if (type==PROMPT)
                {
                    typeMsg="提示";
                }
                log->appendLog(QString("水上光照强度异常%1！").arg(typeMsg));
                appendLog(type,QString("水上光照强度异常%1！").arg(typeMsg));
            }
        });
    }

    //--------------------------- Dock_Left-水下数据 ---------------------------
    {
        QDockWidget *Dock_Left_Bottom=new QDockWidget("水下数据");
        Dock_Left_Bottom->setStyleSheet(DockStyleSheet);
        QLabel *Dock_Left_Bottom_Title=new QLabel;
        Dock_Left_Bottom_Title->setStyleSheet(LabelStyleSheet);
        Dock_Left_Bottom_Title->setText("水下数据");
        Dock_Left_Bottom_Title->setAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        Dock_Left_Bottom->setTitleBarWidget(Dock_Left_Bottom_Title);
        waterBottom=new WaterBottom;
        Dock_Left_Bottom->setWidget(waterBottom);
        addDockWidget(Qt::LeftDockWidgetArea, Dock_Left_Bottom,Qt::Orientation::Vertical);//设置在左侧，第三个参数表示DockWidget的方向是垂直的
        connect(waterBottom,&WaterBottom::writeLog,this,[=](QString objname,int type){
            QString typeMsg;
            if(objname=="PH")
            {
                if(type==WARN)
                {
                    typeMsg="警告";
                }
                else if (type==PROMPT)
                {
                    typeMsg="提示";
                }
                log->appendLog(QString("水下PH异常%1！").arg(typeMsg));
                appendLog(type,QString("水下PH异常%1！").arg(typeMsg));
            }
            else if(objname=="Tds")
            {
                if(type==WARN)
                {
                    typeMsg="警告";
                }
                else if (type==PROMPT)
                {
                    typeMsg="提示";
                }
                log->appendLog(QString("水下TDS异常%1！").arg(typeMsg));
                appendLog(type,QString("水下TDS异常%1！").arg(typeMsg));
            }
            else if(objname=="Ec")
            {
                if(type==WARN)
                {
                    typeMsg="警告";
                }
                else if (type==PROMPT)
                {
                    typeMsg="提示";
                }
                log->appendLog(QString("水下EC异常%1！").arg(typeMsg));
                appendLog(type,QString("水下EC异常%1！").arg(typeMsg));
            }
            else if(objname=="Turbidity")
            {
                if(type==WARN)
                {
                    typeMsg="警告";
                }
                else if (type==PROMPT)
                {
                    typeMsg="提示";
                }
                log->appendLog(QString("水下浊度异常%1！").arg(typeMsg));
                appendLog(type,QString("水下浊度异常%1！").arg(typeMsg));
            }
            else if(objname=="Temp1")
            {
                if(type==WARN)
                {
                    typeMsg="警告";
                }
                else if (type==PROMPT)
                {
                    typeMsg="提示";
                }
                log->appendLog(QString("水下温度1异常%1！").arg(typeMsg));
                appendLog(type,QString("水下温度1异常%1！").arg(typeMsg));
            }
            else if(objname=="Temp2")
            {
                if(type==WARN)
                {
                    typeMsg="警告";
                }
                else if (type==PROMPT)
                {
                    typeMsg="提示";
                }
                log->appendLog(QString("水下温度2异常%1！").arg(typeMsg));
                appendLog(type,QString("水下温度2异常%1！").arg(typeMsg));
            }
            else if(objname=="WaterLevel1")
            {
                if(type==WARN)
                {
                    typeMsg="警告";
                }
                else if (type==PROMPT)
                {
                    typeMsg="提示";
                }
                log->appendLog(QString("水下水位1异常%1！").arg(typeMsg));
                appendLog(type,QString("水下水位1异常%1！").arg(typeMsg));
            }
            else if(objname=="WaterLevel2")
            {
                if(type==WARN)
                {
                    typeMsg="警告";
                }
                else if (type==PROMPT)
                {
                    typeMsg="提示";
                }
                log->appendLog(QString("水下水位2异常%1！").arg(typeMsg));
                appendLog(type,QString("水下水位2异常%1！").arg(typeMsg));
            }
        });
    }

    //--------------------------- Dock_Right-系统状态 ---------------------------
    {
        QDockWidget *Dock_Right_Top=new QDockWidget("系统状态");
        Dock_Right_Top->setStyleSheet(DockStyleSheet);
        QLabel *Dock_Right_Top_Title=new QLabel;
        Dock_Right_Top_Title->setStyleSheet(LabelStyleSheet);
        Dock_Right_Top_Title->setText("系统状态");
        Dock_Right_Top_Title->setAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        Dock_Right_Top->setTitleBarWidget(Dock_Right_Top_Title);
        systemState=new SystemState;
        Dock_Right_Top->setWidget(systemState);
        addDockWidget(Qt::RightDockWidgetArea, Dock_Right_Top,Qt::Orientation::Vertical);//设置在右，第三个参数表示DockWidget的方向是垂直的
    }

    //--------------------------- Dock_Left-日志 ---------------------------
    {
        QDockWidget *Dock_Right_Bottom=new QDockWidget("日志");
        Dock_Right_Bottom->setStyleSheet(DockStyleSheet);
        QLabel *Dock_Right_Bottom_Title=new QLabel;
        Dock_Right_Bottom_Title->setStyleSheet(LabelStyleSheet);
        Dock_Right_Bottom_Title->setText("日志");
        Dock_Right_Bottom_Title->setAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        Dock_Right_Bottom->setTitleBarWidget(Dock_Right_Bottom_Title);
        log=new Log;
        Dock_Right_Bottom->setWidget(log);
        addDockWidget(Qt::RightDockWidgetArea, Dock_Right_Bottom,Qt::Orientation::Vertical);//设置在右，第三个参数表示DockWidget的方向是垂直的
    }
}

//RealTimePage页面初始化
void MainWindow::RealTimePageInit()
{
    graphData=new GraphData;

    chart = new QChart();
    chart->setAnimationOptions(QChart::AllAnimations);//设置序列有动画效果
    //chart->legend()->hide();
    chart->addSeries(graphData->WaterTopTempSeries);//添加水上温度
    chart->addSeries(graphData->WaterBottomTempSeries1);//添加水下温度1
    chart->addSeries(graphData->WaterBottomTempSeries2);//添加水下温度2
    chart->createDefaultAxes();// 创建默认的坐标轴
    chart->setTitle("温度趋势图");
    chart->addAxis(graphData->axisX, Qt::AlignBottom); // 将X轴添加到图表，AlignBottom表示在底部显示
    chart->addAxis(graphData->axisY, Qt::AlignLeft); //将Y轴添加到图表
    graphData->WaterTopTempSeries->attachAxis(graphData->axisX); // 将数据系列与 X 轴关联
    graphData->WaterTopTempSeries->attachAxis(graphData->axisY); // 将数据系列与 Y 轴关联
    chart->removeAxis(chart->axes(Qt::Horizontal).at(0));//移除默认X轴
    chart->removeAxis(chart->axes(Qt::Vertical).at(0));//移除默认Y轴
    chart->legend()->setVisible(true); // 使图例可见
    chart->legend()->setAlignment(Qt::AlignBottom);//将对图例放在下方
    chart->setBackgroundBrush(QColor(27,49,73));//背景色
    //chart->legend()->setMarkerShape(QtCharts::QLegend::MarkerShapeCircle);//图例设为圆形
    chart->legend()->setLabelColor(QColor(122,175,227));//文本字体颜色
    chart->setTitleFont(QFont("楷体",16,QFont::Bold));//设置标头字体样式、大小
    chart->setTitleBrush(QColor(122,175,227));//设置标头字体颜色
    chart->legend()->setFont(QFont("楷体",14));//图例的字体和大小
    chart->axes(Qt::Horizontal).at(0)->setLabelsFont(QFont("楷体",12));//设置X轴字体和大小
    chart->axes(Qt::Vertical).at(0)->setLabelsFont(QFont("楷体",12));//设置Y轴字体和大小
    chart->axes(Qt::Horizontal).at(0)->setLabelsColor(QColor(122,175,227)); //设置X轴标签颜色为红色
    chart->axes(Qt::Vertical).at(0)->setLabelsColor(QColor(122,175,227)); //设置Y轴标签颜色为蓝色
    chart->axes(Qt::Horizontal).at(0)->setLinePen(QPen(QColor(14,26,50),2));//设置X轴标签粗度为2
    chart->axes(Qt::Vertical).at(0)->setLinePen(QPen(QColor(14,26,50),2));//设置Y轴标签粗度为2
    chart->axes(Qt::Horizontal).at(0)->setGridLineColor(QColor(14, 26, 50));//设置X轴网格线颜色为指定的颜色
    chart->axes(Qt::Vertical).at(0)->setGridLineColor(QColor(14, 26, 50));//设置Y轴网格线颜色为指定的颜色
    chart->axes(Qt::Horizontal).at(0)->setLabelsAngle(5);//下标旋转5度
    chart->axes(Qt::Vertical).at(0)->setLabelsAngle(-5);
    ui->Chart->setChart(chart);//添加到界面中
    ui->Chart->setRenderHint(QPainter::Antialiasing);//抗锯齿渲染

    //设置下拉框视图
    ui->ChartComboBox->setView(new QListView());
}
//RealTimePage页面----ChartComboBox切换数据视图
void MainWindow::on_ChartComboBox_currentIndexChanged(const QString &arg1)
{
    chart->removeAllSeries();
    chart->setTitle(arg1);
    graphData->updateGrap(arg1,chart,ui->Chart);
}

//RecordQueryPage页面初始化
void MainWindow::RecordQueryPageInit()
{
    QString scrollBarStyle = "QScrollBar{ background: rgb(14, 26, 50); width: 12px; }"
                             "QScrollBar::handle { background: rgb(19, 39, 67); border: 0px solid rgb(255, 255, 255); border-radius: 5px; }"
                             "QScrollBar::handle:hover { background: rgb(122, 175, 229); }"
                             "QScrollBar::sub-line, QScrollBar::add-line { background: rgb(19, 48, 80); }"
                             "QScrollBar::sub-page:vertical, QScrollBar::add-page:vertical { background: rgb(19, 48, 80); }";
    ui->RecordTableView->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
    ui->RecordTableView->horizontalHeader()->setFixedHeight(25);//设置表头的固定高度为25像素。
    ui->RecordTableView->horizontalHeader()->setHighlightSections(false);
    ui->RecordTableView->verticalHeader()->setVisible(false);   //隐藏列表头
    ui->RecordTableView->setSelectionBehavior(QAbstractItemView::SelectItems);//可以选择单个的项
    ui->RecordTableView->setEditTriggers(QAbstractItemView::NoEditTriggers);//用户不能直接在表格或列表的单元格中进行编辑
    ui->RecordTableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);//设置大小与行内容匹配且鼠标不可拖拽
    ui->RecordTableView->horizontalHeader()->setStretchLastSection(true);
    ui->RecordTableView->verticalScrollBar()->setStyleSheet(scrollBarStyle);
    ui->RecordTableView->horizontalScrollBar()->setStyleSheet(scrollBarStyle);
    qmodelRecoed=new QSqlQueryModel;
    qmodelRecoed->setQuery("select *from Record;");
    qmodelRecoed->setHeaderData(0, Qt::Horizontal, tr("序号"));
    qmodelRecoed->setHeaderData(1, Qt::Horizontal, tr("时间"));
    qmodelRecoed->setHeaderData(2, Qt::Horizontal, tr("类型"));
    qmodelRecoed->setHeaderData(3, Qt::Horizontal, tr("消息"));
    ui->RecordTableView->setModel(qmodelRecoed);
    //设置下拉框视图
    ui->RQSreachBoxType->setView(new QListView());
    ui->RQSreachBoxTime->setView(new QListView());
    //查询按钮
    connect(ui->RQSreachBtn,&QToolButton::clicked,this,[=]{
        QString type=ui->RQSreachBoxType->currentText();
        QString time=ui->RQSreachBoxTime->currentText();
        if(type=="全部"&&time=="全部")
            qmodelRecoed->setQuery("select *from Record;");
        else if(type=="全部"&&time=="今天")
            qmodelRecoed->setQuery("SELECT * FROM Record WHERE DATE(Time)=CURDATE();");
        else if(type=="全部"&&time=="最近三天")
            qmodelRecoed->setQuery("SELECT * FROM Record WHERE Time>=CURDATE()-INTERVAL 3 DAY;");
        else if(type=="全部"&&time=="最近七天")
            qmodelRecoed->setQuery("SELECT * FROM Record WHERE Time>=CURDATE()-INTERVAL 7 DAY;");
        else if(type=="全部"&&time=="最近一个月")
            qmodelRecoed->setQuery("SELECT * FROM Record WHERE Time>=CURDATE()-INTERVAL 1 MONTH;");
        else if(type=="全部"&&time=="最近三个月")
            qmodelRecoed->setQuery("SELECT * FROM Record WHERE Time>=CURDATE()-INTERVAL 3 MONTH;");
        else if(type=="全部"&&time=="最近半年")
            qmodelRecoed->setQuery("SELECT * FROM Record WHERE Time>=CURDATE()-INTERVAL 6 MONTH;");
        else if(type=="全部"&&time=="最近一年")
            qmodelRecoed->setQuery("SELECT * FROM Record WHERE Time>=CURDATE()-INTERVAL 1 YEAR;");
        else if(type!="全部"&&time=="全部")
            qmodelRecoed->setQuery(QString("select *from Record where Type='%1';").arg(type));
        else if(type!="全部"&&time=="今天")
            qmodelRecoed->setQuery(QString("SELECT * FROM Record WHERE DATE(Time)=CURDATE() and Type='%1';").arg(type));
        else if(type!="全部"&&time=="最近三天")
            qmodelRecoed->setQuery(QString("SELECT * FROM Record WHERE Time>=CURDATE()-INTERVAL 3 DAY and Type='%1';").arg(type));
        else if(type!="全部"&&time=="最近七天")
            qmodelRecoed->setQuery(QString("SELECT * FROM Record WHERE Time>=CURDATE()-INTERVAL 7 DAY and Type='%1';").arg(type));
        else if(type!="全部"&&time=="最近一个月")
            qmodelRecoed->setQuery(QString("SELECT * FROM Record WHERE Time>=CURDATE()-INTERVAL 1 MONTH and Type='%1';").arg(type));
        else if(type!="全部"&&time=="最近三个月")
            qmodelRecoed->setQuery(QString("SELECT * FROM Record WHERE Time>=CURDATE()-INTERVAL 3 MONTH and Type='%1';").arg(type));
        else if(type!="全部"&&time=="最近半年")
            qmodelRecoed->setQuery(QString("SELECT * FROM Record WHERE Time>=CURDATE()-INTERVAL 6 MONTH and Type='%1';").arg(type));
        else if(type!="全部"&&time=="最近一年")
            qmodelRecoed->setQuery(QString("SELECT * FROM Record WHERE Time>=CURDATE()-INTERVAL 1 YEAR and Type='%1';").arg(type));
        ui->RecordTableView->setModel(qmodelRecoed);
    });
}
//RecordQueryPage页面----插入记录
void MainWindow::appendLog(int msgtype,QString msg)
{
    QString type;
    if(msgtype==WARN)
    {type="警告";}
    else if (msgtype==PROMPT)
    {type="提示"; }
    QString nowTime=QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
    int RowCont=qmodelRecoed->rowCount();
    QSqlQuery sql;
    QString sqlexec=QString("insert into Record values(%1,'%2','%3','%4');").arg(RowCont+1).arg(nowTime).arg(type).arg(msg);
    if(!sql.exec(sqlexec))
    {
        qDebug()<<"执行错误的SQL:\n"<<sqlexec<<endl;
        return;
    }
    else
    {
        qmodelRecoed->setQuery("select *from Record;");
        ui->RecordTableView->setModel(qmodelRecoed);
    }
}

//ControlPage页面初始化
void MainWindow::ControlPageInit()
{
    ui->ControlStackedWidget->setCurrentIndex(0);//默认显示投喂控制页面
    //==============视图切换按钮==============
    {
        QString defaultStyleSheet = "QToolButton{color: rgb(122, 175, 227);font: 10pt '楷体';border-radius:6px;}"
                                    "QToolButton:hover{background-color: rgb(19, 48, 80);font: 10pt '楷体';border-radius:6px;border:2px solid rgb(13,39,67);}";
        QString pressedStyleSheet = "QToolButton{background-color: rgb(3, 57, 103);font: 10pt '楷体';border-radius:8px;border:2px solid rgb(13,39,67);}";

        connect(ui->ControlBtnAutoTW,&QToolButton::clicked,this,[=]{
            ui->ControlStackedWidget->setCurrentIndex(0);//投喂控制
            ui->ControlBtnAutoTW->setStyleSheet(pressedStyleSheet);
            ui->ControlBtnAutoWD->setStyleSheet(defaultStyleSheet);
            ui->ControlBtnAutoSW->setStyleSheet(defaultStyleSheet);
            ui->ControlBtnAutoHJ->setStyleSheet(defaultStyleSheet);
            ui->ControlBtnAutoYQ->setStyleSheet(defaultStyleSheet);
            ui->ControlBtnAutoGD->setStyleSheet(defaultStyleSheet);
        });
        connect(ui->ControlBtnAutoWD,&QToolButton::clicked,this,[=]{
            ui->ControlStackedWidget->setCurrentIndex(1);//温度控制
            ui->ControlBtnAutoTW->setStyleSheet(defaultStyleSheet);
            ui->ControlBtnAutoWD->setStyleSheet(pressedStyleSheet);
            ui->ControlBtnAutoSW->setStyleSheet(defaultStyleSheet);
            ui->ControlBtnAutoHJ->setStyleSheet(defaultStyleSheet);
            ui->ControlBtnAutoYQ->setStyleSheet(defaultStyleSheet);
            ui->ControlBtnAutoGD->setStyleSheet(defaultStyleSheet);
        });
        connect(ui->ControlBtnAutoSW,&QToolButton::clicked,this,[=]{
            ui->ControlStackedWidget->setCurrentIndex(2);//水位控制
            ui->ControlBtnAutoTW->setStyleSheet(defaultStyleSheet);
            ui->ControlBtnAutoWD->setStyleSheet(defaultStyleSheet);
            ui->ControlBtnAutoSW->setStyleSheet(pressedStyleSheet);
            ui->ControlBtnAutoHJ->setStyleSheet(defaultStyleSheet);
            ui->ControlBtnAutoYQ->setStyleSheet(defaultStyleSheet);
            ui->ControlBtnAutoGD->setStyleSheet(defaultStyleSheet);
        });
        connect(ui->ControlBtnAutoHJ,&QToolButton::clicked,this,[=]{
            ui->ControlStackedWidget->setCurrentIndex(3);//环境控制
            ui->ControlBtnAutoTW->setStyleSheet(defaultStyleSheet);
            ui->ControlBtnAutoWD->setStyleSheet(defaultStyleSheet);
            ui->ControlBtnAutoSW->setStyleSheet(defaultStyleSheet);
            ui->ControlBtnAutoHJ->setStyleSheet(pressedStyleSheet);
            ui->ControlBtnAutoYQ->setStyleSheet(defaultStyleSheet);
            ui->ControlBtnAutoGD->setStyleSheet(defaultStyleSheet);
        });
        connect(ui->ControlBtnAutoYQ,&QToolButton::clicked,this,[=]{
            ui->ControlStackedWidget->setCurrentIndex(4);//氧气控制
            ui->ControlBtnAutoTW->setStyleSheet(defaultStyleSheet);
            ui->ControlBtnAutoWD->setStyleSheet(defaultStyleSheet);
            ui->ControlBtnAutoSW->setStyleSheet(defaultStyleSheet);
            ui->ControlBtnAutoHJ->setStyleSheet(defaultStyleSheet);
            ui->ControlBtnAutoYQ->setStyleSheet(pressedStyleSheet);
            ui->ControlBtnAutoGD->setStyleSheet(defaultStyleSheet);
        });
        connect(ui->ControlBtnAutoGD,&QToolButton::clicked,this,[=]{
            ui->ControlStackedWidget->setCurrentIndex(5);//供电控制
            ui->ControlBtnAutoTW->setStyleSheet(defaultStyleSheet);
            ui->ControlBtnAutoWD->setStyleSheet(defaultStyleSheet);
            ui->ControlBtnAutoSW->setStyleSheet(defaultStyleSheet);
            ui->ControlBtnAutoHJ->setStyleSheet(defaultStyleSheet);
            ui->ControlBtnAutoYQ->setStyleSheet(defaultStyleSheet);
            ui->ControlBtnAutoGD->setStyleSheet(pressedStyleSheet);
        });
    }
    //============== 投喂控制 ==============
    {
        ui->btn_FeedingAuto->setOnBgBrush(QColor(36,61,91));
        ui->btn_FeedingAuto->setOffBgBrush(QColor(36,61,91));
        //投喂是否开启按钮
        connect(ui->btn_FeedingAuto,&SlideButtonLib::isOffValueState,this,[=](bool isOff){
            if(isOff)
            {
                ui->feedingAutoValue->setText("OFF");
                systemState->setStateFeeding("未开启");
            }
            else
            {
                ui->feedingAutoValue->setText("ON");
                systemState->setStateFeeding("已开启");
            }
        });
    }
    //============== 温度控制 ==============
    {
        ui->btn_TempAuto->setOnBgBrush(QColor(36,61,91));
        ui->btn_TempAuto->setOffBgBrush(QColor(36,61,91));
        //自动温度是否开启按钮
        connect(ui->btn_TempAuto,&SlideButtonLib::isOffValueState,this,[=](bool isOff){
            if(isOff)
            {
                ui->tempAutoValue->setText("OFF");
                systemState->setStateTemp("未开启");
            }
            else
            {
                ui->tempAutoValue->setText("ON");
                systemState->setStateTemp("已开启");
            }
        });
    }
    //============== 水位控制 ==============
    {
        ui->btn_WaterlevelAuto->setOnBgBrush(QColor(36,61,91));
        ui->btn_WaterlevelAuto->setOffBgBrush(QColor(36,61,91));
        //自动温度是否开启按钮
        connect(ui->btn_WaterlevelAuto,&SlideButtonLib::isOffValueState,this,[=](bool isOff){
            if(isOff)
            {
                ui->waterlevelAutoValue->setText("OFF");
                systemState->setStateWaterLevel("未开启");
            }
            else
            {
                ui->waterlevelAutoValue->setText("ON");
                systemState->setStateWaterLevel("已开启");
            }
        });
    }
    //============== 环境控制 ==============
    {}
    //============== 氧气控制 ==============
    {}

}
//FaultDetect页面初始化
void MainWindow::FaultDetectInit()
{
    FaultDetect *myFaultDetect=new FaultDetect;
    // 设置myFaultDetect的大小策略为扩展，以便它可以调整大小
    myFaultDetect->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    // 获取BottomWidget4的布局（假设它使用QVBoxLayout）
    QVBoxLayout *layout = qobject_cast<QVBoxLayout *>(ui->BottomWidget4->layout());
    if (layout) {
        // 将myFaultDetect添加到布局中
        layout->addWidget(myFaultDetect);
    } else {
        // 如果BottomWidget4没有布局，则创建一个并设置
        layout = new QVBoxLayout(ui->BottomWidget4);
        layout->addWidget(myFaultDetect);
    }
    // 设置BottomWidget4的布局
    ui->BottomWidget4->setLayout(layout);



}
