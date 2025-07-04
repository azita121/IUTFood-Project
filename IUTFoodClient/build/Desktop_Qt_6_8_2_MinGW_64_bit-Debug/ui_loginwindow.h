/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_logInWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEditUsername;
    QLineEdit *lineEditPassword;
    QPushButton *loginButton;
    QLabel *forgotPass;
    QLabel *label_6;
    QToolButton *customerButton;
    QToolButton *ownerButton;
    QToolButton *eyeLog;
    QWidget *page_4;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_11;
    QLineEdit *lineEdit_forgotName;
    QLineEdit *lineEdit_forgotLName;
    QLineEdit *lineEdit_forgotEmail;
    QLineEdit *lineEdit_forgotPhoneNumber;
    QPushButton *resetButton;
    QLabel *label_10;
    QToolButton *Forgotback;
    QWidget *page_5;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *lineEditNewPassword;
    QLineEdit *lineEditRepeatNewPassword;
    QPushButton *DoneButton;
    QLabel *label_17;
    QLabel *label_18;
    QToolButton *eyeReap;
    QToolButton *eyePass;
    QWidget *page_3;
    QLabel *label_19;
    QLabel *label_20;
    QComboBox *comboBox_SignCustomerLocation;
    QPushButton *signUpCustomerButton;
    QToolButton *Customerback;
    QLabel *label_7;
    QLabel *label_28;
    QLineEdit *lineEdit_SignCustomerName;
    QLineEdit *lineEdit_SignCustomerLName;
    QLineEdit *lineEdit_SignCustomerEmail;
    QLineEdit *lineEdit_SignCustomerPhoneNumber;
    QLineEdit *lineEdit_SignCustomerPassword;
    QWidget *page_2;
    QLabel *label_5;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QComboBox *comboBox_SignOwnerLocation;
    QPushButton *signUpOwnerButton;
    QToolButton *Ownerback;
    QLineEdit *lineEdit_SignOwnerName;
    QLineEdit *lineEdit_SignOwnerLName;
    QLineEdit *lineEdit_SignOwnerEmail;
    QLineEdit *lineEdit_SignOwnerPhoneNumber;
    QLineEdit *lineEdit_SignOwnerRestaurantName;
    QLineEdit *lineEdit_SignOwnerRestaurantNumber;
    QLineEdit *lineEdit_SignOwnerPassword;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *logInWindow)
    {
        if (logInWindow->objectName().isEmpty())
            logInWindow->setObjectName("logInWindow");
        logInWindow->resize(560, 510);
        logInWindow->setMinimumSize(QSize(559, 507));
        centralwidget = new QWidget(logInWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 550, 461));
        page = new QWidget();
        page->setObjectName("page");
        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 20, 280, 430));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/images/logIn.png);\n"
"border-top-left-radius:50px;"));
        label_2 = new QLabel(page);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 20, 280, 430));
        label_2->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 80);\n"
"border-top-left-radius:50px;"));
        label_3 = new QLabel(page);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(290, 20, 251, 430));
        QFont font;
        font.setPointSize(20);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("background-color:rgba(220, 213, 200, 1);\n"
"border-bottom-right-radius: 50px;"));
        label_4 = new QLabel(page);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(350, 60, 141, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Rockwell")});
        font1.setPointSize(25);
        font1.setBold(true);
        font1.setItalic(false);
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color:rgba(13, 55, 30, 1);"));
        lineEditUsername = new QLineEdit(page);
        lineEditUsername->setObjectName("lineEditUsername");
        lineEditUsername->setGeometry(QRect(320, 150, 190, 40));
        QFont font2;
        font2.setPointSize(10);
        lineEditUsername->setFont(font2);
        lineEditUsername->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(46, 82, 101, 200);\n"
"color:rgba(0, 0, 0, 240);"));
        lineEditPassword = new QLineEdit(page);
        lineEditPassword->setObjectName("lineEditPassword");
        lineEditPassword->setGeometry(QRect(320, 190, 190, 40));
        lineEditPassword->setFont(font2);
        lineEditPassword->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(46, 82, 101, 200);\n"
"color:rgba(0, 0, 0, 240);"));
        loginButton = new QPushButton(page);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(320, 250, 190, 40));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Rockwell")});
        font3.setPointSize(11);
        font3.setBold(true);
        loginButton->setFont(font3);
        loginButton->setStyleSheet(QString::fromUtf8("QPushButton#loginButton {\n"
"    background-color: rgba(30, 60, 45, 255);   \n"
"    color: #F0F8F2;                              \n"
"    border-radius: 8px;\n"
"    padding: 6px 20px;\n"
"}\n"
"\n"
"QPushButton#loginButton:hover {\n"
"    background-color: rgba(45, 80, 60, 255);   \n"
"}\n"
"\n"
"QPushButton#loginButton:pressed {\n"
"    background-color: rgba(20, 40, 30, 255);    \n"
"    padding-left: 8px;\n"
"    padding-top: 8px;\n"
"}\n"
""));
        forgotPass = new QLabel(page);
        forgotPass->setObjectName("forgotPass");
        forgotPass->setGeometry(QRect(370, 290, 131, 20));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Rockwell")});
        forgotPass->setFont(font4);
        forgotPass->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: rgba(20, 50, 35, 255); \n"
"    background-color: transparent;\n"
"}\n"
""));
        forgotPass->setTextFormat(Qt::TextFormat::RichText);
        forgotPass->setOpenExternalLinks(false);
        label_6 = new QLabel(page);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(320, 330, 191, 30));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Century Gothic")});
        font5.setPointSize(10);
        font5.setBold(false);
        label_6->setFont(font5);
        label_6->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 0);\n"
