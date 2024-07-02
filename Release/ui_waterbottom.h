/********************************************************************************
** Form generated from reading UI file 'waterbottom.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WATERBOTTOM_H
#define UI_WATERBOTTOM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WaterBottom
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QWidget *PHWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *PHIcon;
    QLabel *PHName;
    QLabel *PHValue;
    QLabel *PHUnit;
    QWidget *TdsWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *TdsIcon;
    QLabel *TdsName;
    QLabel *TdsValue;
    QLabel *TdsUnit;
    QWidget *EcWidget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *EcIcon;
    QLabel *EcName;
    QLabel *EcValue;
    QLabel *EcUnit;
    QWidget *TurbidityWidget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *TurbidityIcon;
    QLabel *TurbidityName;
    QLabel *TurbidityValue;
    QLabel *TurbidityUnit;
    QWidget *Temp1Widget;
    QHBoxLayout *horizontalLayout;
    QLabel *Temp1Icon;
    QLabel *Temp1Name;
    QLabel *Temp1Value;
    QLabel *Temp1Unit;
    QWidget *Temp2Widget;
    QHBoxLayout *horizontalLayout_6;
    QLabel *Temp2Icon;
    QLabel *Temp2Name;
    QLabel *Temp2Value;
    QLabel *Temp2Unit;
    QWidget *WaterLevel1Widget;
    QHBoxLayout *horizontalLayout_7;
    QLabel *WaterLevel1Icon;
    QLabel *WaterLevel1Name;
    QLabel *WaterLevel1Value;
    QLabel *WaterLeve1lUnit;
    QWidget *WaterLevel2Widget;
    QHBoxLayout *horizontalLayout_8;
    QLabel *WaterLevel2Icon;
    QLabel *WaterLevel2Name;
    QLabel *WaterLevel2Value;
    QLabel *WaterLevel2Unit;

    void setupUi(QWidget *WaterBottom)
    {
        if (WaterBottom->objectName().isEmpty())
            WaterBottom->setObjectName(QString::fromUtf8("WaterBottom"));
        WaterBottom->resize(250, 480);
        WaterBottom->setMinimumSize(QSize(250, 480));
        WaterBottom->setStyleSheet(QString::fromUtf8("#WaterBottom\n"
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
        verticalLayout_2 = new QVBoxLayout(WaterBottom);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(WaterBottom);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(250, 480));
        widget->setMaximumSize(QSize(999, 9999));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 5, 0, 0);
        PHWidget = new QWidget(widget);
        PHWidget->setObjectName(QString::fromUtf8("PHWidget"));
        PHWidget->setMinimumSize(QSize(0, 60));
        PHWidget->setMaximumSize(QSize(16777215, 60));
        PHWidget->setStyleSheet(QString::fromUtf8("#PHWidget\n"
"{\n"
"\n"
"}"));
        horizontalLayout_2 = new QHBoxLayout(PHWidget);
        horizontalLayout_2->setSpacing(5);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        PHIcon = new QLabel(PHWidget);
        PHIcon->setObjectName(QString::fromUtf8("PHIcon"));
        PHIcon->setMinimumSize(QSize(45, 45));
        PHIcon->setMaximumSize(QSize(45, 45));
        PHIcon->setPixmap(QPixmap(QString::fromUtf8(":/ptr/pH.png")));
        PHIcon->setScaledContents(true);

        horizontalLayout_2->addWidget(PHIcon);

        PHName = new QLabel(PHWidget);
        PHName->setObjectName(QString::fromUtf8("PHName"));
        PHName->setMinimumSize(QSize(80, 50));
        PHName->setMaximumSize(QSize(999, 999));
        PHName->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(PHName);

        PHValue = new QLabel(PHWidget);
        PHValue->setObjectName(QString::fromUtf8("PHValue"));
        PHValue->setMinimumSize(QSize(30, 50));
        PHValue->setMaximumSize(QSize(999, 999));
        PHValue->setStyleSheet(QString::fromUtf8("font: 16pt ;\n"
"font-weight:bold;\n"
""));
        PHValue->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(PHValue);

        PHUnit = new QLabel(PHWidget);
        PHUnit->setObjectName(QString::fromUtf8("PHUnit"));
        PHUnit->setMinimumSize(QSize(30, 50));
        PHUnit->setMaximumSize(QSize(999, 999));
        PHUnit->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(PHUnit);


        verticalLayout->addWidget(PHWidget);

        TdsWidget = new QWidget(widget);
        TdsWidget->setObjectName(QString::fromUtf8("TdsWidget"));
        TdsWidget->setMinimumSize(QSize(0, 60));
        TdsWidget->setMaximumSize(QSize(16777215, 60));
        horizontalLayout_3 = new QHBoxLayout(TdsWidget);
        horizontalLayout_3->setSpacing(5);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        TdsIcon = new QLabel(TdsWidget);
        TdsIcon->setObjectName(QString::fromUtf8("TdsIcon"));
        TdsIcon->setMinimumSize(QSize(45, 45));
        TdsIcon->setMaximumSize(QSize(45, 45));
        TdsIcon->setPixmap(QPixmap(QString::fromUtf8(":/ptr/TDS.png")));
        TdsIcon->setScaledContents(true);

        horizontalLayout_3->addWidget(TdsIcon);

        TdsName = new QLabel(TdsWidget);
        TdsName->setObjectName(QString::fromUtf8("TdsName"));
        TdsName->setMinimumSize(QSize(80, 50));
        TdsName->setMaximumSize(QSize(999, 999));
        TdsName->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(TdsName);

        TdsValue = new QLabel(TdsWidget);
        TdsValue->setObjectName(QString::fromUtf8("TdsValue"));
        TdsValue->setMinimumSize(QSize(30, 50));
        TdsValue->setMaximumSize(QSize(999, 999));
        TdsValue->setStyleSheet(QString::fromUtf8("font: 16pt ;\n"
"font-weight:bold;\n"
""));
        TdsValue->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(TdsValue);

        TdsUnit = new QLabel(TdsWidget);
        TdsUnit->setObjectName(QString::fromUtf8("TdsUnit"));
        TdsUnit->setMinimumSize(QSize(30, 50));
        TdsUnit->setMaximumSize(QSize(999, 999));
        TdsUnit->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(TdsUnit);


        verticalLayout->addWidget(TdsWidget);

        EcWidget = new QWidget(widget);
        EcWidget->setObjectName(QString::fromUtf8("EcWidget"));
        EcWidget->setMinimumSize(QSize(0, 60));
        EcWidget->setMaximumSize(QSize(16777215, 60));
        horizontalLayout_4 = new QHBoxLayout(EcWidget);
        horizontalLayout_4->setSpacing(5);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        EcIcon = new QLabel(EcWidget);
        EcIcon->setObjectName(QString::fromUtf8("EcIcon"));
        EcIcon->setMinimumSize(QSize(45, 45));
        EcIcon->setMaximumSize(QSize(45, 45));
        EcIcon->setPixmap(QPixmap(QString::fromUtf8(":/ptr/EC.png")));
        EcIcon->setScaledContents(true);

        horizontalLayout_4->addWidget(EcIcon);

        EcName = new QLabel(EcWidget);
        EcName->setObjectName(QString::fromUtf8("EcName"));
        EcName->setMinimumSize(QSize(80, 50));
        EcName->setMaximumSize(QSize(999, 999));
        EcName->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(EcName);

        EcValue = new QLabel(EcWidget);
        EcValue->setObjectName(QString::fromUtf8("EcValue"));
        EcValue->setMinimumSize(QSize(30, 50));
        EcValue->setMaximumSize(QSize(999, 999));
        EcValue->setStyleSheet(QString::fromUtf8("font: 16pt ;\n"
"font-weight:bold;\n"
""));
        EcValue->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(EcValue);

        EcUnit = new QLabel(EcWidget);
        EcUnit->setObjectName(QString::fromUtf8("EcUnit"));
        EcUnit->setMinimumSize(QSize(30, 50));
        EcUnit->setMaximumSize(QSize(999, 999));
        EcUnit->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(EcUnit);


        verticalLayout->addWidget(EcWidget);

        TurbidityWidget = new QWidget(widget);
        TurbidityWidget->setObjectName(QString::fromUtf8("TurbidityWidget"));
        TurbidityWidget->setMinimumSize(QSize(0, 60));
        TurbidityWidget->setMaximumSize(QSize(16777215, 60));
        horizontalLayout_5 = new QHBoxLayout(TurbidityWidget);
        horizontalLayout_5->setSpacing(5);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        TurbidityIcon = new QLabel(TurbidityWidget);
        TurbidityIcon->setObjectName(QString::fromUtf8("TurbidityIcon"));
        TurbidityIcon->setMinimumSize(QSize(45, 45));
        TurbidityIcon->setMaximumSize(QSize(45, 45));
        TurbidityIcon->setPixmap(QPixmap(QString::fromUtf8(":/ptr/turbidity.png")));
        TurbidityIcon->setScaledContents(true);

        horizontalLayout_5->addWidget(TurbidityIcon);

        TurbidityName = new QLabel(TurbidityWidget);
        TurbidityName->setObjectName(QString::fromUtf8("TurbidityName"));
        TurbidityName->setMinimumSize(QSize(80, 50));
        TurbidityName->setMaximumSize(QSize(999, 999));
        TurbidityName->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(TurbidityName);

        TurbidityValue = new QLabel(TurbidityWidget);
        TurbidityValue->setObjectName(QString::fromUtf8("TurbidityValue"));
        TurbidityValue->setMinimumSize(QSize(30, 50));
        TurbidityValue->setMaximumSize(QSize(999, 999));
        TurbidityValue->setStyleSheet(QString::fromUtf8("font: 16pt ;\n"
"font-weight:bold;\n"
""));
        TurbidityValue->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(TurbidityValue);

        TurbidityUnit = new QLabel(TurbidityWidget);
        TurbidityUnit->setObjectName(QString::fromUtf8("TurbidityUnit"));
        TurbidityUnit->setMinimumSize(QSize(30, 50));
        TurbidityUnit->setMaximumSize(QSize(999, 999));
        TurbidityUnit->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(TurbidityUnit);


        verticalLayout->addWidget(TurbidityWidget);

        Temp1Widget = new QWidget(widget);
        Temp1Widget->setObjectName(QString::fromUtf8("Temp1Widget"));
        Temp1Widget->setMinimumSize(QSize(0, 60));
        Temp1Widget->setMaximumSize(QSize(16777215, 60));
        horizontalLayout = new QHBoxLayout(Temp1Widget);
        horizontalLayout->setSpacing(5);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Temp1Icon = new QLabel(Temp1Widget);
        Temp1Icon->setObjectName(QString::fromUtf8("Temp1Icon"));
        Temp1Icon->setMinimumSize(QSize(45, 45));
        Temp1Icon->setMaximumSize(QSize(45, 45));
        Temp1Icon->setPixmap(QPixmap(QString::fromUtf8(":/ptr/Temp.png")));
        Temp1Icon->setScaledContents(true);

        horizontalLayout->addWidget(Temp1Icon);

        Temp1Name = new QLabel(Temp1Widget);
        Temp1Name->setObjectName(QString::fromUtf8("Temp1Name"));
        Temp1Name->setMinimumSize(QSize(80, 50));
        Temp1Name->setMaximumSize(QSize(999, 999));
        Temp1Name->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(Temp1Name);

        Temp1Value = new QLabel(Temp1Widget);
        Temp1Value->setObjectName(QString::fromUtf8("Temp1Value"));
        Temp1Value->setMinimumSize(QSize(30, 50));
        Temp1Value->setMaximumSize(QSize(999, 999));
        Temp1Value->setStyleSheet(QString::fromUtf8("font: 16pt ;\n"
"font-weight:bold;\n"
""));
        Temp1Value->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(Temp1Value);

        Temp1Unit = new QLabel(Temp1Widget);
        Temp1Unit->setObjectName(QString::fromUtf8("Temp1Unit"));
        Temp1Unit->setMinimumSize(QSize(30, 50));
        Temp1Unit->setMaximumSize(QSize(999, 999));
        Temp1Unit->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(Temp1Unit);


        verticalLayout->addWidget(Temp1Widget);

        Temp2Widget = new QWidget(widget);
        Temp2Widget->setObjectName(QString::fromUtf8("Temp2Widget"));
        Temp2Widget->setMinimumSize(QSize(0, 60));
        Temp2Widget->setMaximumSize(QSize(16777215, 60));
        horizontalLayout_6 = new QHBoxLayout(Temp2Widget);
        horizontalLayout_6->setSpacing(5);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        Temp2Icon = new QLabel(Temp2Widget);
        Temp2Icon->setObjectName(QString::fromUtf8("Temp2Icon"));
        Temp2Icon->setMinimumSize(QSize(45, 45));
        Temp2Icon->setMaximumSize(QSize(45, 45));
        Temp2Icon->setPixmap(QPixmap(QString::fromUtf8(":/ptr/Temp.png")));
        Temp2Icon->setScaledContents(true);

        horizontalLayout_6->addWidget(Temp2Icon);

        Temp2Name = new QLabel(Temp2Widget);
        Temp2Name->setObjectName(QString::fromUtf8("Temp2Name"));
        Temp2Name->setMinimumSize(QSize(80, 50));
        Temp2Name->setMaximumSize(QSize(999, 999));
        Temp2Name->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(Temp2Name);

        Temp2Value = new QLabel(Temp2Widget);
        Temp2Value->setObjectName(QString::fromUtf8("Temp2Value"));
        Temp2Value->setMinimumSize(QSize(30, 50));
        Temp2Value->setMaximumSize(QSize(999, 999));
        Temp2Value->setStyleSheet(QString::fromUtf8("font: 16pt ;\n"
"font-weight:bold;\n"
""));
        Temp2Value->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(Temp2Value);

        Temp2Unit = new QLabel(Temp2Widget);
        Temp2Unit->setObjectName(QString::fromUtf8("Temp2Unit"));
        Temp2Unit->setMinimumSize(QSize(30, 50));
        Temp2Unit->setMaximumSize(QSize(999, 999));
        Temp2Unit->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(Temp2Unit);


        verticalLayout->addWidget(Temp2Widget);

        WaterLevel1Widget = new QWidget(widget);
        WaterLevel1Widget->setObjectName(QString::fromUtf8("WaterLevel1Widget"));
        WaterLevel1Widget->setMinimumSize(QSize(0, 60));
        WaterLevel1Widget->setMaximumSize(QSize(16777215, 60));
        horizontalLayout_7 = new QHBoxLayout(WaterLevel1Widget);
        horizontalLayout_7->setSpacing(5);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        WaterLevel1Icon = new QLabel(WaterLevel1Widget);
        WaterLevel1Icon->setObjectName(QString::fromUtf8("WaterLevel1Icon"));
        WaterLevel1Icon->setMinimumSize(QSize(45, 45));
        WaterLevel1Icon->setMaximumSize(QSize(45, 45));
        WaterLevel1Icon->setPixmap(QPixmap(QString::fromUtf8(":/ptr/WaterLevel.png")));
        WaterLevel1Icon->setScaledContents(true);

        horizontalLayout_7->addWidget(WaterLevel1Icon);

        WaterLevel1Name = new QLabel(WaterLevel1Widget);
        WaterLevel1Name->setObjectName(QString::fromUtf8("WaterLevel1Name"));
        WaterLevel1Name->setMinimumSize(QSize(80, 50));
        WaterLevel1Name->setMaximumSize(QSize(999, 999));
        WaterLevel1Name->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(WaterLevel1Name);

        WaterLevel1Value = new QLabel(WaterLevel1Widget);
        WaterLevel1Value->setObjectName(QString::fromUtf8("WaterLevel1Value"));
        WaterLevel1Value->setMinimumSize(QSize(30, 50));
        WaterLevel1Value->setMaximumSize(QSize(999, 999));
        WaterLevel1Value->setStyleSheet(QString::fromUtf8("font: 16pt ;\n"
"font-weight:bold;\n"
""));
        WaterLevel1Value->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(WaterLevel1Value);

        WaterLeve1lUnit = new QLabel(WaterLevel1Widget);
        WaterLeve1lUnit->setObjectName(QString::fromUtf8("WaterLeve1lUnit"));
        WaterLeve1lUnit->setMinimumSize(QSize(30, 50));
        WaterLeve1lUnit->setMaximumSize(QSize(999, 999));
        WaterLeve1lUnit->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(WaterLeve1lUnit);


        verticalLayout->addWidget(WaterLevel1Widget);

        WaterLevel2Widget = new QWidget(widget);
        WaterLevel2Widget->setObjectName(QString::fromUtf8("WaterLevel2Widget"));
        WaterLevel2Widget->setMinimumSize(QSize(0, 60));
        WaterLevel2Widget->setMaximumSize(QSize(16777215, 60));
        horizontalLayout_8 = new QHBoxLayout(WaterLevel2Widget);
        horizontalLayout_8->setSpacing(5);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        WaterLevel2Icon = new QLabel(WaterLevel2Widget);
        WaterLevel2Icon->setObjectName(QString::fromUtf8("WaterLevel2Icon"));
        WaterLevel2Icon->setMinimumSize(QSize(45, 45));
        WaterLevel2Icon->setMaximumSize(QSize(45, 45));
        WaterLevel2Icon->setPixmap(QPixmap(QString::fromUtf8(":/ptr/WaterLevel.png")));
        WaterLevel2Icon->setScaledContents(true);

        horizontalLayout_8->addWidget(WaterLevel2Icon);

        WaterLevel2Name = new QLabel(WaterLevel2Widget);
        WaterLevel2Name->setObjectName(QString::fromUtf8("WaterLevel2Name"));
        WaterLevel2Name->setMinimumSize(QSize(80, 50));
        WaterLevel2Name->setMaximumSize(QSize(999, 999));
        WaterLevel2Name->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(WaterLevel2Name);

        WaterLevel2Value = new QLabel(WaterLevel2Widget);
        WaterLevel2Value->setObjectName(QString::fromUtf8("WaterLevel2Value"));
        WaterLevel2Value->setMinimumSize(QSize(30, 50));
        WaterLevel2Value->setMaximumSize(QSize(999, 999));
        WaterLevel2Value->setStyleSheet(QString::fromUtf8("font: 16pt ;\n"
"font-weight:bold;\n"
""));
        WaterLevel2Value->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(WaterLevel2Value);

        WaterLevel2Unit = new QLabel(WaterLevel2Widget);
        WaterLevel2Unit->setObjectName(QString::fromUtf8("WaterLevel2Unit"));
        WaterLevel2Unit->setMinimumSize(QSize(30, 50));
        WaterLevel2Unit->setMaximumSize(QSize(999, 999));
        WaterLevel2Unit->setAlignment(Qt::AlignCenter);

        horizontalLayout_8->addWidget(WaterLevel2Unit);


        verticalLayout->addWidget(WaterLevel2Widget);


        verticalLayout_2->addWidget(widget);


        retranslateUi(WaterBottom);

        QMetaObject::connectSlotsByName(WaterBottom);
    } // setupUi

    void retranslateUi(QWidget *WaterBottom)
    {
        WaterBottom->setWindowTitle(QApplication::translate("WaterBottom", "Form", nullptr));
        PHIcon->setText(QString());
        PHName->setText(QApplication::translate("WaterBottom", "PH", nullptr));
        PHValue->setText(QApplication::translate("WaterBottom", "7.0", nullptr));
        PHUnit->setText(QString());
        TdsIcon->setText(QString());
        TdsName->setText(QApplication::translate("WaterBottom", "TDS", nullptr));
        TdsValue->setText(QApplication::translate("WaterBottom", "300", nullptr));
        TdsUnit->setText(QApplication::translate("WaterBottom", "mg/L", nullptr));
        EcIcon->setText(QString());
        EcName->setText(QApplication::translate("WaterBottom", "EC", nullptr));
        EcValue->setText(QApplication::translate("WaterBottom", "2.0", nullptr));
        EcUnit->setText(QApplication::translate("WaterBottom", "mS/cm", nullptr));
        TurbidityIcon->setText(QString());
        TurbidityName->setText(QApplication::translate("WaterBottom", "\346\265\212\345\272\246", nullptr));
        TurbidityValue->setText(QApplication::translate("WaterBottom", "5.0", nullptr));
        TurbidityUnit->setText(QApplication::translate("WaterBottom", "FTU", nullptr));
        Temp1Icon->setText(QString());
        Temp1Name->setText(QApplication::translate("WaterBottom", "\346\270\251\345\272\2461", nullptr));
        Temp1Value->setText(QApplication::translate("WaterBottom", "26.0", nullptr));
        Temp1Unit->setText(QApplication::translate("WaterBottom", "\342\204\203", nullptr));
        Temp2Icon->setText(QString());
        Temp2Name->setText(QApplication::translate("WaterBottom", "\346\270\251\345\272\2462", nullptr));
        Temp2Value->setText(QApplication::translate("WaterBottom", "30.5", nullptr));
        Temp2Unit->setText(QApplication::translate("WaterBottom", "\342\204\203", nullptr));
        WaterLevel1Icon->setText(QString());
        WaterLevel1Name->setText(QApplication::translate("WaterBottom", "\346\260\264\344\275\2151", nullptr));
        WaterLevel1Value->setText(QApplication::translate("WaterBottom", "11.0", nullptr));
        WaterLeve1lUnit->setText(QApplication::translate("WaterBottom", "cm", nullptr));
        WaterLevel2Icon->setText(QString());
        WaterLevel2Name->setText(QApplication::translate("WaterBottom", "\346\260\264\344\275\2152", nullptr));
        WaterLevel2Value->setText(QApplication::translate("WaterBottom", "15.8", nullptr));
        WaterLevel2Unit->setText(QApplication::translate("WaterBottom", "cm", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WaterBottom: public Ui_WaterBottom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WATERBOTTOM_H
