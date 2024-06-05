#ifndef SLIDEBUTTONLIB_H
#define SLIDEBUTTONLIB_H

#include <QWidget>
#include"slidebuttonlib_global.h"
#include <QPainter>
#include <QMouseEvent>
#include <QPropertyAnimation>
namespace Ui {
class SlideButtonLib;
}

class SLIDEBUTTONLIBSHARED_EXPORT SlideButtonLib : public QWidget
{
    Q_OBJECT

public:
    explicit SlideButtonLib(QWidget *parent = nullptr);
    ~SlideButtonLib();
    //获取、设置-OFF时-背景颜色
    QBrush getOffBgBrush() const;
    void setOffBgBrush(const QBrush &value);

    //获取、设置-ON时-背景颜色
    QBrush getOnBgBrush() const;
    void setOnBgBrush(const QBrush &value);

    //获取、设置-OFF-按钮颜色
    QBrush getOffIndicatorBrush() const;
    void setOffIndicatorBrush(const QBrush &value);

    //获取、设置-ON-按钮颜色
    QBrush getOnIndicatorBrush() const;
    void setOnIndicatorBrush(const QBrush &value);

    //获取、设置动画效果
    QEasingCurve::Type getButtonType() const;
    void setButtonType(const QEasingCurve::Type &value);

    //获取、设置-OFF-文字
    QString getOffText() const;
    void setOffText(const QString &value);

    //获取、设置-ON-文字
    QString getOnText() const;
    void setOnText(const QString &value);

protected:
    //重绘事件 update()后触发此事件
    void paintEvent(QPaintEvent *event);
    //鼠标按下事件
    void mousePressEvent(QMouseEvent *event);
    //窗口大小重绘事件
    void resizeEvent(QResizeEvent *event);
signals:
    void isOffValueState(bool isOff);
private:
    Ui::SlideButtonLib *ui;
    bool isOff=true;//是否按下
    QBrush offBgBrush=Qt::black;//关闭时背景颜色
    QBrush onBgBrush=Qt::blue;//打开时背景颜色

    QBrush offIndicatorBrush=Qt::red;//关闭时按钮颜色
    QBrush onIndicatorBrush=Qt::green;//打开时按钮颜色

    int curX;//按钮X位置
    QEasingCurve::Type buttonType=QEasingCurve::Linear;//按钮动画效果

    QString offText="OFF";//按钮关闭时显示的文字
    QString onText="ON";//按钮打开时显示的文字

    bool isOK=true;//动画是否完成
    QPropertyAnimation *animation=nullptr;
};

#endif // SLIDEBUTTONLIB_H
