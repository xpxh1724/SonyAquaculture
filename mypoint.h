#ifndef MYPOINT_H
#define MYPOINT_H

#include <QWidget>
#include <QPainter>
#include <QTimer>
namespace Ui {
class myPoint;
}

class myPoint : public QWidget
{
    Q_OBJECT

public:
    explicit myPoint(QWidget *parent = nullptr);
    ~myPoint();
    QColor getInColor() const;
    void setInColor(const QColor &value);

    QColor getOutStartColor() const;
    void setOutStartColor(const QColor &value);

    QColor getOutEndColor() const;
    void setOutEndColor(const QColor &value);


    QString getColorType() const;
    void setColorType(const QString &value);

    QString getRectType() const;
    void setRectType(const QString &value);

protected:
    //重绘事件 update()后触发此事件
    void paintEvent(QPaintEvent *event);
private:
    Ui::myPoint *ui;
    QTimer *timer;
    bool isOK=false;
    QString colorType="绿色";
    QColor inColor=QColor(0,205, 0);
    QColor outStartColor=QColor(146,226,168);
    QColor outEndColor=QColor(0,205, 0);
    QRect OutRect,InRect;
    QString rectType="小";
//    红色  255,0,0     228,151,151
//    黄色  255,191,0   255,236,178
//    蓝色  0,140,255	  178,220,255
//    绿色  0,205, 0     188, 238, 104

};

#endif // MYPOINT_H
