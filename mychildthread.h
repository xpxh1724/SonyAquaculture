#ifndef MYCHILDTHREAD_H
#define MYCHILDTHREAD_H

#include <QObject>
#include <QThread>
class MyChildThread:public QObject
{
    Q_OBJECT
public:
    MyChildThread();
    //检测硬件和PC连接服务器的状态
    void WorkConnectServerStatus();
signals:
    void WorkConnectTypeSignal(int YJfd,int PCfd);
public slots:

private:

};

#endif // MYCHILDTHREAD_H
