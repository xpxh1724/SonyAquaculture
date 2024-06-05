#include "mytcpsocket.h"

#include <QHostAddress>
#include <QTimer>

MyTcpSocket::MyTcpSocket()
{
    // 创建通信的套接字对象
    m_tcp = new QTcpSocket(this);

    // 检测是否和服务器是否连接成功了
    connect(m_tcp, &QTcpSocket::connected, this, [=]()
    {
        emit connectServerOK();
        QJsonObject obj;
        obj.insert("ID","client_1");
        QJsonDocument doc(obj);
        qDebug()<<"test:"<<doc.toJson()<<endl;
        m_tcp->write(doc.toJson());
    });

    // 检测服务器是否回复了数据
    connect(m_tcp, &QTcpSocket::readyRead, [=]()
    {
        // 接收服务器发送的数据
        QByteArray recvMsg = m_tcp->readAll();
        QString msg=QString::fromUtf8(recvMsg);
        for (int i=0;i<13;i++) {
            Data[i]=msg.split(',').at(i).toDouble();
        }
        emit updateData(Data);
    });

    // 检测服务器是否和客户端断开了连接
    connect(m_tcp, &QTcpSocket::disconnected, this, [=]()
    {
        qDebug()<<"与服务器断开了连接......"<<endl;
    });


}

void MyTcpSocket::initConnect(QString ip, quint16 port)
{
    m_tcp->connectToHost(QHostAddress(ip), port);
}
