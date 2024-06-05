#include "mypoint.h"
#include "ui_mypoint.h"

myPoint::myPoint(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::myPoint)
{
    ui->setupUi(this);

    timer=new QTimer;
    timer->start(500); // 每500毫秒更新一次
    connect(timer, &QTimer::timeout, this,[=]{
        if(rectType=="小")
        {
            OutRect.setRect(0, 0, 40,40);
            InRect.setRect(10, 10, 20,20);
        }
        else if (rectType=="中")
                {
                    OutRect.setRect(0, 0, 50,50);
                    InRect.setRect(10, 10, 30,30);
                }
        else if (rectType=="大")
        {
            OutRect.setRect(0, 0, 60,60);
            InRect.setRect(10, 10, 40,40);
        }

        if(colorType=="绿色")
        {
            //"绿色"
            inColor=QColor(0,205, 0);
            outStartColor=QColor(146,226,168);
            outEndColor=QColor(0,205, 0);

        }
        else if(colorType=="黄色")
        {
            //"黄色"
            inColor=QColor(255,191,0);
            outStartColor=QColor(255,236,178);
            outEndColor=QColor(255,191,0);

        }
        else if(colorType=="灰色")
        {
            //"黄色"
            inColor=QColor(Qt::gray);
            outStartColor=QColor(220,220,220);
            outEndColor=QColor(Qt::gray);

        }
        else if(colorType=="红色")
        {
            //"红色"
            inColor=QColor(255,0,0);
            outStartColor=QColor(228,151,151);
            outEndColor=QColor(255,0,0);
        }
        else if (colorType=="蓝色") {
            //蓝色
            inColor=QColor(0,140,255);
            outStartColor=QColor(178,220,255);
            outEndColor=QColor(0,140,255);
        }
        update();
    });

}

myPoint::~myPoint()
{
    delete ui;
}

void myPoint::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter painter(this);
    //设置抗锯齿
    painter.setRenderHint(QPainter::Antialiasing);
    QRect outRect(OutRect);
    QRect inRect(InRect);
    if(!isOK)
    {
        //画外圆
        painter.setPen(Qt::NoPen);
        //        // 创建线性渐变对象
        //        QLinearGradient gradient(0, 1, 0, 0); // 渐变从 (0,0) 到 (1,0)
        //        // 设置渐变的颜色停止点
        //        gradient.setColorAt(0, outStartColor); // 起始颜色
        //        gradient.setColorAt(1, outEndColor);     // 结束颜色
        //        // 创建画刷并将渐变设置为画刷的样式
        //        QBrush brush(gradient);
        QBrush brush(outStartColor);
        // 将画刷设置给 painter
        painter.setBrush(brush);
        painter.drawEllipse(outRect);

    }
    //画内圆
    painter.setBrush(inColor);
    painter.drawEllipse(inRect);
    isOK=!isOK;
}

QString myPoint::getRectType() const
{
    return rectType;
}

void myPoint::setRectType(const QString &value)
{
    rectType = value;
}

QString myPoint::getColorType() const
{
    return colorType;
}

void myPoint::setColorType(const QString &value)
{
    colorType = value;
}


QColor myPoint::getOutEndColor() const
{
    return outEndColor;
}

void myPoint::setOutEndColor(const QColor &value)
{
    outEndColor = value;
}

QColor myPoint::getOutStartColor() const
{
    return outStartColor;
}

void myPoint::setOutStartColor(const QColor &value)
{
    outStartColor = value;
}

QColor myPoint::getInColor() const
{
    return inColor;
}

void myPoint::setInColor(const QColor &value)
{
    inColor = value;
}
