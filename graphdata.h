#ifndef GRAPHDATA_H
#define GRAPHDATA_H

#include <QObject>
//------QChats类------------
#include <QSplineSeries>//曲线数据类
#include<QValueAxis>//坐标轴类
#include<QChart>
#include<QChartView>
using namespace QtCharts;
class GraphData:public QObject
{
public:
    GraphData();
    QValueAxis *axisX,*axisY;
    QSplineSeries *WaterTopTempSeries,*WaterBottomTempSeries1,*WaterBottomTempSeries2;//水上温度,水下温度1,水下温度2数据
    QSplineSeries *WaterTopShiDuSeries,*WaterTopQiYaSeries,*WaterTopVOCSeries,*WaterTopLightSeries;
    QSplineSeries *WaterBottomPHSeries,*WaterBottomTDSSeries,*WaterBottomECSeries,*WaterBottomZhuoDuSeries
    ,*WaterBottomWaterLevelSeries1,*WaterBottomWaterLevelSeries2;
    //切换曲线图显示内容
    void updateGrap(QString arg1,QChart *chart,QChartView *chartView);
public slots:
    //数据更新槽函数
    void updateDataSlots(QChartView *chartView);
signals:

private:
};

#endif // GRAPHDATA_H