"border-bottom:2px solid rgba(46, 82, 101, 200);\n"
"color:rgba(0, 0, 0, 240);\n"
""));
        customerButton = new QToolButton(page);
        customerButton->setObjectName("customerButton");
        customerButton->setGeometry(QRect(350, 370, 50, 50));
        customerButton->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        customerButton->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"    background-color: transparent;\n"
"    border: none;\n"
"    padding: 1px;\n"
"    qproperty-iconSize: 120px 120px;\n"
"    color: #0D2C1E; \n"
"    border-radius: 10px;\n"
"}\n"
"\n"
"QToolButton:hover {\n"
"    background-color: rgba(100, 150, 120, 30);\n"
"    color: #0D2C1E;\n"
"}\n"
"\n"
"QToolButton:pressed {\n"
"    background-color: rgba(40, 70, 50, 60);\n"
"    padding-left: 12px;\n"
"    padding-top: 12px;\n"
"    color: #0D2C1E; \n"
"}\n"
"\n"
"QToolButton:checked {\n"
"    background-color: rgba(100, 150, 120, 80);\n"
"    color: #0D2C1E;\n"
"    border: 1px solid #0D2C1E;\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/user (3).png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        customerButton->setIcon(icon);
        customerButton->setIconSize(QSize(120, 120));
        ownerButton = new QToolButton(page);
        ownerButton->setObjectName("ownerButton");
        ownerButton->setGeometry(QRect(430, 370, 50, 50));
        ownerButton->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"    background-color: transparent;\n"
"    border: none;\n"
"    padding: 1px;\n"
"    qproperty-iconSize: 120px 120px;\n"
"    color: #0D2C1E; \n"
"    border-radius: 10px;\n"
"}\n"
"\n"
"QToolButton:hover {\n"
"    background-color: rgba(100, 150, 120, 30);\n"
"    color: #0D2C1E;\n"
"}\n"
"\n"
"QToolButton:pressed {\n"
"    background-color: rgba(40, 70, 50, 60);\n"
"    padding-left: 12px;\n"
"    padding-top: 12px;\n"
"    color: #0D2C1E; \n"
"}\n"
"\n"
"QToolButton:checked {\n"
"    background-color: rgba(100, 150, 120, 80);\n"
"    color: #0D2C1E;\n"
"    border: 1px solid #0D2C1E;\n"
"}\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/cafe (2).png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        ownerButton->setIcon(icon1);
        eyeLog = new QToolButton(page);
        eyeLog->setObjectName("eyeLog");
        eyeLog->setGeometry(QRect(480, 200, 27, 27));
        eyeLog->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"    background-color: transparent;\n"
"    border: none;\n"
"    padding: 1px;\n"
"    qproperty-iconSize: 120px 120px;\n"
"    color: #0D2C1E; \n"
"    border-radius: 10px;\n"
"}\n"
"\n"
"QToolButton:hover {\n"
"    background-color: rgba(100, 150, 120, 30);\n"
"    color: #0D2C1E;\n"
"}\n"
"\n"
"QToolButton:pressed {\n"
"    background-color: rgba(40, 70, 50, 60);\n"
"    padding-left: 12px;\n"
"    padding-top: 12px;\n"
"    color: #0D2C1E; \n"
"}\n"
"\n"
"QToolButton:checked {\n"
"    background-color: rgba(100, 150, 120, 80);\n"
"    color: #0D2C1E;\n"
"    border: 1px solid #0D2C1E;\n"
"}\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/eye (2).png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        eyeLog->setIcon(icon2);
        stackedWidget->addWidget(page);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        label_8 = new QLabel(page_4);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(20, 89, 521, 361));
        label_8->setStyleSheet(QString::fromUtf8("background-color:rgba(220, 220, 200, 1);\n"
"border-bottom-right-radius: 50px;\n"
"border-bottom-left-radius: 50px;\n"
"border-top-left-radius: 50px;\n"
"border-top-right-radius: 50px;"));
        label_9 = new QLabel(page_4);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(380, 20, 141, 141));
        label_9->setStyleSheet(QString::fromUtf8("border-image: url(:/images/question-mark (1).png);"));
        label_11 = new QLabel(page_4);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(60, 100, 311, 61));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Rockwell")});
        font6.setPointSize(25);
        label_11->setFont(font6);
        label_11->setStyleSheet(QString::fromUtf8("color:rgba(45, 80, 60, 255);"));
        lineEdit_forgotName = new QLineEdit(page_4);
        lineEdit_forgotName->setObjectName("lineEdit_forgotName");
        lineEdit_forgotName->setGeometry(QRect(60, 180, 130, 40));
        lineEdit_forgotName->setFont(font2);
        lineEdit_forgotName->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(46, 82, 101, 200);\n"
"color:rgba(0, 0, 0, 240);"));
        lineEdit_forgotLName = new QLineEdit(page_4);
        lineEdit_forgotLName->setObjectName("lineEdit_forgotLName");
        lineEdit_forgotLName->setGeometry(QRect(210, 180, 160, 40));
        lineEdit_forgotLName->setFont(font2);
        lineEdit_forgotLName->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(46, 82, 101, 200);\n"
"color:rgba(0, 0, 0, 240);"));
        lineEdit_forgotEmail = new QLineEdit(page_4);
        lineEdit_forgotEmail->setObjectName("lineEdit_forgotEmail");
        lineEdit_forgotEmail->setGeometry(QRect(60, 220, 310, 40));
        lineEdit_forgotEmail->setFont(font2);
        lineEdit_forgotEmail->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(46, 82, 101, 200);\n"
