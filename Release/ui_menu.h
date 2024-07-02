/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *widget_top;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_widget_top;
    QLabel *widget_top_logo;
    QVBoxLayout *verticalLayout_Title;
    QLabel *widget_top_title;
    QLabel *widget_top_title_English;
    QSpacerItem *TH_widget;
    QWidget *widget_top_function;
    QToolButton *btn_Real_time;
    QToolButton *btn_Record_query;
    QToolButton *btn_Control;
    QToolButton *btn_Fault_detect;
    QWidget *widget_top_right;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_top_Menu_widget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *TH_Min;
    QPushButton *widget_top_btn_Min;
    QSpacerItem *TH_Max;
    QPushButton *widget_top_btn_Max;
    QSpacerItem *TH_Close;
    QPushButton *widget_top_btn_Close;
    QSpacerItem *TH_Close_2;
    QLabel *widget_top_time;
    QLabel *widget_top_year;

    void setupUi(QWidget *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName(QString::fromUtf8("Menu"));
        Menu->resize(1250, 76);
        Menu->setMinimumSize(QSize(1250, 0));
        Menu->setMaximumSize(QSize(16777215, 76));
        Menu->setStyleSheet(QString::fromUtf8("/*.QWidget {  \n"
"border-top-left-radius:15px;\n"
"border-top-right-radius:15px;\n"
"}*/\n"
"#widget_top\n"
"{\n"
"background-color: rgb(36, 61, 91);\n"
"\n"
"}\n"
"#widget_top_logo\n"
"{\n"
"color: rgb(122, 175, 227);\n"
"border-image: url(:/ptr/logo.png);\n"
"}\n"
"#widget_top_title\n"
"{\n"
"font: 18pt \"\346\245\267\344\275\223\";\n"
"}\n"
"#widget_top_title_English\n"
"{\n"
"font: 11pt \"\346\245\267\344\275\223\";\n"
"}\n"
"#widget_top_time\n"
"{\n"
"font: 20pt \"Digital-7 Mono\";\n"
"}\n"
"#widget_top_year\n"
"{\n"
"font: 9pt \"\346\245\267\344\275\223\";\n"
"}\n"
""));
        horizontalLayout = new QHBoxLayout(Menu);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        widget_top = new QWidget(Menu);
        widget_top->setObjectName(QString::fromUtf8("widget_top"));
        widget_top->setMinimumSize(QSize(0, 0));
        widget_top->setMaximumSize(QSize(16777215, 79));
        widget_top->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"color: rgb(122, 175, 227);\n"
"}"));
        horizontalLayout_4 = new QHBoxLayout(widget_top);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_widget_top = new QHBoxLayout();
        horizontalLayout_widget_top->setSpacing(15);
        horizontalLayout_widget_top->setObjectName(QString::fromUtf8("horizontalLayout_widget_top"));
        horizontalLayout_widget_top->setContentsMargins(15, -1, -1, -1);
        widget_top_logo = new QLabel(widget_top);
        widget_top_logo->setObjectName(QString::fromUtf8("widget_top_logo"));
        widget_top_logo->setMinimumSize(QSize(60, 60));
        widget_top_logo->setMaximumSize(QSize(60, 60));
        widget_top_logo->setAlignment(Qt::AlignCenter);

        horizontalLayout_widget_top->addWidget(widget_top_logo);

        verticalLayout_Title = new QVBoxLayout();
        verticalLayout_Title->setSpacing(12);
        verticalLayout_Title->setObjectName(QString::fromUtf8("verticalLayout_Title"));
        widget_top_title = new QLabel(widget_top);
        widget_top_title->setObjectName(QString::fromUtf8("widget_top_title"));
        widget_top_title->setMinimumSize(QSize(300, 27));
        widget_top_title->setMaximumSize(QSize(300, 27));
        widget_top_title->setAlignment(Qt::AlignCenter);

        verticalLayout_Title->addWidget(widget_top_title);

        widget_top_title_English = new QLabel(widget_top);
        widget_top_title_English->setObjectName(QString::fromUtf8("widget_top_title_English"));
        widget_top_title_English->setMinimumSize(QSize(370, 16));
        widget_top_title_English->setMaximumSize(QSize(370, 16));
        widget_top_title_English->setAlignment(Qt::AlignCenter);

        verticalLayout_Title->addWidget(widget_top_title_English);


        horizontalLayout_widget_top->addLayout(verticalLayout_Title);

        TH_widget = new QSpacerItem(400, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_widget_top->addItem(TH_widget);

        widget_top_function = new QWidget(widget_top);
        widget_top_function->setObjectName(QString::fromUtf8("widget_top_function"));
        widget_top_function->setMinimumSize(QSize(350, 0));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        widget_top_function->setFont(font);
        widget_top_function->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"color: rgb(122, 175, 227);\n"
"font: 10pt \"\346\245\267\344\275\223\";\n"
"border-radius:6px;\n"
"}\n"
"QToolButton:hover\n"
"{\n"
"background-color: rgb(19, 48, 80);\n"
"background-color: rgb(3, 57, 103);\n"
"font: 10pt \"\346\245\267\344\275\223\";\n"
"border-radius:6px;\n"
"border:2px solid rgb(13,39,67);\n"
"}"));
        btn_Real_time = new QToolButton(widget_top_function);
        btn_Real_time->setObjectName(QString::fromUtf8("btn_Real_time"));
        btn_Real_time->setGeometry(QRect(29, 5, 76, 65));
        btn_Real_time->setStyleSheet(QString::fromUtf8("QToolButton\n"
"{\n"
"background-color: rgb(19, 48, 80);\n"
"background-color: rgb(3, 57, 103);\n"
"font: 10pt \"\346\245\267\344\275\223\";\n"
"border-radius:6px;\n"
"border:2px solid rgb(13,39,67);\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/ptr/Real_time.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_Real_time->setIcon(icon);
        btn_Real_time->setIconSize(QSize(35, 35));
        btn_Real_time->setCheckable(false);
        btn_Real_time->setChecked(false);
        btn_Real_time->setAutoRepeat(false);
        btn_Real_time->setAutoExclusive(false);
        btn_Real_time->setPopupMode(QToolButton::DelayedPopup);
        btn_Real_time->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        btn_Real_time->setAutoRaise(false);
        btn_Real_time->setArrowType(Qt::NoArrow);
        btn_Record_query = new QToolButton(widget_top_function);
        btn_Record_query->setObjectName(QString::fromUtf8("btn_Record_query"));
        btn_Record_query->setGeometry(QRect(110, 5, 76, 65));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/ptr/Record_query.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_Record_query->setIcon(icon1);
        btn_Record_query->setIconSize(QSize(35, 35));
        btn_Record_query->setCheckable(false);
        btn_Record_query->setAutoRepeat(false);
        btn_Record_query->setAutoExclusive(false);
        btn_Record_query->setPopupMode(QToolButton::DelayedPopup);
        btn_Record_query->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        btn_Record_query->setAutoRaise(false);
        btn_Record_query->setArrowType(Qt::NoArrow);
        btn_Control = new QToolButton(widget_top_function);
        btn_Control->setObjectName(QString::fromUtf8("btn_Control"));
        btn_Control->setGeometry(QRect(190, 5, 76, 65));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/ptr/control.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_Control->setIcon(icon2);
        btn_Control->setIconSize(QSize(35, 35));
        btn_Control->setCheckable(false);
        btn_Control->setAutoRepeat(false);
        btn_Control->setAutoExclusive(false);
        btn_Control->setPopupMode(QToolButton::DelayedPopup);
        btn_Control->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        btn_Control->setAutoRaise(false);
        btn_Control->setArrowType(Qt::NoArrow);
        btn_Fault_detect = new QToolButton(widget_top_function);
        btn_Fault_detect->setObjectName(QString::fromUtf8("btn_Fault_detect"));
        btn_Fault_detect->setGeometry(QRect(270, 5, 76, 65));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/ptr/Fault_detect.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_Fault_detect->setIcon(icon3);
        btn_Fault_detect->setIconSize(QSize(35, 35));
        btn_Fault_detect->setCheckable(false);
        btn_Fault_detect->setAutoRepeat(false);
        btn_Fault_detect->setAutoExclusive(false);
        btn_Fault_detect->setPopupMode(QToolButton::DelayedPopup);
        btn_Fault_detect->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        btn_Fault_detect->setAutoRaise(false);
        btn_Fault_detect->setArrowType(Qt::NoArrow);

        horizontalLayout_widget_top->addWidget(widget_top_function);

        widget_top_right = new QWidget(widget_top);
        widget_top_right->setObjectName(QString::fromUtf8("widget_top_right"));
        widget_top_right->setMaximumSize(QSize(123, 79));
        verticalLayout_2 = new QVBoxLayout(widget_top_right);
        verticalLayout_2->setSpacing(5);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget_top_Menu_widget = new QWidget(widget_top_right);
        widget_top_Menu_widget->setObjectName(QString::fromUtf8("widget_top_Menu_widget"));
        widget_top_Menu_widget->setMinimumSize(QSize(90, 23));
        widget_top_Menu_widget->setMaximumSize(QSize(123, 23));
        widget_top_Menu_widget->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-radius:3px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color: rgb(215, 215, 215);\n"
"border-radius:3px;\n"
"}"));
        horizontalLayout_2 = new QHBoxLayout(widget_top_Menu_widget);
        horizontalLayout_2->setSpacing(1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        TH_Min = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(TH_Min);

        widget_top_btn_Min = new QPushButton(widget_top_Menu_widget);
        widget_top_btn_Min->setObjectName(QString::fromUtf8("widget_top_btn_Min"));
        widget_top_btn_Min->setMinimumSize(QSize(22, 22));
        widget_top_btn_Min->setMaximumSize(QSize(22, 22));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/ptr/Min1.png"), QSize(), QIcon::Normal, QIcon::Off);
        widget_top_btn_Min->setIcon(icon4);
        widget_top_btn_Min->setIconSize(QSize(14, 14));

        horizontalLayout_2->addWidget(widget_top_btn_Min);

        TH_Max = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(TH_Max);

        widget_top_btn_Max = new QPushButton(widget_top_Menu_widget);
        widget_top_btn_Max->setObjectName(QString::fromUtf8("widget_top_btn_Max"));
        widget_top_btn_Max->setMinimumSize(QSize(22, 22));
        widget_top_btn_Max->setMaximumSize(QSize(22, 22));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/ptr/Max1.png"), QSize(), QIcon::Normal, QIcon::Off);
        widget_top_btn_Max->setIcon(icon5);
        widget_top_btn_Max->setIconSize(QSize(14, 14));
        widget_top_btn_Max->setCheckable(true);

        horizontalLayout_2->addWidget(widget_top_btn_Max);

        TH_Close = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(TH_Close);

        widget_top_btn_Close = new QPushButton(widget_top_Menu_widget);
        widget_top_btn_Close->setObjectName(QString::fromUtf8("widget_top_btn_Close"));
        widget_top_btn_Close->setMinimumSize(QSize(22, 22));
        widget_top_btn_Close->setMaximumSize(QSize(22, 22));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/ptr/Close1.png"), QSize(), QIcon::Normal, QIcon::Off);
        widget_top_btn_Close->setIcon(icon6);
        widget_top_btn_Close->setIconSize(QSize(14, 14));

        horizontalLayout_2->addWidget(widget_top_btn_Close);

        TH_Close_2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(TH_Close_2);


        verticalLayout_2->addWidget(widget_top_Menu_widget);

        widget_top_time = new QLabel(widget_top_right);
        widget_top_time->setObjectName(QString::fromUtf8("widget_top_time"));
        widget_top_time->setMinimumSize(QSize(123, 24));
        widget_top_time->setMaximumSize(QSize(123, 24));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Digital-7 Mono"));
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        widget_top_time->setFont(font1);
        widget_top_time->setScaledContents(false);
        widget_top_time->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(widget_top_time);

        widget_top_year = new QLabel(widget_top_right);
        widget_top_year->setObjectName(QString::fromUtf8("widget_top_year"));
        widget_top_year->setMinimumSize(QSize(110, 17));
        widget_top_year->setMaximumSize(QSize(16777215, 17));
        widget_top_year->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(widget_top_year);


        horizontalLayout_widget_top->addWidget(widget_top_right);


        horizontalLayout_4->addLayout(horizontalLayout_widget_top);


        horizontalLayout->addWidget(widget_top);


        retranslateUi(Menu);

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QWidget *Menu)
    {
        Menu->setWindowTitle(QApplication::translate("Menu", "Form", nullptr));
        widget_top_logo->setText(QString());
        widget_top_title->setText(QApplication::translate("Menu", "\346\260\264\344\272\247\345\205\273\346\256\226\350\207\252\345\212\250\346\216\247\345\210\266\347\263\273\347\273\237", nullptr));
        widget_top_title_English->setText(QApplication::translate("Menu", "Automatic control system for aquaculture", nullptr));
        btn_Real_time->setText(QApplication::translate("Menu", "\345\256\236\346\227\266\346\225\260\346\215\256", nullptr));
        btn_Record_query->setText(QApplication::translate("Menu", "\350\256\260\345\275\225\346\237\245\350\257\242", nullptr));
        btn_Control->setText(QApplication::translate("Menu", "\346\216\247\345\210\266\347\256\241\347\220\206", nullptr));
        btn_Fault_detect->setText(QApplication::translate("Menu", "\346\225\205\351\232\234\346\243\200\346\265\213", nullptr));
        widget_top_btn_Min->setText(QString());
        widget_top_btn_Max->setText(QString());
        widget_top_btn_Close->setText(QString());
        widget_top_time->setText(QApplication::translate("Menu", "14:26:45", nullptr));
        widget_top_year->setText(QApplication::translate("Menu", "2023\345\271\26411\346\234\2101\346\227\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
