/********************************************************************************
** Form generated from reading UI file 'watertop.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WATERTOP_H
#define UI_WATERTOP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WaterTop
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QWidget *TempWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *TempIcon;
    QLabel *TempName;
    QLabel *TempValue;
    QLabel *TempUnit;
    QWidget *HumidityWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *HumidityIcon;
    QLabel *HumidityName;
    QLabel *HumidityValue;
    QLabel *HumidityUnit;
    QWidget *PressureWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *PressureIcon;
    QLabel *PressureName;
    QLabel *PressureValue;
    QLabel *PressureUnit;
    QWidget *VocWidget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *VocIcon;
    QLabel *VocName;
    QLabel *VocValue;
    QLabel *VocUnit;
    QWidget *LightWidget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *LightIcon;
    QLabel *LightName;
    QLabel *LightValue;
    QLabel *LightUnit;

    void setupUi(QWidget *WaterTop)
    {
        if (WaterTop->objectName().isEmpty())
            WaterTop->setObjectName(QString::fromUtf8("WaterTop"));
        WaterTop->resize(250, 330);
        WaterTop->setMinimumSize(QSize(250, 330));
        WaterTop->setMaximumSize(QSize(999, 9999));
        WaterTop->setStyleSheet(QString::fromUtf8("#WaterTop\n"
"{\n"
"background-color: rgb(14, 26, 50);\n"
"}\n"
"#widget\n"
"{\n"
"background-color: rgb(14, 26, 50);\n"
"}\n"
"QWidget\n"
"{\n"
"border:0px\n"
"}\n"
"QLabel\n"
"{\n"
"color: rgb(122, 175, 227);\n"
"font: 12pt \"\346\245\267\344\275\223\";\n"
"border:0px\n"
"}"));
        verticalLayout_2 = new QVBoxLayout(WaterTop);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(WaterTop);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(250, 330));
        widget->setMaximumSize(QSize(999, 9999));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        TempWidget = new QWidget(widget);
        TempWidget->setObjectName(QString::fromUtf8("TempWidget"));
        TempWidget->setMinimumSize(QSize(0, 60));
        TempWidget->setMaximumSize(QSize(16777215, 60));
        TempWidget->setStyleSheet(QString::fromUtf8("#TempWidget\n"
"{\n"
"\n"
"}"));
        horizontalLayout = new QHBoxLayout(TempWidget);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        TempIcon = new QLabel(TempWidget);
        TempIcon->setObjectName(QString::fromUtf8("TempIcon"));
        TempIcon->setMinimumSize(QSize(45, 45));
        TempIcon->setMaximumSize(QSize(45, 45));
        TempIcon->setPixmap(QPixmap(QString::fromUtf8(":/ptr/Temp.png")));
        TempIcon->setScaledContents(true);

        horizontalLayout->addWidget(TempIcon);

        TempName = new QLabel(TempWidget);
        TempName->setObjectName(QString::fromUtf8("TempName"));
        TempName->setMinimumSize(QSize(80, 50));
        TempName->setMaximumSize(QSize(999, 999));
        TempName->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(TempName);

        TempValue = new QLabel(TempWidget);
        TempValue->setObjectName(QString::fromUtf8("TempValue"));
        TempValue->setMinimumSize(QSize(30, 50));
        TempValue->setMaximumSize(QSize(999, 999));
        TempValue->setStyleSheet(QString::fromUtf8("font: 16pt ;\n"
"font-weight:bold;\n"
""));
        TempValue->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(TempValue);

        TempUnit = new QLabel(TempWidget);
        TempUnit->setObjectName(QString::fromUtf8("TempUnit"));
        TempUnit->setMinimumSize(QSize(30, 50));
        TempUnit->setMaximumSize(QSize(999, 999));
        TempUnit->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(TempUnit);


        verticalLayout->addWidget(TempWidget);

        HumidityWidget = new QWidget(widget);
        HumidityWidget->setObjectName(QString::fromUtf8("HumidityWidget"));
        HumidityWidget->setMinimumSize(QSize(0, 60));
        HumidityWidget->setMaximumSize(QSize(16777215, 60));
        horizontalLayout_2 = new QHBoxLayout(HumidityWidget);
        horizontalLayout_2->setSpacing(5);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        HumidityIcon = new QLabel(HumidityWidget);
        HumidityIcon->setObjectName(QString::fromUtf8("HumidityIcon"));
        HumidityIcon->setMinimumSize(QSize(45, 45));
        HumidityIcon->setMaximumSize(QSize(45, 45));
        HumidityIcon->setPixmap(QPixmap(QString::fromUtf8(":/ptr/humidity.png")));
        HumidityIcon->setScaledContents(true);

        horizontalLayout_2->addWidget(HumidityIcon);

        HumidityName = new QLabel(HumidityWidget);
        HumidityName->setObjectName(QString::fromUtf8("HumidityName"));
        HumidityName->setMinimumSize(QSize(80, 50));
        HumidityName->setMaximumSize(QSize(999, 999));
        HumidityName->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(HumidityName);

        HumidityValue = new QLabel(HumidityWidget);
        HumidityValue->setObjectName(QString::fromUtf8("HumidityValue"));
        HumidityValue->setMinimumSize(QSize(30, 50));
        HumidityValue->setMaximumSize(QSize(999, 999));
        HumidityValue->setStyleSheet(QString::fromUtf8("font: 16pt ;\n"
"font-weight:bold;\n"
""));
        HumidityValue->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(HumidityValue);

        HumidityUnit = new QLabel(HumidityWidget);
        HumidityUnit->setObjectName(QString::fromUtf8("HumidityUnit"));
        HumidityUnit->setMinimumSize(QSize(30, 50));
        HumidityUnit->setMaximumSize(QSize(999, 999));
        HumidityUnit->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(HumidityUnit);


        verticalLayout->addWidget(HumidityWidget);

        PressureWidget = new QWidget(widget);
        PressureWidget->setObjectName(QString::fromUtf8("PressureWidget"));
        PressureWidget->setMinimumSize(QSize(0, 60));
        PressureWidget->setMaximumSize(QSize(16777215, 60));
        PressureWidget->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_3 = new QHBoxLayout(PressureWidget);
        horizontalLayout_3->setSpacing(5);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        PressureIcon = new QLabel(PressureWidget);
        PressureIcon->setObjectName(QString::fromUtf8("PressureIcon"));
        PressureIcon->setMinimumSize(QSize(45, 45));
        PressureIcon->setMaximumSize(QSize(45, 45));
        PressureIcon->setPixmap(QPixmap(QString::fromUtf8(":/ptr/pressure.png")));
        PressureIcon->setScaledContents(true);

        horizontalLayout_3->addWidget(PressureIcon);

        PressureName = new QLabel(PressureWidget);
        PressureName->setObjectName(QString::fromUtf8("PressureName"));
        PressureName->setMinimumSize(QSize(80, 50));
        PressureName->setMaximumSize(QSize(999, 999));
        PressureName->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(PressureName);

        PressureValue = new QLabel(PressureWidget);
        PressureValue->setObjectName(QString::fromUtf8("PressureValue"));
        PressureValue->setMinimumSize(QSize(30, 50));
        PressureValue->setMaximumSize(QSize(999, 999));
        PressureValue->setStyleSheet(QString::fromUtf8("font: 16pt ;\n"
"font-weight:bold;\n"
""));
        PressureValue->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(PressureValue);

        PressureUnit = new QLabel(PressureWidget);
        PressureUnit->setObjectName(QString::fromUtf8("PressureUnit"));
        PressureUnit->setMinimumSize(QSize(30, 50));
        PressureUnit->setMaximumSize(QSize(999, 999));
        PressureUnit->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(PressureUnit);


        verticalLayout->addWidget(PressureWidget);

        VocWidget = new QWidget(widget);
        VocWidget->setObjectName(QString::fromUtf8("VocWidget"));
        VocWidget->setMinimumSize(QSize(0, 60));
        VocWidget->setMaximumSize(QSize(16777215, 60));
        horizontalLayout_4 = new QHBoxLayout(VocWidget);
        horizontalLayout_4->setSpacing(5);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        VocIcon = new QLabel(VocWidget);
        VocIcon->setObjectName(QString::fromUtf8("VocIcon"));
        VocIcon->setMinimumSize(QSize(45, 45));
        VocIcon->setMaximumSize(QSize(45, 45));
        VocIcon->setPixmap(QPixmap(QString::fromUtf8(":/ptr/voc.png")));
        VocIcon->setScaledContents(true);

        horizontalLayout_4->addWidget(VocIcon);

        VocName = new QLabel(VocWidget);
        VocName->setObjectName(QString::fromUtf8("VocName"));
        VocName->setMinimumSize(QSize(80, 50));
        VocName->setMaximumSize(QSize(999, 999));
        VocName->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(VocName);

        VocValue = new QLabel(VocWidget);
        VocValue->setObjectName(QString::fromUtf8("VocValue"));
        VocValue->setMinimumSize(QSize(30, 50));
        VocValue->setMaximumSize(QSize(999, 999));
        VocValue->setStyleSheet(QString::fromUtf8("font: 16pt ;\n"
"font-weight:bold;\n"
""));
        VocValue->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(VocValue);

        VocUnit = new QLabel(VocWidget);
        VocUnit->setObjectName(QString::fromUtf8("VocUnit"));
        VocUnit->setMinimumSize(QSize(30, 50));
        VocUnit->setMaximumSize(QSize(999, 999));
        VocUnit->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(VocUnit);


        verticalLayout->addWidget(VocWidget);

        LightWidget = new QWidget(widget);
        LightWidget->setObjectName(QString::fromUtf8("LightWidget"));
        LightWidget->setMinimumSize(QSize(0, 60));
        LightWidget->setMaximumSize(QSize(16777215, 60));
        horizontalLayout_5 = new QHBoxLayout(LightWidget);
        horizontalLayout_5->setSpacing(5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        LightIcon = new QLabel(LightWidget);
        LightIcon->setObjectName(QString::fromUtf8("LightIcon"));
        LightIcon->setMinimumSize(QSize(45, 45));
        LightIcon->setMaximumSize(QSize(45, 45));
        LightIcon->setPixmap(QPixmap(QString::fromUtf8(":/ptr/Light.png")));
        LightIcon->setScaledContents(true);

        horizontalLayout_5->addWidget(LightIcon);

        LightName = new QLabel(LightWidget);
        LightName->setObjectName(QString::fromUtf8("LightName"));
        LightName->setMinimumSize(QSize(80, 50));
        LightName->setMaximumSize(QSize(999, 999));
        LightName->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(LightName);

        LightValue = new QLabel(LightWidget);
        LightValue->setObjectName(QString::fromUtf8("LightValue"));
        LightValue->setMinimumSize(QSize(30, 50));
        LightValue->setMaximumSize(QSize(999, 999));
        LightValue->setStyleSheet(QString::fromUtf8("font: 16pt ;\n"
"font-weight:bold;\n"
""));
        LightValue->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(LightValue);

        LightUnit = new QLabel(LightWidget);
        LightUnit->setObjectName(QString::fromUtf8("LightUnit"));
        LightUnit->setMinimumSize(QSize(30, 50));
        LightUnit->setMaximumSize(QSize(999, 999));
        LightUnit->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(LightUnit);


        verticalLayout->addWidget(LightWidget);


        verticalLayout_2->addWidget(widget);


        retranslateUi(WaterTop);

        QMetaObject::connectSlotsByName(WaterTop);
    } // setupUi

    void retranslateUi(QWidget *WaterTop)
    {
        WaterTop->setWindowTitle(QApplication::translate("WaterTop", "Form", nullptr));
        TempIcon->setText(QString());
        TempName->setText(QApplication::translate("WaterTop", "\346\270\251\345\272\246", nullptr));
        TempValue->setText(QApplication::translate("WaterTop", "24.0", nullptr));
        TempUnit->setText(QApplication::translate("WaterTop", "\342\204\203", nullptr));
        HumidityIcon->setText(QString());
        HumidityName->setText(QApplication::translate("WaterTop", "\346\271\277\345\272\246", nullptr));
        HumidityValue->setText(QApplication::translate("WaterTop", "68.0", nullptr));
        HumidityUnit->setText(QApplication::translate("WaterTop", "%", nullptr));
        PressureIcon->setText(QString());
        PressureName->setText(QApplication::translate("WaterTop", "\346\260\224\345\216\213", nullptr));
        PressureValue->setText(QApplication::translate("WaterTop", "1000", nullptr));
        PressureUnit->setText(QApplication::translate("WaterTop", "hPa", nullptr));
        VocIcon->setText(QString());
        VocName->setText(QApplication::translate("WaterTop", "VOC", nullptr));
        VocValue->setText(QApplication::translate("WaterTop", "11.0", nullptr));
        VocUnit->setText(QApplication::translate("WaterTop", "ppm", nullptr));
        LightIcon->setText(QString());
        LightName->setText(QApplication::translate("WaterTop", "\345\205\211\347\205\247\345\274\272\345\272\246", nullptr));
        LightValue->setText(QApplication::translate("WaterTop", "800", nullptr));
        LightUnit->setText(QApplication::translate("WaterTop", "lux", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WaterTop: public Ui_WaterTop {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WATERTOP_H
