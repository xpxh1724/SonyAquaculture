#include "waterbottom.h"
#include "ui_waterbottom.h"
#include<QDebug>
WaterBottom::WaterBottom(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WaterBottom)
{
    ui->setupUi(this);
}

WaterBottom::~WaterBottom()
{
    delete ui;
}
//通过值来判断对应范围数值的背景颜色：正常、提示、警告
void WaterBottom::ValueColorIsChanged(double nowValue, double zcValue1, double zcValue2, double infoValue1, double infoValue2,double infoValue3,double infoValue4, QWidget *widget)
{
    QString objName=widget->objectName();
    QString InfromtionQss=QString("#%1{background: qradialgradient(cx: 0.5, cy: 0.5, radius: 1, fx: 0.5, fy: 0.5, stop: 0 rgba(7, 46, 125, 0), stop: 1 rgba(183, 172, 31, 0.6));}").arg(objName);
    QString WarningQss=QString("#%1{background: qradialgradient(cx: 0.5, cy: 0.5, radius: 1, fx: 0.5, fy: 0.5, stop: 0 rgba(7, 46, 125, 0), stop: 1 #d5442b);}").arg(objName);
    if(nowValue>=zcValue1&&nowValue<=zcValue2)
    {
        widget->setStyleSheet("");
    }
    else if((nowValue>=infoValue1&&nowValue<infoValue2) ||(nowValue>infoValue3&&nowValue<=infoValue4))
    {
        widget->setStyleSheet(InfromtionQss);
        emit writeLog(objName.split("Widget").at(0),PROMPT);
    }
    else {
        widget->setStyleSheet(WarningQss);
        emit writeLog(objName.split("Widget").at(0),WARN);
    }
}
//设置值
void WaterBottom::setValue(double *Data)
{
    ui->PHValue->setText(QString("%1").arg(Data[5]));
    ui->TdsValue->setText(QString("%1").arg(Data[6]));
    ui->EcValue->setText(QString("%1").arg(Data[7]));
    ui->TurbidityValue->setText(QString("%1").arg(Data[8]));
    ui->Temp1Value->setText(QString("%1").arg(Data[9]));
    ui->Temp2Value->setText(QString("%1").arg(Data[10]));
    ui->WaterLevel1Value->setText(QString("%1").arg(Data[11]));
    ui->WaterLevel2Value->setText(QString("%1").arg(Data[12]));
    ValueColorIsChanged(Data[5],6.5,8.5,6.0,6.5,8.5,9.0,ui->PHWidget);
    ValueColorIsChanged(Data[6],200,500,150,200,500,800,ui->TdsWidget);
    ValueColorIsChanged(Data[7],1.5,3.0,1.0,1.5,3.0,4.0,ui->EcWidget);
    ValueColorIsChanged(Data[8],0,10,10,20,10,20,ui->TurbidityWidget);
    ValueColorIsChanged(Data[9],20,30,15,20,30,35,ui->Temp1Widget);
    ValueColorIsChanged(Data[10],20,30,15,20,30,35,ui->Temp2Widget);
    ValueColorIsChanged(Data[11],25,35,15,20,40,45,ui->WaterLevel1Widget);
    ValueColorIsChanged(Data[12],25,35,15,20,40,45,ui->WaterLevel2Widget);
}
