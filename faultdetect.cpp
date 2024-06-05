#include "faultdetect.h"
#include "ui_faultdetect.h"
#include<QDebug>
#include <QMouseEvent>
#include <QPoint>
#include<QMessageBox>
#include<QThread>
FaultDetect::FaultDetect(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FaultDetect)
{
    ui->setupUi(this);
    init();


    connect(ui->btnFaultDetect,&QPushButton::clicked,this,[=]{
        ui->btnFaultDetect->setText("自检中");
        ui->btnFaultDetect->setEnabled(false);
        ui->XTQ->setColorType("灰色");
        ui->autoSZJCmodule->setColorType("灰色");
        ui->ZYKZmodule->setColorType("灰色");
        ui->DJLXJmodule->setColorType("灰色");
        ui->autoSWKZmodule->setColorType("灰色");
        ui->autoSWKZmodule_2->setColorType("灰色");
        ui->autoTWmodule->setColorType("灰色");
        ui->KQHJJCmodule->setColorType("灰色");
        ui->SDsensor1->setColorType("灰色");
        ui->WDKZmodule->setColorType("灰色");
        ui->SDsensor2->setColorType("灰色");
        ui->CSBsensor->setColorType("灰色");
        ui->SWsensor->setColorType("灰色");
        ui->JSSB->setColorType("灰色");
        ui->CSSB->setColorType("灰色");
        ui->ZLsensor->setColorType("灰色");
        ui->autoFM->setColorType("灰色");
        ui->TWKZTmodule->setColorType("灰色");
        paintType=1;
        timer->start(500);
    });
    timer=new QTimer;
    connect(timer,&QTimer::timeout,this,[=]{
        faultDetect();
    });

}

FaultDetect::~FaultDetect()
{
    delete ui;
}

QPoint FaultDetect::getPosition(QWidget *widget,int x,int y)
{
    QPoint centerPoint(widget->pos().x()+x,widget->pos().y()+y);
    return this->parentWidget()->mapFromGlobal(widget->parentWidget()->mapToGlobal(centerPoint));
}


void FaultDetect::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter painter(this);

    //设置抗锯齿
    painter.setRenderHint(QPainter::Antialiasing);

    // 创建一个 QPen 对象并设置线条样式和宽度
    QPen pen(Qt::SolidLine); // 使用实线
    pen.setWidth(4); // 设置线条宽度为 2 像素

    pen.setColor(drawColor);
    painter.setPen(pen);

    QPoint XTQpoint(getPosition(ui->XTQ,30,30));

    QPoint autoSZJCpoint(getPosition(ui->autoSZJCmodule,25,25));
    QPoint ZYKZpoint(getPosition(ui->ZYKZmodule,25,25));
    QPoint DJLXJpoint(getPosition(ui->DJLXJmodule,20,20));

    QPoint autoSWKZpoint(getPosition(ui->autoSWKZmodule,25,25));
    QPoint autoSW2KZpoint(getPosition(ui->autoSWKZmodule_2,25,25));
    QPoint autoTWpoint(getPosition(ui->autoTWmodule,25,25));
    QPoint KQHJJCpoint(getPosition(ui->KQHJJCmodule,25,25));

    QPoint SDsensor1Point(getPosition(ui->SDsensor1,20,20));
    QPoint WDKZmodulePoint(getPosition(ui->WDKZmodule,20,20));
    QPoint SDsensor2Point(getPosition(ui->SDsensor2,20,20));

    QPoint CSBsensorPoint(getPosition(ui->CSBsensor,20,20));
    QPoint SWsensorPoint(getPosition(ui->SWsensor,20,20));
    QPoint JSSBpoint(getPosition(ui->JSSB,20,20));
    QPoint CSSBpoint(getPosition(ui->CSSB,20,20));

    QPoint ZLsensorPoint(getPosition(ui->ZLsensor,20,20));
    QPoint autoFMpoint(getPosition(ui->autoFM,20,20));
    QPoint TWKZTmodulePoint(getPosition(ui->TWKZTmodule,20,20));

    painter.drawLine(XTQpoint,autoSZJCpoint);
    painter.drawLine(XTQpoint,ZYKZpoint);
    painter.drawLine(XTQpoint,autoSWKZpoint);
    painter.drawLine(XTQpoint,autoSW2KZpoint);
    painter.drawLine(XTQpoint,autoTWpoint);
    painter.drawLine(XTQpoint,KQHJJCpoint);
    painter.drawLine(autoSZJCpoint,DJLXJpoint);
    painter.drawLine(autoSZJCpoint,autoSWKZpoint);
    painter.drawLine(autoSWKZpoint,autoSW2KZpoint);
    painter.drawLine(autoSWKZpoint,SDsensor1Point);
    painter.drawLine(autoSW2KZpoint,autoTWpoint);

    painter.drawLine(autoSWKZpoint,SDsensor1Point);
    painter.drawLine(autoSWKZpoint,WDKZmodulePoint);
    painter.drawLine(autoSWKZpoint,SDsensor2Point);

    painter.drawLine(autoSW2KZpoint,CSBsensorPoint);
    painter.drawLine(autoSW2KZpoint,SWsensorPoint);
    painter.drawLine(autoSW2KZpoint,JSSBpoint);
    painter.drawLine(autoSW2KZpoint,CSSBpoint);

    painter.drawLine(autoTWpoint,ZLsensorPoint);
    painter.drawLine(autoTWpoint,autoFMpoint);
    painter.drawLine(autoTWpoint,TWKZTmodulePoint);
}


