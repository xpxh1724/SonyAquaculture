#include "graphdata.h"

#include <QSqlQuery>
#include <QDateTime>
#include <QTimer>
#include <QDebug>
GraphData::GraphData()
{
    //创建并初始化 QSplineSeries 对象，并设置颜色
    WaterTopTempSeries = new QSplineSeries;
    WaterTopTempSeries->setName("水上温度");
    WaterTopTempSeries->setPen(QPen(QColor(137,104,205),4));//曲线颜色
    WaterBottomTempSeries1 = new QSplineSeries;
    WaterBottomTempSeries1->setName("水下温度1");
    WaterBottomTempSeries1->setPen(QPen(QColor(144,238,144),4));//曲线颜色
    WaterBottomTempSeries2 = new QSplineSeries;
    WaterBottomTempSeries2->setName("水下温度2");
    WaterBottomTempSeries2->setPen(QPen(QColor(255,140,0),4));//曲线颜色
    QSqlQuery sql;
    sql.exec("select Temp,Temp1,Temp2 from MonitorData;");
    for (int i=1;i<=10;i++)
    {
        sql.next();
        *WaterTopTempSeries<<QPointF(i, sql.value(0).toDouble());
        *WaterBottomTempSeries1<<QPointF(i, sql.value(1).toDouble());
        *WaterBottomTempSeries2<<QPointF(i, sql.value(2).toDouble());
    }

    axisX = new QValueAxis;// 创建X轴
    axisX->setRange(1, 10);//设置X轴范围
    axisX->setTickCount(10); // 设置 X 轴上刻度的数量
    axisY = new QValueAxis;// 创建Y轴
    axisY->setTickCount(10);
    axisY->setRange(15, 35);//设置Y轴范围

}
//切换曲线图显示内容
void GraphData::updateGrap(QString arg1,QChart *chart,QChartView *chartView)
{
    chart->setAnimationOptions(QChart::AllAnimations);//设置序列有动画效果
    QSqlQuery sql;
    if(arg1=="温度趋势图")
    {
        WaterTopTempSeries = new QSplineSeries();
        WaterTopTempSeries->setName("水上温度");
        WaterTopTempSeries->setPen(QPen(QColor(137,104,205),4));//曲线颜色
        WaterBottomTempSeries1 = new QSplineSeries();
        WaterBottomTempSeries1->setName("水下温度1");
        WaterBottomTempSeries1->setPen(QPen(QColor(144,238,144),4));//曲线颜色
        WaterBottomTempSeries2 = new QSplineSeries();
        WaterBottomTempSeries2->setName("水下温度2");
        WaterBottomTempSeries2->setPen(QPen(QColor(255,140,0),4));//曲线颜色
        sql.exec("select Temp,Temp1,Temp2 from MonitorData;");
        for (int i=1; i<=10; i++) {
            sql.next();
            *WaterTopTempSeries<<QPointF(i, sql.value(0).toDouble());
            *WaterBottomTempSeries1<<QPointF(i, sql.value(1).toDouble());
            *WaterBottomTempSeries2<<QPointF(i, sql.value(2).toDouble());
        }
        axisY->setRange(10,35);
        chart->addSeries(WaterTopTempSeries);
        chart->addSeries(WaterBottomTempSeries1);
        chart->addSeries(WaterBottomTempSeries2);
        chartView->setChart(chart);//添加到界面中
        WaterTopTempSeries->attachAxis(axisX); // 将数据系列与 X 轴关联
        WaterTopTempSeries->attachAxis(axisY); // 将数据系列与 Y 轴关联
        WaterBottomTempSeries1->attachAxis(axisX); // 将数据系列与 X 轴关联
        WaterBottomTempSeries1->attachAxis(axisY); // 将数据系列与 Y 轴关联
        WaterBottomTempSeries2->attachAxis(axisX); // 将数据系列与 X 轴关联
        WaterBottomTempSeries2->attachAxis(axisY); // 将数据系列与 Y 轴关联
        chartView->setRenderHint(QPainter::Antialiasing);//抗锯齿渲染
    }
    if(arg1=="湿度趋势图")
    {
        WaterTopShiDuSeries=new QSplineSeries();
        WaterTopShiDuSeries->setName("水上湿度");
        WaterTopShiDuSeries->setPen(QPen(QColor(152,245,255),4));//曲线颜色
        sql.exec("select Humidity from MonitorData;");
        for (int i=1; i<=10; i++) {
            sql.next();
            *WaterTopShiDuSeries<<QPointF(i, sql.value(0).toDouble());
        }
        axisY->setRange(50,90);
        chart->addSeries(WaterTopShiDuSeries);
        chartView->setChart(chart);//添加到界面中
        WaterTopShiDuSeries->attachAxis(axisX); // 将数据系列与 X 轴关联
        WaterTopShiDuSeries->attachAxis(axisY); // 将数据系列与 Y 轴关联
        chartView->setRenderHint(QPainter::Antialiasing);//抗锯齿渲染
    }
    if(arg1=="气压趋势图")
    {
        WaterTopQiYaSeries = new QSplineSeries();
        WaterTopQiYaSeries->setName("水上气压");
        WaterTopQiYaSeries->setPen(QPen(QColor(255,255,255),4));//曲线颜色
        sql.exec("select Pressure from MonitorData;");
        for (int i=1; i<=10; i++) {
            sql.next();
            *WaterTopQiYaSeries<<QPointF(i, sql.value(0).toDouble());
        }
        chart->addSeries(WaterTopQiYaSeries); // 这里使用指针是正确的，但也可以直接使用对象名
        axisY->setRange(1000,1030);
        chartView->setChart(chart); //添加到界面中
        WaterTopQiYaSeries->attachAxis(axisX); // 将数据系列与 X 轴关联
        WaterTopQiYaSeries->attachAxis(axisY); // 将数据系列与 Y 轴关联
        chartView->setRenderHint(QPainter::Antialiasing); //抗锯齿渲染
    }
    if(arg1=="VOC趋势图")
    {
        WaterTopVOCSeries=new QSplineSeries();
        WaterTopVOCSeries->setName("水上VOC");
        WaterTopVOCSeries->setPen(QPen(QColor(25,140,0),4));//曲线颜色
        sql.exec("select VOC from MonitorData;");
        for (int i=1; i<=10; i++) {
            sql.next();
            *WaterTopVOCSeries<<QPointF(i, sql.value(0).toDouble());
        }
        axisY->setRange(0,40);
        chart->addSeries(WaterTopVOCSeries); // 这里使用指针是正确的，但也可以直接使用对象名
        chartView->setChart(chart); //添加到界面中
        WaterTopVOCSeries->attachAxis(axisX); // 将数据系列与 X 轴关联
        WaterTopVOCSeries->attachAxis(axisY); // 将数据系列与 Y 轴关联
        chartView->setRenderHint(QPainter::Antialiasing); //抗锯齿渲染
    }
    if(arg1=="光照趋势图")
    {
        WaterTopLightSeries = new QSplineSeries();
        WaterTopLightSeries->setName("水上光照强度");
        WaterTopLightSeries->setPen(QPen(QColor(255,250,205),4));//曲线颜色
        sql.exec("select Light from MonitorData;");
        for (int i=1; i<=10; i++) {
            sql.next();
            *WaterTopLightSeries<<QPointF(i, sql.value(0).toDouble());
        }
        axisY->setRange(300,1500);
        chart->addSeries(WaterTopLightSeries); // 这里使用指针是正确的，但也可以直接使用对象名
        chartView->setChart(chart); //添加到界面中
        WaterTopLightSeries->attachAxis(axisX); // 将数据系列与 X 轴关联
        WaterTopLightSeries->attachAxis(axisY); // 将数据系列与 Y 轴关联
        chartView->setRenderHint(QPainter::Antialiasing); //抗锯齿渲染
    }
    if(arg1=="PH趋势图")
    {
        WaterBottomPHSeries = new QSplineSeries();
        WaterBottomPHSeries->setName("水下PH");
        WaterBottomPHSeries->setPen(QPen(QColor(104,34,139),4));//曲线颜色
        sql.exec("select PH from MonitorData;");
        for (int i=1; i<=10; i++) {
            sql.next();
            *WaterBottomPHSeries<<QPointF(i, sql.value(0).toDouble());
        }
        axisY->setRange(6,9);
        chart->addSeries(WaterBottomPHSeries); // 这里使用指针是正确的，但也可以直接使用对象名
        chartView->setChart(chart); //添加到界面中
        WaterBottomPHSeries->attachAxis(axisX); // 将数据系列与 X 轴关联
        WaterBottomPHSeries->attachAxis(axisY); // 将数据系列与 Y 轴关联
        chartView->setRenderHint(QPainter::Antialiasing); //抗锯齿渲染
    }
    if(arg1=="TDS趋势图")
    {
        WaterBottomTDSSeries = new QSplineSeries();
        WaterBottomTDSSeries->setName("水下TDS");
        WaterBottomTDSSeries->setPen(QPen(QColor(100,149,237),4));//曲线颜色
        sql.exec("select TDS from MonitorData;");
        for (int i=1; i<=10; i++) {
            sql.next();
            *WaterBottomTDSSeries<<QPointF(i, sql.value(0).toDouble());
        }
        axisY->setRange(150,800);
        chart->addSeries(WaterBottomTDSSeries); // 这里使用指针是正确的，但也可以直接使用对象名
        chartView->setChart(chart); //添加到界面中
        WaterBottomTDSSeries->attachAxis(axisX); // 将数据系列与 X 轴关联
        WaterBottomTDSSeries->attachAxis(axisY); // 将数据系列与 Y 轴关联
        chartView->setRenderHint(QPainter::Antialiasing); //抗锯齿渲染
    }
    if(arg1=="EC趋势图")
    {
        WaterBottomECSeries = new QSplineSeries();
        WaterBottomECSeries->setName("水下EC");
        WaterBottomECSeries->setPen(QPen(QColor(72,209,204),4));//曲线颜色
        sql.exec("select EC from MonitorData;");
        for (int i=1; i<=10; i++) {
            sql.next();
            *WaterBottomECSeries<<QPointF(i, sql.value(0).toDouble());
        }
        axisY->setRange(1,4);
        chart->addSeries(WaterBottomECSeries); // 这里使用指针是正确的，但也可以直接使用对象名
        chartView->setChart(chart); //添加到界面中
        WaterBottomECSeries->attachAxis(axisX); // 将数据系列与 X 轴关联
        WaterBottomECSeries->attachAxis(axisY); // 将数据系列与 Y 轴关联
        chartView->setRenderHint(QPainter::Antialiasing); //抗锯齿渲染
    }
    if(arg1=="浊度趋势图")
    {
        WaterBottomZhuoDuSeries = new QSplineSeries();
        WaterBottomZhuoDuSeries->setName("水下浊度");
        WaterBottomZhuoDuSeries->setPen(QPen(QColor(139,105,105),4));//曲线颜色
        sql.exec("select Turbidity from MonitorData;");
        for (int i=1; i<=10; i++) {
            sql.next();
            *WaterBottomZhuoDuSeries<<QPointF(i, sql.value(0).toDouble());
        }
        axisY->setRange(0,20);
        chart->addSeries(WaterBottomZhuoDuSeries); // 这里使用指针是正确的，但也可以直接使用对象名
        chartView->setChart(chart); //添加到界面中
        WaterBottomZhuoDuSeries->attachAxis(axisX); // 将数据系列与 X 轴关联
        WaterBottomZhuoDuSeries->attachAxis(axisY); // 将数据系列与 Y 轴关联
        chartView->setRenderHint(QPainter::Antialiasing); //抗锯齿渲染
    }
    if(arg1=="水位趋势图")
    {
        WaterBottomWaterLevelSeries1 = new QSplineSeries();
        WaterBottomWaterLevelSeries1->setName("水下水位1");
        WaterBottomWaterLevelSeries1->setPen(QPen(QColor(240,255,255),4));//曲线颜色
        WaterBottomWaterLevelSeries2 = new QSplineSeries();
        WaterBottomWaterLevelSeries2->setName("水下水位2");
        WaterBottomWaterLevelSeries2->setPen(QPen(QColor(72,118,255),4));//曲线颜色
        sql.exec("select WaterLevel1,WaterLevel2 from MonitorData;");
        for (int i=1; i<=10; i++) {
            sql.next();
            *WaterBottomWaterLevelSeries1<<QPointF(i, sql.value(0).toDouble());
            *WaterBottomWaterLevelSeries2<<QPointF(i, sql.value(1).toDouble());
        }
        axisY->setRange(15,45);
        chart->addSeries(WaterBottomWaterLevelSeries1);
        chart->addSeries(WaterBottomWaterLevelSeries2);
        chartView->setChart(chart); //添加到界面中
        WaterBottomWaterLevelSeries1->attachAxis(axisX); // 将数据系列与 X 轴关联
        WaterBottomWaterLevelSeries1->attachAxis(axisY); // 将数据系列与 Y 轴关联
        WaterBottomWaterLevelSeries2->attachAxis(axisX); // 将数据系列与 X 轴关联
        WaterBottomWaterLevelSeries2->attachAxis(axisY); // 将数据系列与 Y 轴关联
        chartView->setRenderHint(QPainter::Antialiasing); //抗锯齿渲染
    }
}
//数据更新槽函数
void GraphData::updateDataSlots(QChartView *chartView)
{
    QString QChartName=chartView->chart()->title();
    qDebug()<<"QChart Name:"<<QChartName<<endl;

    QSqlQuery sql;
    sql.exec("select * from MonitorData;");
    if(QChartName=="温度趋势图")
    {
        QList<QPointF>temp,temp1,temp2;
        for (int i=1;i<=10;i++) {
            sql.next();
            temp.append(QPointF(i,sql.value(0).toDouble()));
            temp1.append(QPointF(i,sql.value(9).toDouble()));
            temp2.append(QPointF(i,sql.value(10).toDouble()));
        }
        WaterTopTempSeries->replace(temp);
        WaterBottomTempSeries1->replace(temp1);
        WaterBottomTempSeries2->replace(temp2);
    }
    if(QChartName=="湿度趋势图")
    {
        QList<QPointF>humidity;
        for (int i=1;i<=10;i++) {
            sql.next();
            humidity.append(QPointF(i,sql.value(1).toDouble()));
        }
        WaterTopShiDuSeries->replace(humidity);
    }
    if(QChartName=="气压趋势图")
    {
        QList<QPointF>pressure;
        for (int i=1;i<=10;i++) {
            sql.next();
            pressure.append(QPointF(i,sql.value(2).toDouble()));
        }
        WaterTopQiYaSeries->replace(pressure);
    }
    if(QChartName=="VOC趋势图")
    {
        QList<QPointF>voc;
        for (int i=1;i<=10;i++) {
            sql.next();
            voc.append(QPointF(i,sql.value(3).toDouble()));
        }
        WaterTopVOCSeries->replace(voc);
    }
    if(QChartName=="光照趋势图")
    {
        QList<QPointF>light;
        for (int i=1;i<=10;i++) {
            sql.next();
            light.append(QPointF(i,sql.value(4).toDouble()));
        }
        WaterTopLightSeries->replace(light);
    }
    if(QChartName=="PH趋势图")
    {
        QList<QPointF>ph;
        for (int i=1;i<=10;i++) {
            sql.next();
            ph.append(QPointF(i,sql.value(5).toDouble()));
        }
        WaterBottomPHSeries->replace(ph);
    }
    if(QChartName=="TDS趋势图")
    {
        QList<QPointF>tds;
        for (int i=1;i<=10;i++) {
            sql.next();
            tds.append(QPointF(i,sql.value(6).toDouble()));
        }
        WaterBottomTDSSeries->replace(tds);
    }
    if(QChartName=="EC趋势图")
    {
        QList<QPointF>ec;
        for (int i=1;i<=10;i++) {
            sql.next();
            ec.append(QPointF(i,sql.value(7).toDouble()));
        }
        WaterBottomECSeries->replace(ec);
    }
    if(QChartName=="浊度趋势图")
    {
        QList<QPointF>turbidity;
        for (int i=1;i<=10;i++) {
            sql.next();
            turbidity.append(QPointF(i,sql.value(8).toDouble()));
        }
        WaterBottomZhuoDuSeries->replace(turbidity);
    }
    if(QChartName=="水位趋势图")
    {
        QList<QPointF>waterLevel1,waterLevel2;
        for (int i=1;i<=10;i++) {
            sql.next();
            waterLevel1.append(QPointF(i,sql.value(11).toDouble()));
            waterLevel2.append(QPointF(i,sql.value(12).toDouble()));
        }
        WaterBottomWaterLevelSeries1->replace(waterLevel1);
        WaterBottomWaterLevelSeries2->replace(waterLevel2);
    }
}
