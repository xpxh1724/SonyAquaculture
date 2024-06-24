#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include<QSqlDatabase>
#include<QSqlError>
int main(int argc, char *argv[])
{
    //永远不应用高分屏及缩放
#if (QT_VERSION >= QT_VERSION_CHECK(5,0,0))
    QApplication::setAttribute(Qt::AA_Use96Dpi);
#endif
#if (QT_VERSION >= QT_VERSION_CHECK(5,14,0))
    QApplication::setHighDpiScaleFactorRoundingPolicy(Qt::HighDpiScaleFactorRoundingPolicy::Floor);
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
