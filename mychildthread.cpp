#include "mychildthread.h"
#include <QSqlQuery>
#include<QSqlError>
#include<QtDebug>
#include <QMessageBox>
MyChildThread::MyChildThread()
{

}
//检测硬件和PC连接服务器的状态
void MyChildThread::WorkConnectServerStatus()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL", "YJtype"); // 创建新的数据库连接
    db.setHostName("49.232.149.245");//主机
    db.setPort(3306);//端口号
    db.setDatabaseName("Aquaculture");//数据库名
    db.setUserName("root");//用户名
    db.setPassword("123456");//密码
    if (!db.open()) {
        QMessageBox::information(nullptr, "提示", "子线程数据库连接失败,错误原因:\n"+db.lastError().text());
        return;
    }
    QSqlQuery sql(db);
    while(1)
    {
        sql.exec("select fd from Identity;");
        sql.next();
        int YJfd=sql.value(0).toInt();
        sql.next();
        int PCfd=sql.value(0).toInt();
        emit WorkConnectTypeSignal(YJfd,PCfd);
        sql.clear();
        QThread::sleep(2);
    }
}

