#ifndef FAULTDETECT_H
#define FAULTDETECT_H

#include <QWidget>
#include"mypoint.h"
namespace Ui {
class FaultDetect;
}

class FaultDetect : public QWidget
{
    Q_OBJECT

public:
    explicit FaultDetect(QWidget *parent = nullptr) ;
    ~FaultDetect();
    QPoint getPosition(QWidget *widget,int x,int y);
    void setTWKZmodelType(int type);
protected:
    void paintEvent(QPaintEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
private:
    void init();
public slots:
    void faultDetect();
private:
    Ui::FaultDetect *ui;
    QTimer *timer;
    int timerCount=1;
    int paintType=2;
    QColor drawColor=QColor(18, 134, 190);
    int TWKZtype=0;
};

#endif // FAULTDETECT_H