"color:rgba(0, 0, 0, 240);\n"
""));
        lineEdit_forgotPhoneNumber = new QLineEdit(page_4);
        lineEdit_forgotPhoneNumber->setObjectName("lineEdit_forgotPhoneNumber");
        lineEdit_forgotPhoneNumber->setGeometry(QRect(60, 260, 310, 40));
        lineEdit_forgotPhoneNumber->setFont(font2);
        lineEdit_forgotPhoneNumber->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(46, 82, 101, 200);\n"
"color:rgba(0, 0, 0, 240);"));
        resetButton = new QPushButton(page_4);
        resetButton->setObjectName("resetButton");
        resetButton->setGeometry(QRect(400, 260, 121, 41));
        resetButton->setStyleSheet(QString::fromUtf8("QPushButton#resetButton {\n"
"    background-color: rgba(30, 60, 45, 255);    \n"
"    color: #F0F8F2;                        \n"
"    border: none;\n"
"    border-radius: 8px;\n"
"    padding: 6px 20px;\n"
"}\n"
"\n"
"QPushButton#resetButton:hover {\n"
"    background-color: rgba(45, 80, 60, 255);    \n"
"}\n"
"\n"
"QPushButton#resetButton:pressed {\n"
"    background-color: rgba(20, 40, 30, 255);    \n"
"    padding-left: 8px;\n"
"    padding-top: 8px;\n"
"}\n"
""));
        label_10 = new QLabel(page_4);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(10, 310, 151, 141));
        label_10->setStyleSheet(QString::fromUtf8("border-image: url(:/images/forgot-password.png);"));
        Forgotback = new QToolButton(page_4);
        Forgotback->setObjectName("Forgotback");
        Forgotback->setGeometry(QRect(2, 2, 25, 27));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/left-arrow.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        Forgotback->setIcon(icon3);
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        label_12 = new QLabel(page_5);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(20, 90, 521, 361));
        label_12->setStyleSheet(QString::fromUtf8("background-color:rgba(220, 220, 200, 1);\n"
"border-bottom-right-radius: 50px;\n"
"border-bottom-left-radius: 50px;\n"
"border-top-left-radius: 50px;\n"
"border-top-right-radius: 50px;"));
        label_13 = new QLabel(page_5);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(60, 30, 131, 131));
        label_13->setStyleSheet(QString::fromUtf8("border-image: url(:/images/rotation-lock.png);"));
        lineEditNewPassword = new QLineEdit(page_5);
        lineEditNewPassword->setObjectName("lineEditNewPassword");
        lineEditNewPassword->setGeometry(QRect(80, 190, 251, 40));
        lineEditNewPassword->setFont(font2);
        lineEditNewPassword->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(46, 82, 101, 200);\n"
"color:rgba(0, 0, 0, 240);"));
        lineEditRepeatNewPassword = new QLineEdit(page_5);
        lineEditRepeatNewPassword->setObjectName("lineEditRepeatNewPassword");
        lineEditRepeatNewPassword->setGeometry(QRect(80, 230, 251, 40));
        lineEditRepeatNewPassword->setFont(font2);
        lineEditRepeatNewPassword->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(46, 82, 101, 200);\n"
"color:rgba(0, 0, 0, 240);"));
        DoneButton = new QPushButton(page_5);
        DoneButton->setObjectName("DoneButton");
        DoneButton->setGeometry(QRect(80, 310, 91, 71));
        DoneButton->setStyleSheet(QString::fromUtf8("QPushButton#DoneButton {\n"
"    background-color: rgba(30, 60, 45, 255);    \n"
"    color: #F0F8F2;                        \n"
"    border: none;\n"
"    border-radius: 8px;\n"
"    padding: 6px 20px;\n"
"}\n"
"\n"
"QPushButton#DoneButton:hover {\n"
"    background-color: rgba(45, 80, 60, 255);    \n"
"}\n"
"\n"
"QPushButton#DoneButton:pressed {\n"
"    background-color: rgba(20, 40, 30, 255);    \n"
"    padding-left: 8px;\n"
"    padding-top: 8px;\n"
"}\n"
""));
        label_17 = new QLabel(page_5);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(390, 310, 151, 141));
        label_17->setStyleSheet(QString::fromUtf8("border-image: url(:/images/forgot-password.png);"));
        label_18 = new QLabel(page_5);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(250, 100, 261, 61));
        label_18->setFont(font6);
        label_18->setStyleSheet(QString::fromUtf8("color:rgba(45, 80, 60, 255);"));
        eyeReap = new QToolButton(page_5);
        eyeReap->setObjectName("eyeReap");
        eyeReap->setGeometry(QRect(300, 240, 27, 27));
        eyeReap->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"    background-color: transparent;\n"
"    border: none;\n"
"    padding: 1px;\n"
"    qproperty-iconSize: 120px 120px;\n"
"    color: #0D2C1E; \n"
"    border-radius: 10px;\n"
"}\n"
"\n"
"QToolButton:hover {\n"
"    background-color: rgba(100, 150, 120, 30);\n"
"    color: #0D2C1E;\n"
"}\n"
"\n"
"QToolButton:pressed {\n"
"    background-color: rgba(40, 70, 50, 60);\n"
"    padding-left: 12px;\n"
"    padding-top: 12px;\n"
"    color: #0D2C1E; \n"
"}\n"
"\n"
"QToolButton:checked {\n"
"    background-color: rgba(100, 150, 120, 80);\n"
"    color: #0D2C1E;\n"
"    border: 1px solid #0D2C1E;\n"
"}\n"
""));
        eyeReap->setIcon(icon2);
        eyePass = new QToolButton(page_5);
        eyePass->setObjectName("eyePass");
        eyePass->setGeometry(QRect(300, 200, 27, 27));
        eyePass->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"    background-color: transparent;\n"
