/********************************************************************************
** Form generated from reading UI file 'systemstate.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSTEMSTATE_H
#define UI_SYSTEMSTATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SystemState
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QWidget *FeedingWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *FeedingIcon;
    QLabel *FeedingText;
    QLabel *FeedingType;
    QWidget *TempWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *TempIcon;
    QLabel *TempText;
    QLabel *TempType;
    QWidget *WaterLevelWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *WaterLevelIcon;
    QLabel *WaterLevelText;
    QLabel *WaterLevelType;
    QWidget *YangQiWidget;
    QHBoxLayout *horizontalLayout_4;
    QLabel *YangQiIcon;
    QLabel *YangQiText;
    QLabel *YangQiType;
    QWidget *DianYuanWidget;
    QHBoxLayout *horizontalLayout_5;
    QLabel *DianYuanIcon;
    QLabel *DianYuanText;
    QLabel *DianYuanType;
    QWidget *PCWidget;
    QHBoxLayout *horizontalLayout_9;
    QLabel *PCIcon;
    QLabel *PCText;
    QSpacerItem *PCTH1;
    QLabel *PCType;
    QSpacerItem *PCTH2;
    QWidget *YJWidget;
    QHBoxLayout *horizontalLayout_7;
    QLabel *YJIcon;
    QLabel *YJText;
    QSpacerItem *YJTH1;
    QLabel *YJType;
    QSpacerItem *YJTH2;

    void setupUi(QWidget *SystemState)
    {
        if (SystemState->objectName().isEmpty())
            SystemState->setObjectName(QString::fromUtf8("SystemState"));
        SystemState->resize(257, 461);
        SystemState->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color: rgb(122, 175, 227);\n"
"font: 12pt \"\346\245\267\344\275\223\";\n"
"border:0px\n"
"}\n"
"QWidget\n"
"{\n"
"border:0px\n"
"}\n"
"#SystemState\n"
"{\n"
"background-color: rgb(14, 26, 50);\n"
"}\n"
"#widget\n"
"{\n"
"background-color: rgb(14, 26, 50);\n"
"}"));
        verticalLayout = new QVBoxLayout(SystemState);
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(SystemState);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        FeedingWidget = new QWidget(widget);
        FeedingWidget->setObjectName(QString::fromUtf8("FeedingWidget"));
        horizontalLayout = new QHBoxLayout(FeedingWidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        FeedingIcon = new QLabel(FeedingWidget);
        FeedingIcon->setObjectName(QString::fromUtf8("FeedingIcon"));
        FeedingIcon->setMaximumSize(QSize(45, 45));
        FeedingIcon->setStyleSheet(QString::fromUtf8(""));
        FeedingIcon->setPixmap(QPixmap(QString::fromUtf8(":/ptr/StateFeeding.png")));
        FeedingIcon->setScaledContents(true);
        FeedingIcon->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(FeedingIcon);

        FeedingText = new QLabel(FeedingWidget);
        FeedingText->setObjectName(QString::fromUtf8("FeedingText"));
        FeedingText->setStyleSheet(QString::fromUtf8(""));
        FeedingText->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(FeedingText);

        FeedingType = new QLabel(FeedingWidget);
        FeedingType->setObjectName(QString::fromUtf8("FeedingType"));
        FeedingType->setStyleSheet(QString::fromUtf8("font: 14pt ;\n"
"font-weight:bold;\n"
""));
        FeedingType->setScaledContents(true);
        FeedingType->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(FeedingType);


        verticalLayout_2->addWidget(FeedingWidget);

        TempWidget = new QWidget(widget);
        TempWidget->setObjectName(QString::fromUtf8("TempWidget"));
        horizontalLayout_2 = new QHBoxLayout(TempWidget);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        TempIcon = new QLabel(TempWidget);
        TempIcon->setObjectName(QString::fromUtf8("TempIcon"));
        TempIcon->setMaximumSize(QSize(45, 45));
        TempIcon->setPixmap(QPixmap(QString::fromUtf8(":/ptr/StateTemp.png")));
        TempIcon->setScaledContents(true);
        TempIcon->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(TempIcon);

        TempText = new QLabel(TempWidget);
        TempText->setObjectName(QString::fromUtf8("TempText"));
        TempText->setStyleSheet(QString::fromUtf8(""));
        TempText->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(TempText);

        TempType = new QLabel(TempWidget);
        TempType->setObjectName(QString::fromUtf8("TempType"));
        TempType->setStyleSheet(QString::fromUtf8("font: 14pt ;\n"
"font-weight:bold;\n"
""));
        TempType->setScaledContents(true);
        TempType->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(TempType);


        verticalLayout_2->addWidget(TempWidget);

        WaterLevelWidget = new QWidget(widget);
        WaterLevelWidget->setObjectName(QString::fromUtf8("WaterLevelWidget"));
        horizontalLayout_3 = new QHBoxLayout(WaterLevelWidget);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        WaterLevelIcon = new QLabel(WaterLevelWidget);
        WaterLevelIcon->setObjectName(QString::fromUtf8("WaterLevelIcon"));
        WaterLevelIcon->setMaximumSize(QSize(45, 45));
        WaterLevelIcon->setPixmap(QPixmap(QString::fromUtf8(":/ptr/StateWaterLevel.png")));
        WaterLevelIcon->setScaledContents(true);
        WaterLevelIcon->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(WaterLevelIcon);

        WaterLevelText = new QLabel(WaterLevelWidget);
        WaterLevelText->setObjectName(QString::fromUtf8("WaterLevelText"));
        WaterLevelText->setStyleSheet(QString::fromUtf8(""));
        WaterLevelText->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(WaterLevelText);

        WaterLevelType = new QLabel(WaterLevelWidget);
        WaterLevelType->setObjectName(QString::fromUtf8("WaterLevelType"));
        WaterLevelType->setStyleSheet(QString::fromUtf8("font: 14pt ;\n"
"font-weight:bold;\n"
""));
        WaterLevelType->setScaledContents(true);
        WaterLevelType->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(WaterLevelType);


        verticalLayout_2->addWidget(WaterLevelWidget);

        YangQiWidget = new QWidget(widget);
        YangQiWidget->setObjectName(QString::fromUtf8("YangQiWidget"));
        horizontalLayout_4 = new QHBoxLayout(YangQiWidget);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        YangQiIcon = new QLabel(YangQiWidget);
        YangQiIcon->setObjectName(QString::fromUtf8("YangQiIcon"));
        YangQiIcon->setMaximumSize(QSize(45, 45));
        YangQiIcon->setPixmap(QPixmap(QString::fromUtf8(":/ptr/StateOxygen.png")));
        YangQiIcon->setScaledContents(true);
        YangQiIcon->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(YangQiIcon);

        YangQiText = new QLabel(YangQiWidget);
        YangQiText->setObjectName(QString::fromUtf8("YangQiText"));
        YangQiText->setStyleSheet(QString::fromUtf8(""));
        YangQiText->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(YangQiText);

        YangQiType = new QLabel(YangQiWidget);
        YangQiType->setObjectName(QString::fromUtf8("YangQiType"));
        YangQiType->setStyleSheet(QString::fromUtf8("font: 14pt ;\n"
"font-weight:bold;\n"
""));
        YangQiType->setScaledContents(true);
        YangQiType->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(YangQiType);


        verticalLayout_2->addWidget(YangQiWidget);

        DianYuanWidget = new QWidget(widget);
        DianYuanWidget->setObjectName(QString::fromUtf8("DianYuanWidget"));
        horizontalLayout_5 = new QHBoxLayout(DianYuanWidget);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        DianYuanIcon = new QLabel(DianYuanWidget);
        DianYuanIcon->setObjectName(QString::fromUtf8("DianYuanIcon"));
        DianYuanIcon->setMaximumSize(QSize(45, 45));
        DianYuanIcon->setPixmap(QPixmap(QString::fromUtf8(":/ptr/StateDianYuan.png")));
        DianYuanIcon->setScaledContents(true);
        DianYuanIcon->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(DianYuanIcon);

        DianYuanText = new QLabel(DianYuanWidget);
        DianYuanText->setObjectName(QString::fromUtf8("DianYuanText"));
        DianYuanText->setStyleSheet(QString::fromUtf8(""));
        DianYuanText->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(DianYuanText);

        DianYuanType = new QLabel(DianYuanWidget);
        DianYuanType->setObjectName(QString::fromUtf8("DianYuanType"));
        DianYuanType->setStyleSheet(QString::fromUtf8("font: 14pt ;\n"
"font-weight:bold;\n"
""));
        DianYuanType->setScaledContents(true);
        DianYuanType->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(DianYuanType);


        verticalLayout_2->addWidget(DianYuanWidget);

        PCWidget = new QWidget(widget);
        PCWidget->setObjectName(QString::fromUtf8("PCWidget"));
        horizontalLayout_9 = new QHBoxLayout(PCWidget);
        horizontalLayout_9->setSpacing(0);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        PCIcon = new QLabel(PCWidget);
        PCIcon->setObjectName(QString::fromUtf8("PCIcon"));
        PCIcon->setMaximumSize(QSize(45, 45));
        PCIcon->setPixmap(QPixmap(QString::fromUtf8(":/ptr/PCIcon.png")));
        PCIcon->setScaledContents(true);
        PCIcon->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(PCIcon);

        PCText = new QLabel(PCWidget);
        PCText->setObjectName(QString::fromUtf8("PCText"));
        PCText->setStyleSheet(QString::fromUtf8(""));
        PCText->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(PCText);

        PCTH1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(PCTH1);

        PCType = new QLabel(PCWidget);
        PCType->setObjectName(QString::fromUtf8("PCType"));
        PCType->setMaximumSize(QSize(50, 50));
        PCType->setPixmap(QPixmap(QString::fromUtf8(":/ptr/NOtype.png")));
        PCType->setScaledContents(true);
        PCType->setAlignment(Qt::AlignCenter);

        horizontalLayout_9->addWidget(PCType);

        PCTH2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(PCTH2);


        verticalLayout_2->addWidget(PCWidget);

        YJWidget = new QWidget(widget);
        YJWidget->setObjectName(QString::fromUtf8("YJWidget"));
        horizontalLayout_7 = new QHBoxLayout(YJWidget);
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        YJIcon = new QLabel(YJWidget);
        YJIcon->setObjectName(QString::fromUtf8("YJIcon"));
        YJIcon->setMaximumSize(QSize(45, 45));
        YJIcon->setPixmap(QPixmap(QString::fromUtf8(":/ptr/YJIcon.png")));
        YJIcon->setScaledContents(true);
        YJIcon->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(YJIcon);

        YJText = new QLabel(YJWidget);
        YJText->setObjectName(QString::fromUtf8("YJText"));
        YJText->setStyleSheet(QString::fromUtf8(""));
        YJText->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(YJText);

        YJTH1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(YJTH1);

        YJType = new QLabel(YJWidget);
        YJType->setObjectName(QString::fromUtf8("YJType"));
        YJType->setMaximumSize(QSize(50, 50));
        YJType->setPixmap(QPixmap(QString::fromUtf8(":/ptr/NOtype.png")));
        YJType->setScaledContents(true);
        YJType->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(YJType);

        YJTH2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(YJTH2);


        verticalLayout_2->addWidget(YJWidget);


        verticalLayout->addWidget(widget);


        retranslateUi(SystemState);

        QMetaObject::connectSlotsByName(SystemState);
    } // setupUi

    void retranslateUi(QWidget *SystemState)
    {
        SystemState->setWindowTitle(QApplication::translate("SystemState", "Form", nullptr));
        FeedingIcon->setText(QString());
        FeedingText->setText(QApplication::translate("SystemState", "\350\207\252\345\212\250\346\212\225\345\226\202:", nullptr));
        FeedingType->setText(QApplication::translate("SystemState", "\346\234\252\345\274\200\345\220\257", nullptr));
        TempIcon->setText(QString());
        TempText->setText(QApplication::translate("SystemState", "\350\207\252\345\212\250\346\270\251\345\272\246:", nullptr));
        TempType->setText(QApplication::translate("SystemState", "\346\234\252\345\274\200\345\220\257", nullptr));
        WaterLevelIcon->setText(QString());
        WaterLevelText->setText(QApplication::translate("SystemState", "\350\207\252\345\212\250\346\260\264\344\275\215:", nullptr));
        WaterLevelType->setText(QApplication::translate("SystemState", "\346\234\252\345\274\200\345\220\257", nullptr));
        YangQiIcon->setText(QString());
        YangQiText->setText(QApplication::translate("SystemState", "\350\207\252\345\212\250\346\260\247\346\260\224:", nullptr));
        YangQiType->setText(QApplication::translate("SystemState", "\346\234\252\345\274\200\345\220\257", nullptr));
        DianYuanIcon->setText(QString());
        DianYuanText->setText(QApplication::translate("SystemState", "\344\276\233\347\224\265\346\226\271\345\274\217:", nullptr));
        DianYuanType->setText(QApplication::translate("SystemState", "\347\224\265\346\261\240\344\276\233\347\224\265", nullptr));
        PCIcon->setText(QString());
        PCText->setText(QApplication::translate("SystemState", "\346\234\215\345\212\241\345\231\250\347\253\257:", nullptr));
        PCType->setText(QString());
        YJIcon->setText(QString());
        YJText->setText(QApplication::translate("SystemState", "\347\241\254\344\273\266\347\212\266\346\200\201:", nullptr));
        YJType->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SystemState: public Ui_SystemState {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSTEMSTATE_H
