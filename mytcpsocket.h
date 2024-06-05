#ifndef MYTCPSOCKET_H
#define MYTCPSOCKET_H

#include<QTcpSocket>
#include<QDebug>
#include<QJsonObject>
#include<QJsonDocument>
class MyTcpSocket:public QTcpSocket
{
    Q_OBJECT
public:
    MyTcpSocket();
    void initConnect(QString ip, quint16 port);
signals:
    void connectServerOK();
    void updateData(double*Data);
private:
    QTcpSocket *m_tcp;
    double Data[13];
};

#endif // MYTCPSOCKET_H