"    border: none;\n"
"    padding: 1px;\n"
"    qproperty-iconSize: 120px 120px;\n"
"    color: #0D2C1E; \n"
"    border-radius: 10px;\n"
"}\n"
"\n"
"QToolButton:hover {\n"
"    background-color: rgba(100, 150, 120, 30);\n"
"    color: #0D2C1E;\n"
"}\n"
"\n"
"QToolButton:pressed {\n"
"    background-color: rgba(40, 70, 50, 60);\n"
"    padding-left: 12px;\n"
"    padding-top: 12px;\n"
"    color: #0D2C1E; \n"
"}\n"
"\n"
"QToolButton:checked {\n"
"    background-color: rgba(100, 150, 120, 80);\n"
"    color: #0D2C1E;\n"
"    border: 1px solid #0D2C1E;\n"
"}\n"
""));
        eyePass->setIcon(icon2);
        stackedWidget->addWidget(page_5);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        label_19 = new QLabel(page_3);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(20, 30, 250, 430));
        label_19->setFont(font);
        label_19->setStyleSheet(QString::fromUtf8("background-color:rgba(220, 213, 200, 1);\n"
"border-bottom-left-radius: 50px;"));
        label_20 = new QLabel(page_3);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(80, 50, 163, 51));
        label_20->setFont(font1);
        label_20->setStyleSheet(QString::fromUtf8("color:rgba(13, 55, 30, 1);"));
        comboBox_SignCustomerLocation = new QComboBox(page_3);
        comboBox_SignCustomerLocation->addItem(QString());
        comboBox_SignCustomerLocation->addItem(QString());
        comboBox_SignCustomerLocation->addItem(QString());
        comboBox_SignCustomerLocation->addItem(QString());
        comboBox_SignCustomerLocation->addItem(QString());
        comboBox_SignCustomerLocation->addItem(QString());
        comboBox_SignCustomerLocation->addItem(QString());
        comboBox_SignCustomerLocation->addItem(QString());
        comboBox_SignCustomerLocation->addItem(QString());
        comboBox_SignCustomerLocation->addItem(QString());
        comboBox_SignCustomerLocation->addItem(QString());
        comboBox_SignCustomerLocation->addItem(QString());
        comboBox_SignCustomerLocation->addItem(QString());
        comboBox_SignCustomerLocation->addItem(QString());
        comboBox_SignCustomerLocation->addItem(QString());
        comboBox_SignCustomerLocation->addItem(QString());
        comboBox_SignCustomerLocation->addItem(QString());
        comboBox_SignCustomerLocation->addItem(QString());
        comboBox_SignCustomerLocation->addItem(QString());
        comboBox_SignCustomerLocation->addItem(QString());
        comboBox_SignCustomerLocation->setObjectName("comboBox_SignCustomerLocation");
        comboBox_SignCustomerLocation->setGeometry(QRect(50, 280, 190, 31));
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Courier")});
        font7.setPointSize(10);
        font7.setBold(false);
        font7.setItalic(false);
        comboBox_SignCustomerLocation->setFont(font7);
        comboBox_SignCustomerLocation->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: rgba(30, 60, 45, 255);     \n"
"    border: 1px solid rgba(80, 130, 100, 180);\n"
"    border-radius: 6px;\n"
"    padding: 4px 8px;\n"
"    color: #F0F8F2;                              \n"
"}\n"
"\n"
"QComboBox:hover {\n"
"    background-color: rgba(45, 80, 60, 255); \n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 20px;\n"
"    border-left: 1px solid rgba(100, 150, 120, 100);\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    background-color: rgba(35, 70, 50, 255);      \n"
"    selection-background-color: rgba(60, 100, 80, 255);\n"
"    color: #F0F8F2;\n"
"    border: 1px solid rgba(100, 150, 120, 100);\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image: url(\":/images/dropdown-icon.png\");\n"
"    width: 12px;\n"
"    height: 12px;\n"
"}\n"
""));
        signUpCustomerButton = new QPushButton(page_3);
        signUpCustomerButton->setObjectName("signUpCustomerButton");
        signUpCustomerButton->setGeometry(QRect(50, 380, 190, 40));
        signUpCustomerButton->setFont(font3);
        signUpCustomerButton->setStyleSheet(QString::fromUtf8("QPushButton#signUpCustomerButton {\n"
"    background-color: rgba(30, 60, 45, 255);    \n"
"    color: #F0F8F2;                        \n"
"    border: none;\n"
"    border-radius: 8px;\n"
"    padding: 6px 20px;\n"
"}\n"
"\n"
"QPushButton#signUpCustomerButton:hover {\n"
"    background-color: rgba(45, 80, 60, 255);    \n"
"}\n"
"\n"
"QPushButton#signUpCustomerButton:pressed {\n"
"    background-color: rgba(20, 40, 30, 255);    \n"
"    padding-left: 8px;\n"
"    padding-top: 8px;\n"
"}\n"
""));
        Customerback = new QToolButton(page_3);
        Customerback->setObjectName("Customerback");
        Customerback->setGeometry(QRect(2, 2, 25, 27));
        Customerback->setIcon(icon3);
        label_7 = new QLabel(page_3);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(270, 30, 270, 430));
        label_7->setStyleSheet(QString::fromUtf8("border-image: url(:/images/AppIcon.png);\n"
"border-top-right-radius:50px;"));
        label_28 = new QLabel(page_3);
        label_28->setObjectName("label_28");
        label_28->setGeometry(QRect(270, 30, 270, 430));
        label_28->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 80);\n"
