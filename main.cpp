#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include<QSqlDatabase>
#include<QSqlError>
int main(int argc, char *argv[])
{
#if (QT_VERSION >= QT_VERSION_CHECK(5,6,0))
    QGuiApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    //设置高分屏属性以便支持2K4K等高分辨率，尤其是手机app。必须写在main函数的QApplication a(argc, argv);的前面。
#endif
    QApplication a(argc, argv);
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("49.232.149.245");//主机
    db.setPort(3306);//端口号
    db.setDatabaseName("Aquaculture");//数据库名
    db.setUserName("root");//用户名
    db.setPassword("123456");//密码
    bool ok = db.open();
    if (ok){
        qDebug()<< "数据库连接成功"<<endl;
    }
    else {
        QMessageBox::information(nullptr, "提示", "数据库连接失败,错误原因:\n"+db.lastError().text());
        return -1;
    }
    MainWindow w;
    w.show();

    return a.exec();
}
