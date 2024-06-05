#ifndef SYSTEMSTATE_H
#define SYSTEMSTATE_H

#include <QWidget>

namespace Ui {
class SystemState;
}

class SystemState : public QWidget
{
    Q_OBJECT

public:
    explicit SystemState(QWidget *parent = nullptr);
    ~SystemState();
    void setStateFeeding(QString type);
    void setStateTemp(QString type);
    void setStateWaterLevel(QString type);
    void setStateYangQi(QString type);
    void setStateDianYuan(QString type);
public slots:
    void updateYJPCType(int YJfd,int PCfd);
private:
    Ui::SystemState *ui;
};

#endif // SYSTEMSTATE_H