"border-top-right-radius:50px;"));
        lineEdit_SignCustomerName = new QLineEdit(page_3);
        lineEdit_SignCustomerName->setObjectName("lineEdit_SignCustomerName");
        lineEdit_SignCustomerName->setGeometry(QRect(50, 110, 90, 40));
        lineEdit_SignCustomerName->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(46, 82, 101, 200);\n"
"color:rgba(0, 0, 0, 240);"));
        lineEdit_SignCustomerLName = new QLineEdit(page_3);
        lineEdit_SignCustomerLName->setObjectName("lineEdit_SignCustomerLName");
        lineEdit_SignCustomerLName->setGeometry(QRect(150, 110, 90, 40));
        lineEdit_SignCustomerLName->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(46, 82, 101, 200);\n"
"color:rgba(0, 0, 0, 240);"));
        lineEdit_SignCustomerEmail = new QLineEdit(page_3);
        lineEdit_SignCustomerEmail->setObjectName("lineEdit_SignCustomerEmail");
        lineEdit_SignCustomerEmail->setGeometry(QRect(50, 150, 190, 40));
        lineEdit_SignCustomerEmail->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(46, 82, 101, 200);\n"
"color:rgba(0, 0, 0, 240);"));
        lineEdit_SignCustomerPhoneNumber = new QLineEdit(page_3);
        lineEdit_SignCustomerPhoneNumber->setObjectName("lineEdit_SignCustomerPhoneNumber");
        lineEdit_SignCustomerPhoneNumber->setGeometry(QRect(50, 190, 190, 40));
        lineEdit_SignCustomerPhoneNumber->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(46, 82, 101, 200);\n"
"color:rgba(0, 0, 0, 240);"));
        lineEdit_SignCustomerPassword = new QLineEdit(page_3);
        lineEdit_SignCustomerPassword->setObjectName("lineEdit_SignCustomerPassword");
        lineEdit_SignCustomerPassword->setGeometry(QRect(50, 230, 190, 40));
        lineEdit_SignCustomerPassword->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(46, 82, 101, 200);\n"
"color:rgba(0, 0, 0, 240);"));
        stackedWidget->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        label_5 = new QLabel(page_2);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(260, 30, 280, 430));
        label_5->setSizeIncrement(QSize(0, 0));
        label_5->setStyleSheet(QString::fromUtf8("border-image: url(:/images/owner.png);\n"
"border-top-right-radius:50px;\n"
""));
        label_14 = new QLabel(page_2);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(260, 30, 280, 430));
        label_14->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 80);\n"
"border-top-right-radius:50px;"));
        label_15 = new QLabel(page_2);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(20, 30, 250, 430));
        label_15->setFont(font);
        label_15->setStyleSheet(QString::fromUtf8("background-color:rgba(220, 213, 200, 1);\n"
"border-bottom-left-radius: 50px;"));
        label_16 = new QLabel(page_2);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(80, 30, 163, 51));
        label_16->setFont(font1);
        label_16->setStyleSheet(QString::fromUtf8("color:rgba(13, 55, 30, 1);"));
        comboBox_SignOwnerLocation = new QComboBox(page_2);
        comboBox_SignOwnerLocation->addItem(QString());
        comboBox_SignOwnerLocation->addItem(QString());
        comboBox_SignOwnerLocation->addItem(QString());
        comboBox_SignOwnerLocation->addItem(QString());
        comboBox_SignOwnerLocation->addItem(QString());
        comboBox_SignOwnerLocation->addItem(QString());
        comboBox_SignOwnerLocation->addItem(QString());
        comboBox_SignOwnerLocation->addItem(QString());
        comboBox_SignOwnerLocation->addItem(QString());
        comboBox_SignOwnerLocation->addItem(QString());
        comboBox_SignOwnerLocation->addItem(QString());
        comboBox_SignOwnerLocation->addItem(QString());
        comboBox_SignOwnerLocation->addItem(QString());
        comboBox_SignOwnerLocation->addItem(QString());
        comboBox_SignOwnerLocation->addItem(QString());
        comboBox_SignOwnerLocation->addItem(QString());
        comboBox_SignOwnerLocation->addItem(QString());
        comboBox_SignOwnerLocation->addItem(QString());
        comboBox_SignOwnerLocation->addItem(QString());
        comboBox_SignOwnerLocation->addItem(QString());
        comboBox_SignOwnerLocation->setObjectName("comboBox_SignOwnerLocation");
        comboBox_SignOwnerLocation->setGeometry(QRect(50, 350, 190, 31));
        comboBox_SignOwnerLocation->setFont(font7);
        comboBox_SignOwnerLocation->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: rgba(30, 60, 45, 255);     \n"