void FaultDetect::mouseMoveEvent(QMouseEvent *event)
{    // 获取鼠标在当前控件上的位置
    QPoint localPos = event->pos();
    qDebug() << "Mouse position in widget:" << localPos;

    // 如果你想要获取鼠标相对于主窗口的位置，你可以这样做：
    QPoint globalPos = this->mapToGlobal(localPos);
    QPoint mainWindowPos = this->mapFromGlobal(globalPos);
    qDebug() << "Mouse position in main window:" << mainWindowPos;

    // 调用基类的mouseMoveEvent以保持正常的事件处理
    QWidget::mouseMoveEvent(event);

}

void FaultDetect::init()
{
    ui->XTQ->setRectType("大");
    ui->XTQ->setColorType("绿色");
    ui->autoSZJCmodule->setRectType("中");
    ui->autoSZJCmodule->setColorType("绿色");
    ui->ZYKZmodule->setRectType("中");
    ui->ZYKZmodule->setColorType("红色");
    ui->DJLXJmodule->setColorType("红色");
    ui->autoSWKZmodule->setRectType("中");
    ui->autoSWKZmodule->setColorType("绿色");
    ui->autoSWKZmodule_2->setRectType("中");
    ui->autoSWKZmodule_2->setColorType("绿色");
    ui->autoTWmodule->setRectType("中");
    ui->autoTWmodule->setColorType("绿色");
    ui->KQHJJCmodule->setRectType("中");
    ui->KQHJJCmodule->setColorType("绿色");
    ui->WDKZmodule->setColorType("红色");
    ui->SDsensor1->setColorType("绿色");
    ui->SDsensor2->setColorType("绿色");
    ui->CSBsensor->setColorType("绿色");
    ui->SWsensor->setColorType("绿色");
    ui->JSSB->setColorType("红色");
    ui->CSSB->setColorType("红色");
    ui->ZLsensor->setColorType("绿色");
    ui->autoFM->setColorType("红色");
    ui->TWKZTmodule->setColorType("红色");

}

void FaultDetect::faultDetect()
{
    //开始自检
    if (timerCount==1) {
        drawColor=QColor(18, 134, 190);
        ui->XTQ->setColorType("绿色");
        timerCount++;
    }
    else if (timerCount==2) {
        ui->autoSZJCmodule->setColorType("绿色");
        timerCount++;

    }
    else if (timerCount==3) {
        ui->ZYKZmodule->setColorType("红色");
        timerCount++;

    }
    else if (timerCount==4) {
        ui->DJLXJmodule->setColorType("红色");
        timerCount++;

    }
    else if (timerCount==5) {
        ui->autoSWKZmodule->setColorType("绿色");
        timerCount++;

    }
    else if (timerCount==6) {
        ui->autoSWKZmodule_2->setColorType("绿色");
        timerCount++;

    }
    else if (timerCount==7) {
        ui->autoTWmodule->setColorType("绿色");
        timerCount++;

    }
    else if (timerCount==8) {
        ui->KQHJJCmodule->setColorType("绿色");
        timerCount++;

    }
    else if (timerCount==9) {
        ui->SDsensor1->setColorType("绿色");
        timerCount++;

    }
    else if (timerCount==10) {

        ui->WDKZmodule->setColorType("红色");
        timerCount++;

    }
    else if (timerCount==11) {
        ui->SDsensor2->setColorType("绿色");
        timerCount++;

    }
    else if (timerCount==12) {
        ui->CSBsensor->setColorType("绿色");
        timerCount++;

    }
    else if (timerCount==13) {
        ui->SWsensor->setColorType("绿色");
        timerCount++;

    }
    else if (timerCount==14) {
        ui->JSSB->setColorType("红色");
        timerCount++;

    }
    else if (timerCount==15) {
        ui->CSSB->setColorType("红色");
        timerCount++;

    }
    else if (timerCount==16) {
        ui->ZLsensor->setColorType("绿色");
        timerCount++;

    }
    else if (timerCount==17) {
        ui->autoFM->setColorType("红色");
        timerCount++;

    }
    else if (timerCount==18) {
        ui->TWKZTmodule->setColorType("红色");
        timerCount++;

    }
    else if (timerCount==19) {
        paintType=0;
        timer->stop();
        ui->btnFaultDetect->setText("点击检测");
        ui->btnFaultDetect->setEnabled(true);
        QMessageBox::information(0,"故障检测提示","检测完成");
        timerCount=1;
    }
}
