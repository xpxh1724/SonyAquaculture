/********************************************************************************
** Form generated from reading UI file 'mypoint.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYPOINT_H
#define UI_MYPOINT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_myPoint
{
public:

    void setupUi(QWidget *myPoint)
    {
        if (myPoint->objectName().isEmpty())
            myPoint->setObjectName(QString::fromUtf8("myPoint"));
        myPoint->resize(60, 60);
        myPoint->setMinimumSize(QSize(60, 60));
        myPoint->setMaximumSize(QSize(60, 60));

        retranslateUi(myPoint);

        QMetaObject::connectSlotsByName(myPoint);
    } // setupUi

    void retranslateUi(QWidget *myPoint)
    {
        myPoint->setWindowTitle(QApplication::translate("myPoint", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class myPoint: public Ui_myPoint {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYPOINT_H