"    border: 1px solid rgba(80, 130, 100, 180);\n"
"    border-radius: 6px;\n"
"    padding: 4px 8px;\n"
"    color: #F0F8F2;                              \n"
"}\n"
"\n"
"QComboBox:hover {\n"
"    background-color: rgba(45, 80, 60, 255); \n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 20px;\n"
"    border-left: 1px solid rgba(100, 150, 120, 100);\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    background-color: rgba(35, 70, 50, 255);      \n"
"    selection-background-color: rgba(60, 100, 80, 255);\n"
"    color: #F0F8F2;\n"
"    border: 1px solid rgba(100, 150, 120, 100);\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image: url(\":/images/dropdown-icon.png\");\n"
"    width: 12px;\n"
"    height: 12px;\n"
"}\n"
""));
        signUpOwnerButton = new QPushButton(page_2);
        signUpOwnerButton->setObjectName("signUpOwnerButton");
        signUpOwnerButton->setGeometry(QRect(50, 400, 190, 40));
        signUpOwnerButton->setFont(font3);
        signUpOwnerButton->setStyleSheet(QString::fromUtf8("QPushButton#signUpOwnerButton {\n"
"    background-color: rgba(30, 60, 45, 255);    \n"
"    color: #F0F8F2;                        \n"
"    border: none;\n"
"    border-radius: 8px;\n"
"    padding: 6px 20px;\n"
"}\n"
"\n"
"QPushButton#signUpOwnerButton:hover {\n"
"    background-color: rgba(45, 80, 60, 255);    \n"
"}\n"
"\n"
"QPushButton#signUpOwnerButton:pressed {\n"
"    background-color: rgba(20, 40, 30, 255);    \n"
"    padding-left: 8px;\n"
"    padding-top: 8px;\n"
"}\n"
""));
        Ownerback = new QToolButton(page_2);
        Ownerback->setObjectName("Ownerback");
        Ownerback->setGeometry(QRect(2, 2, 25, 27));
        Ownerback->setIcon(icon3);
        lineEdit_SignOwnerName = new QLineEdit(page_2);
        lineEdit_SignOwnerName->setObjectName("lineEdit_SignOwnerName");
        lineEdit_SignOwnerName->setGeometry(QRect(50, 100, 90, 40));
        lineEdit_SignOwnerName->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(46, 82, 101, 200);\n"
"color:rgba(0, 0, 0, 240);"));
        lineEdit_SignOwnerLName = new QLineEdit(page_2);
        lineEdit_SignOwnerLName->setObjectName("lineEdit_SignOwnerLName");
        lineEdit_SignOwnerLName->setGeometry(QRect(150, 100, 90, 40));
        lineEdit_SignOwnerLName->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(46, 82, 101, 200);\n"
"color:rgba(0, 0, 0, 240);"));
        lineEdit_SignOwnerEmail = new QLineEdit(page_2);
        lineEdit_SignOwnerEmail->setObjectName("lineEdit_SignOwnerEmail");
        lineEdit_SignOwnerEmail->setGeometry(QRect(50, 140, 190, 40));
        lineEdit_SignOwnerEmail->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(46, 82, 101, 200);\n"
"color:rgba(0, 0, 0, 240);"));
        lineEdit_SignOwnerPhoneNumber = new QLineEdit(page_2);
        lineEdit_SignOwnerPhoneNumber->setObjectName("lineEdit_SignOwnerPhoneNumber");
        lineEdit_SignOwnerPhoneNumber->setGeometry(QRect(50, 180, 190, 40));
        lineEdit_SignOwnerPhoneNumber->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(46, 82, 101, 200);\n"
"color:rgba(0, 0, 0, 240);"));
        lineEdit_SignOwnerRestaurantName = new QLineEdit(page_2);
        lineEdit_SignOwnerRestaurantName->setObjectName("lineEdit_SignOwnerRestaurantName");
        lineEdit_SignOwnerRestaurantName->setGeometry(QRect(50, 220, 190, 40));
        lineEdit_SignOwnerRestaurantName->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(46, 82, 101, 200);\n"
"color:rgba(0, 0, 0, 240);"));
        lineEdit_SignOwnerRestaurantNumber = new QLineEdit(page_2);
        lineEdit_SignOwnerRestaurantNumber->setObjectName("lineEdit_SignOwnerRestaurantNumber");
        lineEdit_SignOwnerRestaurantNumber->setGeometry(QRect(50, 260, 190, 40));
        lineEdit_SignOwnerRestaurantNumber->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(46, 82, 101, 200);\n"
"color:rgba(0, 0, 0, 240);"));
        lineEdit_SignOwnerPassword = new QLineEdit(page_2);
        lineEdit_SignOwnerPassword->setObjectName("lineEdit_SignOwnerPassword");
        lineEdit_SignOwnerPassword->setGeometry(QRect(50, 300, 190, 40));
        lineEdit_SignOwnerPassword->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 0);\n"
