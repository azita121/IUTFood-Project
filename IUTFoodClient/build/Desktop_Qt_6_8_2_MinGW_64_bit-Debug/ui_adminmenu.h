/********************************************************************************
** Form generated from reading UI file 'adminmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINMENU_H
#define UI_ADMINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminmenu
{
public:
    QStackedWidget *stackedWidget;
    QWidget *menuManagementPage;
    QFrame *menuHolder;
    QLabel *label_4;
    QLabel *label_16;
    QPushButton *VerificationOfRestaurantButton;
    QPushButton *UserManagementButton;
    QPushButton *ChangeOrderStatusButton;
    QWidget *viewOrdersPage;
    QFrame *menuHolder_2;
    QLabel *label_5;
    QPushButton *VerificationOfRestaurantButton_2;
    QPushButton *UserManagementButton_2;
    QPushButton *ChangeOrderStatusButton_2;
    QLabel *label_17;
    QWidget *changeOfStatusPage;
    QFrame *menuHolder_3;
    QLabel *label_8;
    QLabel *label_20;
    QPushButton *VerificationOfRestaurantButton_3;
    QPushButton *UserManagementButton_3;
    QPushButton *ChangeOrderStatusButton_3;

    void setupUi(QWidget *adminmenu)
    {
        if (adminmenu->objectName().isEmpty())
            adminmenu->setObjectName("adminmenu");
        adminmenu->resize(560, 510);
        stackedWidget = new QStackedWidget(adminmenu);
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
        label_16->setGeometry(QRect(70, 10, 420, 70));
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
        VerificationOfRestaurantButton = new QPushButton(menuManagementPage);
        VerificationOfRestaurantButton->setObjectName("VerificationOfRestaurantButton");
        VerificationOfRestaurantButton->setGeometry(QRect(0, 440, 186, 70));
        VerificationOfRestaurantButton->setStyleSheet(QString::fromUtf8("QPushButton#VerificationOfRestaurantButton {\n"
"    background-color: rgba(40, 60, 45, 255);   \n"
"    color: #F0F8F2;                              \n"
"    border-bottom-left-radius: 50px;\n"
"\n"
"}\n"
"\n"
"QPushButton#VerificationOfRestaurantButton:hover {\n"
"    background-color: rgba(55, 80, 60, 255);   \n"
"}\n"
"\n"
"QPushButton#VerificationOfRestaurantButton:pressed {\n"
"    background-color: rgba(30, 40, 30, 255);    \n"
"    padding-left: 8px;\n"
"    padding-top: 8px;\n"
"}\n"
""));
        UserManagementButton = new QPushButton(menuManagementPage);
        UserManagementButton->setObjectName("UserManagementButton");
        UserManagementButton->setGeometry(QRect(186, 440, 186, 70));
        UserManagementButton->setStyleSheet(QString::fromUtf8("QPushButton#UserManagementButton {\n"
"    background-color: rgba(40, 60, 45, 255);   \n"
"    color: #F0F8F2;                \n"
"    border-bottom-left-radius: 0px;              \n"
"    padding: 6px 20px;\n"
"}\n"
"\n"
"QPushButton#UserManagementButton:hover {\n"
"    background-color: rgba(55, 80, 60, 255);   \n"
"}\n"
"\n"
"QPushButton#UserManagementButton:pressed {\n"
"    background-color: rgba(30, 40, 30, 255);    \n"
"    padding-left: 8px;\n"
"    padding-top: 8px;\n"
"}\n"
""));
        ChangeOrderStatusButton = new QPushButton(menuManagementPage);
        ChangeOrderStatusButton->setObjectName("ChangeOrderStatusButton");
        ChangeOrderStatusButton->setGeometry(QRect(372, 440, 188, 70));
        ChangeOrderStatusButton->setStyleSheet(QString::fromUtf8("QPushButton#ChangeOrderStatusButton {\n"
"    background-color: rgba(40, 60, 45, 255);   \n"
"    color: #F0F8F2;                \n"
"    border-bottom-right-radius: 50px;              \n"
"    padding: 6px 20px;\n"
"}\n"
"\n"
"QPushButton#ChangeOrderStatusButton:hover {\n"
"    background-color: rgba(55, 80, 60, 255);   \n"
"}\n"
"\n"
"QPushButton#ChangeOrderStatusButton:pressed {\n"
"    background-color: rgba(30, 40, 30, 255);    \n"
"    padding-left: 8px;\n"
"    padding-top: 8px;\n"
"}\n"
""));
        stackedWidget->addWidget(menuManagementPage);
        viewOrdersPage = new QWidget();
        viewOrdersPage->setObjectName("viewOrdersPage");
        menuHolder_2 = new QFrame(viewOrdersPage);
        menuHolder_2->setObjectName("menuHolder_2");
        menuHolder_2->setGeometry(QRect(-20, 90, 590, 360));
        menuHolder_2->setFrameShape(QFrame::Shape::StyledPanel);
        menuHolder_2->setFrameShadow(QFrame::Shadow::Raised);
        label_5 = new QLabel(viewOrdersPage);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(0, 0, 560, 100));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("background-color:rgba(220, 213, 200, 1);\n"
"border-top-right-radius: 50px;\n"
"border-top-left-radius: 50px;"));
        VerificationOfRestaurantButton_2 = new QPushButton(viewOrdersPage);
        VerificationOfRestaurantButton_2->setObjectName("VerificationOfRestaurantButton_2");
        VerificationOfRestaurantButton_2->setGeometry(QRect(0, 440, 186, 70));
        VerificationOfRestaurantButton_2->setStyleSheet(QString::fromUtf8("QPushButton#VerificationOfRestaurantButton_2 {\n"
"    background-color: rgba(40, 60, 45, 255);   \n"
"    color: #F0F8F2;                              \n"
"    border-bottom-left-radius: 50px;\n"
"}\n"
"\n"
"QPushButton#VerificationOfRestaurantButton_2:hover {\n"
"    background-color: rgba(55, 80, 60, 255);   \n"
"}\n"
"\n"
"QPushButton#VerificationOfRestaurantButton_2:pressed {\n"
"    background-color: rgba(30, 40, 30, 255);    \n"
"    padding-left: 8px;\n"
"    padding-top: 8px;\n"
"}\n"
""));
        UserManagementButton_2 = new QPushButton(viewOrdersPage);
        UserManagementButton_2->setObjectName("UserManagementButton_2");
        UserManagementButton_2->setGeometry(QRect(186, 440, 186, 70));
        UserManagementButton_2->setStyleSheet(QString::fromUtf8("QPushButton#UserManagementButton_2 {\n"
"    background-color: rgba(40, 60, 45, 255);   \n"
"    color: #F0F8F2;                \n"
"    border-bottom-left-radius: 0px;              \n"
"    padding: 6px 20px;\n"
"}\n"
"\n"
"QPushButton#UserManagementButton_2:hover {\n"
"    background-color: rgba(55, 80, 60, 255);   \n"
"}\n"
"\n"
"QPushButton#UserManagementButton_2:pressed {\n"
"    background-color: rgba(30, 40, 30, 255);    \n"
"    padding-left: 8px;\n"
"    padding-top: 8px;\n"
"}\n"
""));
        ChangeOrderStatusButton_2 = new QPushButton(viewOrdersPage);
        ChangeOrderStatusButton_2->setObjectName("ChangeOrderStatusButton_2");
        ChangeOrderStatusButton_2->setGeometry(QRect(372, 440, 188, 70));
        ChangeOrderStatusButton_2->setStyleSheet(QString::fromUtf8("QPushButton#ChangeOrderStatusButton_2 {\n"
"    background-color: rgba(40, 60, 45, 255);   \n"
"    color: #F0F8F2;                \n"
"    border-bottom-right-radius: 50px;              \n"
"    padding: 6px 20px;\n"
"}\n"
"\n"
"QPushButton#ChangeOrderStatusButton_2:hover {\n"
"    background-color: rgba(55, 80, 60, 255);   \n"
"}\n"
"\n"
"QPushButton#ChangeOrderStatusButton_2:pressed {\n"
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
        menuHolder_3 = new QFrame(changeOfStatusPage);
        menuHolder_3->setObjectName("menuHolder_3");
        menuHolder_3->setGeometry(QRect(-20, 90, 590, 360));
        menuHolder_3->setFrameShape(QFrame::Shape::StyledPanel);
        menuHolder_3->setFrameShadow(QFrame::Shadow::Raised);
        label_8 = new QLabel(changeOfStatusPage);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(0, 0, 560, 100));
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8("background-color:rgba(220, 213, 200, 1);\n"
"border-top-right-radius: 50px;\n"
"border-top-left-radius: 50px;"));
        label_20 = new QLabel(changeOfStatusPage);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(120, 10, 330, 70));
        label_20->setFont(font1);
        label_20->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_20->setStyleSheet(QString::fromUtf8("color:rgba(13, 55, 30, 1);"));
        label_20->setTextFormat(Qt::TextFormat::AutoText);
        label_20->setAlignment(Qt::AlignmentFlag::AlignCenter);
        VerificationOfRestaurantButton_3 = new QPushButton(changeOfStatusPage);
        VerificationOfRestaurantButton_3->setObjectName("VerificationOfRestaurantButton_3");
        VerificationOfRestaurantButton_3->setGeometry(QRect(0, 440, 186, 70));
        VerificationOfRestaurantButton_3->setStyleSheet(QString::fromUtf8("QPushButton#VerificationOfRestaurantButton_3 {\n"
"    background-color: rgba(40, 60, 45, 255);   \n"
"    color: #F0F8F2;                              \n"
"    border-bottom-left-radius: 50px;\n"
"}\n"
"\n"
"QPushButton#VerificationOfRestaurantButton_3:hover {\n"
"    background-color: rgba(55, 80, 60, 255);   \n"
"}\n"
"\n"
"QPushButton#VerificationOfRestaurantButton_3:pressed {\n"
"    background-color: rgba(30, 40, 30, 255);    \n"
"    padding-left: 8px;\n"
"    padding-top: 8px;\n"
"}\n"
""));
        UserManagementButton_3 = new QPushButton(changeOfStatusPage);
        UserManagementButton_3->setObjectName("UserManagementButton_3");
        UserManagementButton_3->setGeometry(QRect(186, 440, 186, 70));
        UserManagementButton_3->setStyleSheet(QString::fromUtf8("QPushButton#UserManagementButton_3 {\n"
"    background-color: rgba(40, 60, 45, 255);   \n"
"    color: #F0F8F2;                \n"
"    border-bottom-left-radius: 0px;              \n"
"    padding: 6px 20px;\n"
"}\n"
"\n"
"QPushButton#UserManagementButton_3:hover {\n"
"    background-color: rgba(55, 80, 60, 255);   \n"
"}\n"
"\n"
"QPushButton#UserManagementButton_3:pressed {\n"
"    background-color: rgba(30, 40, 30, 255);    \n"
"    padding-left: 8px;\n"
"    padding-top: 8px;\n"
"}\n"
""));
        ChangeOrderStatusButton_3 = new QPushButton(changeOfStatusPage);
        ChangeOrderStatusButton_3->setObjectName("ChangeOrderStatusButton_3");
        ChangeOrderStatusButton_3->setGeometry(QRect(372, 440, 188, 70));
        ChangeOrderStatusButton_3->setStyleSheet(QString::fromUtf8("QPushButton#ChangeOrderStatusButton_3 {\n"
"    background-color: rgba(40, 60, 45, 255);   \n"
"    color: #F0F8F2;                \n"
"    border-bottom-right-radius: 50px;              \n"
"    padding: 6px 20px;\n"
"}\n"
"\n"
"QPushButton#ChangeOrderStatusButton_3:hover {\n"
"    background-color: rgba(55, 80, 60, 255);   \n"
"}\n"
"\n"
"QPushButton#ChangeOrderStatusButton_3:pressed {\n"
"    background-color: rgba(30, 40, 30, 255);    \n"
"    padding-left: 8px;\n"
"    padding-top: 8px;\n"
"}\n"
""));
        stackedWidget->addWidget(changeOfStatusPage);

        retranslateUi(adminmenu);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(adminmenu);
    } // setupUi

    void retranslateUi(QWidget *adminmenu)
    {
        adminmenu->setWindowTitle(QCoreApplication::translate("adminmenu", "Form", nullptr));
        label_4->setText(QString());
        label_16->setText(QCoreApplication::translate("adminmenu", "Verification of restaurants", nullptr));
        VerificationOfRestaurantButton->setText(QCoreApplication::translate("adminmenu", "Verification of restaurants", nullptr));
        UserManagementButton->setText(QCoreApplication::translate("adminmenu", "User management", nullptr));
        ChangeOrderStatusButton->setText(QCoreApplication::translate("adminmenu", "Change order status", nullptr));
        label_5->setText(QString());
        VerificationOfRestaurantButton_2->setText(QCoreApplication::translate("adminmenu", "Verification of restaurants", nullptr));
        UserManagementButton_2->setText(QCoreApplication::translate("adminmenu", "User management", nullptr));
        ChangeOrderStatusButton_2->setText(QCoreApplication::translate("adminmenu", "Change order status", nullptr));
        label_17->setText(QCoreApplication::translate("adminmenu", "User management", nullptr));
        label_8->setText(QString());
        label_20->setText(QCoreApplication::translate("adminmenu", "Change order status", nullptr));
        VerificationOfRestaurantButton_3->setText(QCoreApplication::translate("adminmenu", "Verification of restaurants", nullptr));
        UserManagementButton_3->setText(QCoreApplication::translate("adminmenu", "User management", nullptr));
        ChangeOrderStatusButton_3->setText(QCoreApplication::translate("adminmenu", "Change order status", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminmenu: public Ui_adminmenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINMENU_H
