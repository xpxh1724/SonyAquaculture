#include "systemstate.h"
#include "ui_systemstate.h"

SystemState::SystemState(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SystemState)
{
    ui->setupUi(this);

}

SystemState::~SystemState()
{
    delete ui;
}

void SystemState::setStateFeeding(QString type)
{
    ui->FeedingType->setText(type);
}

void SystemState::setStateTemp(QString type)
{
    ui->TempType->setText(type);
}

void SystemState::setStateWaterLevel(QString type)
{
    ui->WaterLevelType->setText(type);
}

void SystemState::setStateYangQi(QString type)
{
    ui->YangQiType->setText(type);
}

void SystemState::setStateDianYuan(QString type)
{
    ui->DianYuanType->setText(type);
}

void SystemState::updateYJPCType(int YJfd, int PCfd)
{
    if(YJfd==0)
        ui->YJType->setPixmap(QPixmap(":/ptr/NOtype.png"));
    else
        ui->YJType->setPixmap(QPixmap(":/ptr/OKtype.png"));
    if(PCfd==0)
        ui->PCType->setPixmap(QPixmap(":/ptr/NOtype.png"));
    else
        ui->PCType->setPixmap(QPixmap(":/ptr/OKtype.png"));
}