"border:none;\n"
"border-bottom:2px solid rgba(46, 82, 101, 200);\n"
"color:rgba(0, 0, 0, 240);"));
        stackedWidget->addWidget(page_2);
        logInWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(logInWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 560, 25));
        logInWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(logInWindow);
        statusbar->setObjectName("statusbar");
        logInWindow->setStatusBar(statusbar);

        retranslateUi(logInWindow);

        stackedWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(logInWindow);
    } // setupUi

    void retranslateUi(QMainWindow *logInWindow)
    {
        logInWindow->setWindowTitle(QCoreApplication::translate("logInWindow", "logInWindow", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QCoreApplication::translate("logInWindow", "Log In", nullptr));
        lineEditUsername->setText(QString());
        lineEditUsername->setPlaceholderText(QCoreApplication::translate("logInWindow", "Email or Phone Number", nullptr));
        lineEditPassword->setText(QString());
        lineEditPassword->setPlaceholderText(QCoreApplication::translate("logInWindow", "Password", nullptr));
        loginButton->setText(QCoreApplication::translate("logInWindow", "L o g  I n", nullptr));
        forgotPass->setText(QCoreApplication::translate("logInWindow", "<a href=\"recover\" style=\"color: rgb(80, 120, 100); text-decoration: none;\">Forgot Password?</a>\n"
"", nullptr));
        label_6->setText(QCoreApplication::translate("logInWindow", "                 sign up as ", nullptr));
#if QT_CONFIG(tooltip)
        customerButton->setToolTip(QCoreApplication::translate("logInWindow", "customer", nullptr));
#endif // QT_CONFIG(tooltip)
        customerButton->setText(QString());
#if QT_CONFIG(tooltip)
        ownerButton->setToolTip(QCoreApplication::translate("logInWindow", "restaurant owner", nullptr));
#endif // QT_CONFIG(tooltip)
        ownerButton->setText(QCoreApplication::translate("logInWindow", "...", nullptr));
        eyeLog->setText(QCoreApplication::translate("logInWindow", "...", nullptr));
        label_8->setText(QString());
        label_9->setText(QString());
        label_11->setText(QCoreApplication::translate("logInWindow", "Forgot Password", nullptr));
        lineEdit_forgotName->setText(QString());
        lineEdit_forgotName->setPlaceholderText(QCoreApplication::translate("logInWindow", "Name", nullptr));
        lineEdit_forgotLName->setText(QString());
        lineEdit_forgotLName->setPlaceholderText(QCoreApplication::translate("logInWindow", "Last Name", nullptr));
        lineEdit_forgotEmail->setText(QString());
        lineEdit_forgotEmail->setPlaceholderText(QCoreApplication::translate("logInWindow", "Email", nullptr));
        lineEdit_forgotPhoneNumber->setText(QString());
        lineEdit_forgotPhoneNumber->setPlaceholderText(QCoreApplication::translate("logInWindow", "Phone Number", nullptr));
        resetButton->setText(QCoreApplication::translate("logInWindow", "Reset Password", nullptr));
        label_10->setText(QString());
        Forgotback->setText(QCoreApplication::translate("logInWindow", "...", nullptr));
        label_12->setText(QString());
        label_13->setText(QString());
        lineEditNewPassword->setText(QString());
        lineEditNewPassword->setPlaceholderText(QCoreApplication::translate("logInWindow", "Password", nullptr));
        lineEditRepeatNewPassword->setText(QString());
        lineEditRepeatNewPassword->setPlaceholderText(QCoreApplication::translate("logInWindow", "Repeat Password", nullptr));
        DoneButton->setText(QCoreApplication::translate("logInWindow", "DONE", nullptr));
        label_17->setText(QString());
        label_18->setText(QCoreApplication::translate("logInWindow", "Set Password", nullptr));
        eyeReap->setText(QCoreApplication::translate("logInWindow", "...", nullptr));
        eyePass->setText(QCoreApplication::translate("logInWindow", "...", nullptr));
        label_19->setText(QString());
        label_20->setText(QCoreApplication::translate("logInWindow", "Sign Up", nullptr));
        comboBox_SignCustomerLocation->setItemText(0, QCoreApplication::translate("logInWindow", "Tehran", nullptr));
        comboBox_SignCustomerLocation->setItemText(1, QCoreApplication::translate("logInWindow", "Mashhad", nullptr));
        comboBox_SignCustomerLocation->setItemText(2, QCoreApplication::translate("logInWindow", "Isfahan", nullptr));
        comboBox_SignCustomerLocation->setItemText(3, QCoreApplication::translate("logInWindow", "Karaj", nullptr));
        comboBox_SignCustomerLocation->setItemText(4, QCoreApplication::translate("logInWindow", "Tabriz", nullptr));
        comboBox_SignCustomerLocation->setItemText(5, QCoreApplication::translate("logInWindow", "Shiraz", nullptr));
        comboBox_SignCustomerLocation->setItemText(6, QCoreApplication::translate("logInWindow", "Ahvaz", nullptr));
        comboBox_SignCustomerLocation->setItemText(7, QCoreApplication::translate("logInWindow", "Qom", nullptr));
        comboBox_SignCustomerLocation->setItemText(8, QCoreApplication::translate("logInWindow", "Kermanshah", nullptr));
        comboBox_SignCustomerLocation->setItemText(9, QCoreApplication::translate("logInWindow", "Urmia", nullptr));
        comboBox_SignCustomerLocation->setItemText(10, QCoreApplication::translate("logInWindow", "Rasht", nullptr));
        comboBox_SignCustomerLocation->setItemText(11, QCoreApplication::translate("logInWindow", "Hamadan", nullptr));
        comboBox_SignCustomerLocation->setItemText(12, QCoreApplication::translate("logInWindow", "Yazd", nullptr));
        comboBox_SignCustomerLocation->setItemText(13, QCoreApplication::translate("logInWindow", "Kerman", nullptr));
        comboBox_SignCustomerLocation->setItemText(14, QCoreApplication::translate("logInWindow", "Ardabil", nullptr));
        comboBox_SignCustomerLocation->setItemText(15, QCoreApplication::translate("logInWindow", "Bandar Abbas", nullptr));
        comboBox_SignCustomerLocation->setItemText(16, QCoreApplication::translate("logInWindow", "Qazvin", nullptr));
        comboBox_SignCustomerLocation->setItemText(17, QCoreApplication::translate("logInWindow", "Shahr-e Kord", nullptr));
        comboBox_SignCustomerLocation->setItemText(18, QCoreApplication::translate("logInWindow", "Bandar Anzali", nullptr));
        comboBox_SignCustomerLocation->setItemText(19, QCoreApplication::translate("logInWindow", "Abadan", nullptr));

        comboBox_SignCustomerLocation->setPlaceholderText(QCoreApplication::translate("logInWindow", "Location", nullptr));
        signUpCustomerButton->setText(QCoreApplication::translate("logInWindow", "S i g n  U p", nullptr));
        Customerback->setText(QCoreApplication::translate("logInWindow", "...", nullptr));
        label_7->setText(QString());
        label_28->setText(QString());
        lineEdit_SignCustomerName->setPlaceholderText(QCoreApplication::translate("logInWindow", "Name", nullptr));
        lineEdit_SignCustomerLName->setPlaceholderText(QCoreApplication::translate("logInWindow", "Last Name", nullptr));
        lineEdit_SignCustomerEmail->setPlaceholderText(QCoreApplication::translate("logInWindow", "Email", nullptr));
        lineEdit_SignCustomerPhoneNumber->setPlaceholderText(QCoreApplication::translate("logInWindow", "Phone Number", nullptr));
        lineEdit_SignCustomerPassword->setPlaceholderText(QCoreApplication::translate("logInWindow", "Password", nullptr));
        label_5->setText(QString());
        label_14->setText(QString());
        label_15->setText(QString());
        label_16->setText(QCoreApplication::translate("logInWindow", "Sign Up", nullptr));
        comboBox_SignOwnerLocation->setItemText(0, QCoreApplication::translate("logInWindow", "Tehran", nullptr));
        comboBox_SignOwnerLocation->setItemText(1, QCoreApplication::translate("logInWindow", "Mashhad", nullptr));
        comboBox_SignOwnerLocation->setItemText(2, QCoreApplication::translate("logInWindow", "Isfahan", nullptr));
        comboBox_SignOwnerLocation->setItemText(3, QCoreApplication::translate("logInWindow", "Karaj", nullptr));
        comboBox_SignOwnerLocation->setItemText(4, QCoreApplication::translate("logInWindow", "Tabriz", nullptr));
        comboBox_SignOwnerLocation->setItemText(5, QCoreApplication::translate("logInWindow", "Shiraz", nullptr));
        comboBox_SignOwnerLocation->setItemText(6, QCoreApplication::translate("logInWindow", "Ahvaz", nullptr));
        comboBox_SignOwnerLocation->setItemText(7, QCoreApplication::translate("logInWindow", "Qom", nullptr));
        comboBox_SignOwnerLocation->setItemText(8, QCoreApplication::translate("logInWindow", "Kermanshah", nullptr));
        comboBox_SignOwnerLocation->setItemText(9, QCoreApplication::translate("logInWindow", "Urmia", nullptr));
        comboBox_SignOwnerLocation->setItemText(10, QCoreApplication::translate("logInWindow", "Rasht", nullptr));
        comboBox_SignOwnerLocation->setItemText(11, QCoreApplication::translate("logInWindow", "Hamadan", nullptr));
        comboBox_SignOwnerLocation->setItemText(12, QCoreApplication::translate("logInWindow", "Yazd", nullptr));
        comboBox_SignOwnerLocation->setItemText(13, QCoreApplication::translate("logInWindow", "Kerman", nullptr));
        comboBox_SignOwnerLocation->setItemText(14, QCoreApplication::translate("logInWindow", "Ardabil", nullptr));
        comboBox_SignOwnerLocation->setItemText(15, QCoreApplication::translate("logInWindow", "Bandar Abbas", nullptr));
        comboBox_SignOwnerLocation->setItemText(16, QCoreApplication::translate("logInWindow", "Qazvin", nullptr));
        comboBox_SignOwnerLocation->setItemText(17, QCoreApplication::translate("logInWindow", "Shahr-e Kord", nullptr));
        comboBox_SignOwnerLocation->setItemText(18, QCoreApplication::translate("logInWindow", "Bandar Anzali", nullptr));
        comboBox_SignOwnerLocation->setItemText(19, QCoreApplication::translate("logInWindow", "Abadan", nullptr));

        comboBox_SignOwnerLocation->setPlaceholderText(QCoreApplication::translate("logInWindow", "Location", nullptr));
        signUpOwnerButton->setText(QCoreApplication::translate("logInWindow", "S i g n  U p", nullptr));
        Ownerback->setText(QCoreApplication::translate("logInWindow", "...", nullptr));
        lineEdit_SignOwnerName->setPlaceholderText(QCoreApplication::translate("logInWindow", "Name", nullptr));
        lineEdit_SignOwnerLName->setPlaceholderText(QCoreApplication::translate("logInWindow", "Last Name", nullptr));
        lineEdit_SignOwnerEmail->setPlaceholderText(QCoreApplication::translate("logInWindow", "Email", nullptr));
        lineEdit_SignOwnerPhoneNumber->setPlaceholderText(QCoreApplication::translate("logInWindow", "Phone Number", nullptr));
        lineEdit_SignOwnerRestaurantName->setPlaceholderText(QCoreApplication::translate("logInWindow", "Name of the restaurant", nullptr));
        lineEdit_SignOwnerRestaurantNumber->setPlaceholderText(QCoreApplication::translate("logInWindow", "Restaurant Number", nullptr));
        lineEdit_SignOwnerPassword->setPlaceholderText(QCoreApplication::translate("logInWindow", "Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class logInWindow: public Ui_logInWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
