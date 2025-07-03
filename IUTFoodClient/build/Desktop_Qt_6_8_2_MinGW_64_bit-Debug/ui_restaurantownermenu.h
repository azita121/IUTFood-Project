/********************************************************************************
** Form generated from reading UI file 'restaurantownermenu.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESTAURANTOWNERMENU_H
#define UI_RESTAURANTOWNERMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_restaurantownermenu
{
public:
    QStackedWidget *stackedWidget;
    QWidget *menuManagementPage;
    QFrame *menuHolder;
    QLabel *label_4;
    QLabel *label_16;
    QPushButton *addFoodButton;
    QPushButton *menuManagementButton;
    QPushButton *viewOrdersButton;
    QPushButton *ChangeOfStatusButton;
    QWidget *viewOrdersPage;
    QFrame *viewOrdersHolder;
    QLabel *label_5;
    QPushButton *menuManagementButton_2;
    QPushButton *viewOrdersButton_2;
    QPushButton *ChangeOfStatusButton_2;
    QLabel *label_17;
    QWidget *changeOfStatusPage;
    QFrame *changeStatusHolder;
    QLabel *label_8;
    QLabel *label_20;
    QPushButton *menuManagementButton_5;
    QPushButton *viewOrdersButton_5;
    QPushButton *ChangeOfStatusButton_5;

    void setupUi(QWidget *restaurantownermenu)
    {
        if (restaurantownermenu->objectName().isEmpty())
            restaurantownermenu->setObjectName("restaurantownermenu");
        restaurantownermenu->resize(560, 510);
        stackedWidget = new QStackedWidget(restaurantownermenu);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 560, 510));
        menuManagementPage = new QWidget();
        menuManagementPage->setObjectName("menuManagementPage");
        menuHolder = new QFrame(menuManagementPage);
        menuHolder->setObjectName("menuHolder");
        menuHolder->setGeometry(QRect(-10, 90, 590, 360));
        menuHolder->setFrameShape(QFrame::Shape::StyledPanel);
        menuHolder->setFrameShadow(QFrame::Shadow::Raised);
        label_4 = new QLabel(menuManagementPage);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(0, 0, 560, 100));
        QFont font;
        font.setPointSize(20);
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("background-color:rgba(220, 213, 200, 1);\n"
"border-top-right-radius: 50px;\n"
"border-top-left-radius: 50px;"));
        label_16 = new QLabel(menuManagementPage);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(140, 10, 290, 70));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Bauhaus 93")});
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setItalic(false);
        label_16->setFont(font1);
        label_16->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_16->setStyleSheet(QString::fromUtf8("color:rgba(13, 55, 30, 1);"));
        label_16->setTextFormat(Qt::TextFormat::AutoText);
        label_16->setAlignment(Qt::AlignmentFlag::AlignCenter);
        addFoodButton = new QPushButton(menuManagementPage);
        addFoodButton->setObjectName("addFoodButton");
        addFoodButton->setGeometry(QRect(10, 60, 110, 29));
        addFoodButton->setStyleSheet(QString::fromUtf8("QPushButton#addFoodButton {\n"
"    background-color: rgba(30, 60, 45, 255);   \n"
"    color: #F0F8F2;                              \n"
"    border-radius: 8px;\n"
"    padding: 6px 20px;\n"
"}\n"
"\n"
"QPushButton#addFoodButton:hover {\n"
"    background-color: rgba(45, 80, 60, 255);   \n"
"}\n"
"\n"
"QPushButton#addFoodButton:pressed {\n"
"    background-color: rgba(20, 40, 30, 255);    \n"
"    padding-left: 8px;\n"
"    padding-top: 8px;\n"
"}\n"
""));
        menuManagementButton = new QPushButton(menuManagementPage);
        menuManagementButton->setObjectName("menuManagementButton");
        menuManagementButton->setGeometry(QRect(0, 440, 186, 70));
        menuManagementButton->setStyleSheet(QString::fromUtf8("QPushButton#menuManagementButton {\n"
"    background-color: rgba(40, 60, 45, 255);   \n"
"    color: #F0F8F2;                              \n"
"    border-bottom-left-radius: 50px;\n"
"    padding: 6px 20px;\n"
"}\n"
"\n"
"QPushButton#menuManagementButton:hover {\n"
"    background-color: rgba(55, 80, 60, 255);   \n"
"}\n"
"\n"
"QPushButton#menuManagementButton:pressed {\n"
"    background-color: rgba(30, 40, 30, 255);    \n"
"    padding-left: 8px;\n"
"    padding-top: 8px;\n"
"}\n"
""));
        viewOrdersButton = new QPushButton(menuManagementPage);
        viewOrdersButton->setObjectName("viewOrdersButton");
        viewOrdersButton->setGeometry(QRect(186, 440, 186, 70));
        viewOrdersButton->setStyleSheet(QString::fromUtf8("QPushButton#viewOrdersButton {\n"
"    background-color: rgba(40, 60, 45, 255);   \n"
"    color: #F0F8F2;                \n"
"    border-bottom-left-radius: 0px;              \n"
"    padding: 6px 20px;\n"
"}\n"
"\n"
"QPushButton#viewOrdersButton:hover {\n"
"    background-color: rgba(55, 80, 60, 255);   \n"
"}\n"
"\n"
"QPushButton#viewOrdersButton:pressed {\n"
"    background-color: rgba(30, 40, 30, 255);    \n"
"    padding-left: 8px;\n"
"    padding-top: 8px;\n"
"}\n"
""));
        ChangeOfStatusButton = new QPushButton(menuManagementPage);
        ChangeOfStatusButton->setObjectName("ChangeOfStatusButton");
        ChangeOfStatusButton->setGeometry(QRect(372, 440, 188, 70));
        ChangeOfStatusButton->setStyleSheet(QString::fromUtf8("QPushButton#ChangeOfStatusButton {\n"
"    background-color: rgba(40, 60, 45, 255);   \n"
"    color: #F0F8F2;                \n"
"    border-bottom-right-radius: 50px;              \n"
"    padding: 6px 20px;\n"
"}\n"
"\n"
"QPushButton#ChangeOfStatusButton:hover {\n"
"    background-color: rgba(55, 80, 60, 255);   \n"
"}\n"
"\n"
"QPushButton#ChangeOfStatusButton:pressed {\n"
"    background-color: rgba(30, 40, 30, 255);    \n"
"    padding-left: 8px;\n"
"    padding-top: 8px;\n"
"}\n"
""));
        stackedWidget->addWidget(menuManagementPage);
        viewOrdersPage = new QWidget();
        viewOrdersPage->setObjectName("viewOrdersPage");
        viewOrdersHolder = new QFrame(viewOrdersPage);
        viewOrdersHolder->setObjectName("viewOrdersHolder");
        viewOrdersHolder->setGeometry(QRect(-20, 90, 590, 360));
        viewOrdersHolder->setFrameShape(QFrame::Shape::StyledPanel);
        viewOrdersHolder->setFrameShadow(QFrame::Shadow::Raised);
        label_5 = new QLabel(viewOrdersPage);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(0, 0, 560, 100));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("background-color:rgba(220, 213, 200, 1);\n"
"border-top-right-radius: 50px;\n"
"border-top-left-radius: 50px;"));
        menuManagementButton_2 = new QPushButton(viewOrdersPage);
        menuManagementButton_2->setObjectName("menuManagementButton_2");
        menuManagementButton_2->setGeometry(QRect(0, 440, 186, 70));
        menuManagementButton_2->setStyleSheet(QString::fromUtf8("QPushButton#menuManagementButton_2 {\n"
"    background-color: rgba(40, 60, 45, 255);   \n"
"    color: #F0F8F2;                              \n"
"    border-bottom-left-radius: 50px;\n"
"    padding: 6px 20px;\n"
"}\n"
"\n"
"QPushButton#menuManagementButton_2:hover {\n"
"    background-color: rgba(55, 80, 60, 255);   \n"
"}\n"
"\n"
"QPushButton#menuManagementButton_2:pressed {\n"
"    background-color: rgba(30, 40, 30, 255);    \n"
"    padding-left: 8px;\n"
"    padding-top: 8px;\n"
"}\n"
""));
        viewOrdersButton_2 = new QPushButton(viewOrdersPage);
        viewOrdersButton_2->setObjectName("viewOrdersButton_2");
        viewOrdersButton_2->setGeometry(QRect(186, 440, 186, 70));
        viewOrdersButton_2->setStyleSheet(QString::fromUtf8("QPushButton#viewOrdersButton_2 {\n"
"    background-color: rgba(40, 60, 45, 255);   \n"
"    color: #F0F8F2;                \n"
"    border-bottom-left-radius: 0px;              \n"
"    padding: 6px 20px;\n"
"}\n"
"\n"
"QPushButton#viewOrdersButton_2:hover {\n"
"    background-color: rgba(55, 80, 60, 255);   \n"
"}\n"
"\n"
"QPushButton#viewOrdersButton_2:pressed {\n"
"    background-color: rgba(30, 40, 30, 255);    \n"
"    padding-left: 8px;\n"
"    padding-top: 8px;\n"
"}\n"
""));
        ChangeOfStatusButton_2 = new QPushButton(viewOrdersPage);
        ChangeOfStatusButton_2->setObjectName("ChangeOfStatusButton_2");
        ChangeOfStatusButton_2->setGeometry(QRect(372, 440, 188, 70));
        ChangeOfStatusButton_2->setStyleSheet(QString::fromUtf8("QPushButton#ChangeOfStatusButton_2 {\n"
"    background-color: rgba(40, 60, 45, 255);   \n"
"    color: #F0F8F2;                \n"
"    border-bottom-right-radius: 50px;              \n"
"    padding: 6px 20px;\n"
"}\n"
"\n"
"QPushButton#ChangeOfStatusButton_2:hover {\n"
"    background-color: rgba(55, 80, 60, 255);   \n"
"}\n"
"\n"
"QPushButton#ChangeOfStatusButton_2:pressed {\n"
"    background-color: rgba(30, 40, 30, 255);    \n"
"    padding-left: 8px;\n"
"    padding-top: 8px;\n"
"}\n"
""));
        label_17 = new QLabel(viewOrdersPage);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(140, 10, 290, 70));
        label_17->setFont(font1);
        label_17->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_17->setStyleSheet(QString::fromUtf8("color:rgba(13, 55, 30, 1);"));
        label_17->setTextFormat(Qt::TextFormat::AutoText);
        label_17->setAlignment(Qt::AlignmentFlag::AlignCenter);
        stackedWidget->addWidget(viewOrdersPage);
        changeOfStatusPage = new QWidget();
        changeOfStatusPage->setObjectName("changeOfStatusPage");
        changeStatusHolder = new QFrame(changeOfStatusPage);
        changeStatusHolder->setObjectName("changeStatusHolder");
        changeStatusHolder->setGeometry(QRect(-20, 90, 590, 360));
        changeStatusHolder->setFrameShape(QFrame::Shape::StyledPanel);
        changeStatusHolder->setFrameShadow(QFrame::Shadow::Raised);
        label_8 = new QLabel(changeOfStatusPage);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(0, 0, 560, 100));
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8("background-color:rgba(220, 213, 200, 1);\n"
"border-top-right-radius: 50px;\n"
"border-top-left-radius: 50px;"));
        label_20 = new QLabel(changeOfStatusPage);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(140, 10, 290, 70));
        label_20->setFont(font1);
        label_20->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_20->setStyleSheet(QString::fromUtf8("color:rgba(13, 55, 30, 1);"));
        label_20->setTextFormat(Qt::TextFormat::AutoText);
        label_20->setAlignment(Qt::AlignmentFlag::AlignCenter);
        menuManagementButton_5 = new QPushButton(changeOfStatusPage);
        menuManagementButton_5->setObjectName("menuManagementButton_5");
        menuManagementButton_5->setGeometry(QRect(0, 440, 186, 70));
        menuManagementButton_5->setStyleSheet(QString::fromUtf8("QPushButton#menuManagementButton_5 {\n"
"    background-color: rgba(40, 60, 45, 255);   \n"
"    color: #F0F8F2;                              \n"
"    border-bottom-left-radius: 50px;\n"
"    padding: 6px 20px;\n"
"}\n"
"\n"
"QPushButton#menuManagementButton_5:hover {\n"
"    background-color: rgba(55, 80, 60, 255);   \n"
"}\n"
"\n"
"QPushButton#menuManagementButton_5:pressed {\n"
"    background-color: rgba(30, 40, 30, 255);    \n"
"    padding-left: 8px;\n"
"    padding-top: 8px;\n"
"}\n"
""));
        viewOrdersButton_5 = new QPushButton(changeOfStatusPage);
        viewOrdersButton_5->setObjectName("viewOrdersButton_5");
        viewOrdersButton_5->setGeometry(QRect(186, 440, 186, 70));
        viewOrdersButton_5->setStyleSheet(QString::fromUtf8("QPushButton#viewOrdersButton_5 {\n"
"    background-color: rgba(40, 60, 45, 255);   \n"
"    color: #F0F8F2;                \n"
"    border-bottom-left-radius: 0px;              \n"
"    padding: 6px 20px;\n"
"}\n"
"\n"
"QPushButton#viewOrdersButton_5:hover {\n"
"    background-color: rgba(55, 80, 60, 255);   \n"
"}\n"
"\n"
"QPushButton#viewOrdersButton_5:pressed {\n"
"    background-color: rgba(30, 40, 30, 255);    \n"
"    padding-left: 8px;\n"
"    padding-top: 8px;\n"
"}\n"
""));
        ChangeOfStatusButton_5 = new QPushButton(changeOfStatusPage);
        ChangeOfStatusButton_5->setObjectName("ChangeOfStatusButton_5");
        ChangeOfStatusButton_5->setGeometry(QRect(372, 440, 188, 70));
        ChangeOfStatusButton_5->setStyleSheet(QString::fromUtf8("QPushButton#ChangeOfStatusButton_5 {\n"
"    background-color: rgba(40, 60, 45, 255);   \n"
"    color: #F0F8F2;                \n"
"    border-bottom-right-radius: 50px;              \n"
"    padding: 6px 20px;\n"
"}\n"
"\n"
"QPushButton#ChangeOfStatusButton_5:hover {\n"
"    background-color: rgba(55, 80, 60, 255);   \n"
"}\n"
"\n"
"QPushButton#ChangeOfStatusButton_5:pressed {\n"
"    background-color: rgba(30, 40, 30, 255);    \n"
"    padding-left: 8px;\n"
"    padding-top: 8px;\n"
"}\n"
""));
        stackedWidget->addWidget(changeOfStatusPage);

        retranslateUi(restaurantownermenu);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(restaurantownermenu);
    } // setupUi

    void retranslateUi(QWidget *restaurantownermenu)
    {
        restaurantownermenu->setWindowTitle(QCoreApplication::translate("restaurantownermenu", "Form", nullptr));
        label_4->setText(QString());
        label_16->setText(QCoreApplication::translate("restaurantownermenu", "Menu Managment", nullptr));
        addFoodButton->setText(QCoreApplication::translate("restaurantownermenu", "Add Food", nullptr));
        menuManagementButton->setText(QCoreApplication::translate("restaurantownermenu", "Menu Managment", nullptr));
        viewOrdersButton->setText(QCoreApplication::translate("restaurantownermenu", "View Ordrs", nullptr));
        ChangeOfStatusButton->setText(QCoreApplication::translate("restaurantownermenu", "Change Of Status", nullptr));
        label_5->setText(QString());
        menuManagementButton_2->setText(QCoreApplication::translate("restaurantownermenu", "Menu Managment", nullptr));
        viewOrdersButton_2->setText(QCoreApplication::translate("restaurantownermenu", "View Ordrs", nullptr));
        ChangeOfStatusButton_2->setText(QCoreApplication::translate("restaurantownermenu", "Change Of Status", nullptr));
        label_17->setText(QCoreApplication::translate("restaurantownermenu", "View Orders", nullptr));
        label_8->setText(QString());
        label_20->setText(QCoreApplication::translate("restaurantownermenu", "Change Of Status", nullptr));
        menuManagementButton_5->setText(QCoreApplication::translate("restaurantownermenu", "Menu Managment", nullptr));
        viewOrdersButton_5->setText(QCoreApplication::translate("restaurantownermenu", "View Ordrs", nullptr));
        ChangeOfStatusButton_5->setText(QCoreApplication::translate("restaurantownermenu", "Change Of Status", nullptr));
    } // retranslateUi

};

namespace Ui {
    class restaurantownermenu: public Ui_restaurantownermenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESTAURANTOWNERMENU_H
