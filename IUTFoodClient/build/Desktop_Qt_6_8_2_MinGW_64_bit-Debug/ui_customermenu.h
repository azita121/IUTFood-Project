/********************************************************************************
** Form generated from reading UI file 'customermenu.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERMENU_H
#define UI_CUSTOMERMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomerMenu
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *HistoryButton;
    QPushButton *homeButton;
    QPushButton *shoppingCartButton;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLabel *label_5;
    QComboBox *locationComboBox;
    QComboBox *priceComboBox;
    QComboBox *typeComboBox;
    QLabel *label_6;
    QPushButton *resetFiltersButton;
    QPushButton *orderTrackingButton;
    QWidget *shoppingCartPage;
    QFrame *cartScrollHolder;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_4;
    QLabel *label_17;
    QLabel *numberOfOrders;
    QLabel *label_13;
    QLabel *totalPrice;
    QLabel *label_18;
    QPushButton *orderButton;
    QPushButton *shoppingCartButton_2;
    QPushButton *homeButton_2;
    QPushButton *HistoryButton_2;
    QPushButton *orderTrackingButton_2;
    QWidget *HistoryPage;
    QFrame *historyFrame;
    QLabel *label_9;
    QLabel *label_12;
    QLabel *label_2;
    QPushButton *deleteHistoryButton;
    QPushButton *shoppingCartButton_3;
    QPushButton *homeButton_3;
    QPushButton *HistoryButton_3;
    QPushButton *orderTrackingButton_3;

    void setupUi(QWidget *CustomerMenu)
    {
        if (CustomerMenu->objectName().isEmpty())
            CustomerMenu->setObjectName("CustomerMenu");
        CustomerMenu->resize(560, 510);
        stackedWidget = new QStackedWidget(CustomerMenu);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, 0, 560, 510));
        page = new QWidget();
        page->setObjectName("page");
        HistoryButton = new QPushButton(page);
        HistoryButton->setObjectName("HistoryButton");
        HistoryButton->setGeometry(QRect(372, 450, 188, 60));
        HistoryButton->setStyleSheet(QString::fromUtf8("QPushButton#HistoryButton {\n"
"    background-color: rgba(40, 60, 45, 255);   \n"
"    color: #F0F8F2;                \n"
"    border-bottom-right-radius: 50px;              \n"
"    padding: 6px 20px;\n"
"}\n"
"\n"
"QPushButton#HistoryButton:hover {\n"
"    background-color: rgba(55, 80, 60, 255);   \n"
"}\n"
"\n"
"QPushButton#HistoryButton:pressed {\n"
"    background-color: rgba(30, 40, 30, 255);    \n"
"    padding-left: 8px;\n"
"    padding-top: 8px;\n"
"}\n"
""));
        homeButton = new QPushButton(page);
        homeButton->setObjectName("homeButton");
        homeButton->setGeometry(QRect(186, 450, 186, 60));
        homeButton->setStyleSheet(QString::fromUtf8("QPushButton#homeButton {\n"
"    background-color: rgba(40, 60, 45, 255);   \n"
"    color: #F0F8F2;                \n"
"    border-bottom-left-radius: 0px;              \n"
"    padding: 6px 20px;\n"
"}\n"
"\n"
"QPushButton#homeButton:hover {\n"
"    background-color: rgba(55, 80, 60, 255);   \n"
"}\n"
"\n"
"QPushButton#homeButton:pressed {\n"
"    background-color: rgba(30, 40, 30, 255);    \n"
"    padding-left: 8px;\n"
"    padding-top: 8px;\n"
"}\n"
""));
        shoppingCartButton = new QPushButton(page);
        shoppingCartButton->setObjectName("shoppingCartButton");
        shoppingCartButton->setGeometry(QRect(0, 450, 186, 60));
        shoppingCartButton->setStyleSheet(QString::fromUtf8("QPushButton#shoppingCartButton {\n"
"    background-color: rgba(40, 60, 45, 255);   \n"
"    color: #F0F8F2;                              \n"
"    border-bottom-left-radius: 50px;\n"
"    padding: 6px 20px;\n"
"}\n"
"\n"
"QPushButton#shoppingCartButton:hover {\n"
"    background-color: rgba(55, 80, 60, 255);   \n"
"}\n"
"\n"
"QPushButton#shoppingCartButton:pressed {\n"
"    background-color: rgba(30, 40, 30, 255);    \n"
"    padding-left: 8px;\n"
"    padding-top: 8px;\n"
"}\n"
""));
        scrollArea = new QScrollArea(page);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(0, 109, 560, 341));
        scrollArea->setStyleSheet(QString::fromUtf8("QScrollArea, QScrollArea > QWidget > QWidget {\n"
"    background-color: rgba(220, 213, 200, 1);\n"
"}\n"
"QScrollBar:vertical, QScrollBar:horizontal {\n"
"    width: 0px;\n"
"    height: 0px;\n"
"}"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 558, 20000));
        scrollAreaWidgetContents->setMinimumSize(QSize(0, 20000));
        verticalLayoutWidget = new QWidget(scrollAreaWidgetContents);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 0, 560, 540));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SizeConstraint::SetFixedSize);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea->setWidget(scrollAreaWidgetContents);
        label_3 = new QLabel(page);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(0, 0, 560, 110));
        QFont font;
        font.setPointSize(20);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("background-color:rgba(220, 213, 200, 1);\n"
"border-top-right-radius: 50px;\n"
"border-top-left-radius: 50px;"));
        label_5 = new QLabel(page);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(180, 0, 190, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Bauhaus 93")});
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setItalic(false);
        label_5->setFont(font1);
        label_5->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_5->setStyleSheet(QString::fromUtf8("color:rgba(13, 55, 30, 1);"));
        label_5->setTextFormat(Qt::TextFormat::AutoText);
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);
        locationComboBox = new QComboBox(page);
        locationComboBox->setObjectName("locationComboBox");
        locationComboBox->setGeometry(QRect(270, 70, 90, 20));
        locationComboBox->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"	background-color:rgba(0, 0, 0, 0);\n"
"	border:none;\n"
"	border-bottom:2px solid rgba(46, 82, 101, 200);\n"
"	color:rgba(0, 0, 0, 240);\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    background-color: rgba(66, 90, 81, 200);      \n"
"    selection-background-color: rgba(60, 100, 80, 255);\n"
"    color: #F0F8F2;\n"
"    border: 1px solid rgba(100, 150, 120, 100);\n"
"}\n"
""));
        priceComboBox = new QComboBox(page);
        priceComboBox->setObjectName("priceComboBox");
        priceComboBox->setGeometry(QRect(90, 70, 170, 20));
        priceComboBox->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"	background-color:rgba(0, 0, 0, 0);\n"
"	border:none;\n"
"	border-bottom:2px solid rgba(46, 82, 101, 200);\n"
"	color:rgba(0, 0, 0, 240);\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    background-color: rgba(66, 90, 81, 200);      \n"
"    selection-background-color: rgba(60, 100, 80, 255);\n"
"    color: #F0F8F2;\n"
"    border: 1px solid rgba(100, 150, 120, 100);\n"
"}\n"
""));
        typeComboBox = new QComboBox(page);
        typeComboBox->setObjectName("typeComboBox");
        typeComboBox->setGeometry(QRect(10, 70, 70, 20));
        typeComboBox->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"	background-color:rgba(0, 0, 0, 0);\n"
"	border:none;\n"
"	border-bottom:2px solid rgba(46, 82, 101, 200);\n"
"	color:rgba(0, 0, 0, 240);\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    background-color: rgba(66, 90, 81, 200);      \n"
"    selection-background-color: rgba(60, 100, 80, 255);\n"
"    color: #F0F8F2;\n"
"    border: 1px solid rgba(100, 150, 120, 100);\n"
"}\n"
""));
        label_6 = new QLabel(page);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 30, 90, 30));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Eras ITC")});
        font2.setPointSize(15);
        font2.setBold(false);
        font2.setItalic(false);
        label_6->setFont(font2);
        label_6->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_6->setStyleSheet(QString::fromUtf8("color:rgba(13, 55, 30, 1);"));
        label_6->setTextFormat(Qt::TextFormat::AutoText);
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);
        resetFiltersButton = new QPushButton(page);
        resetFiltersButton->setObjectName("resetFiltersButton");
        resetFiltersButton->setGeometry(QRect(420, 65, 121, 29));
        resetFiltersButton->setStyleSheet(QString::fromUtf8("QPushButton#resetFiltersButton {\n"
"    background-color: rgba(30, 60, 45, 255);   \n"
"    color: #F0F8F2;                              \n"
"    border-radius: 8px;\n"
"    padding: 6px 20px;\n"
"}\n"
"\n"
"QPushButton#resetFiltersButton:hover {\n"
"    background-color: rgba(45, 80, 60, 255);   \n"
"}\n"
"\n"
"QPushButton#resetFiltersButton:pressed {\n"
"    background-color: rgba(20, 40, 30, 255);    \n"
"    padding-left: 8px;\n"
"    padding-top: 8px;\n"
"}\n"
""));
        orderTrackingButton = new QPushButton(page);
        orderTrackingButton->setObjectName("orderTrackingButton");
        orderTrackingButton->setGeometry(QRect(280, 510, 140, 60));
        orderTrackingButton->setStyleSheet(QString::fromUtf8("QPushButton#orderTrackingButton {\n"
"    background-color: rgba(40, 60, 45, 255);   \n"
"    color: #F0F8F2;                \n"
"    border-bottom-left-radius: 0px;              \n"
"    padding: 6px 20px;\n"
"}\n"
"\n"
"QPushButton#orderTrackingButton:hover {\n"
"    background-color: rgba(55, 80, 60, 255);   \n"
"}\n"
"\n"
"QPushButton#orderTrackingButton:pressed {\n"
"    background-color: rgba(30, 40, 30, 255);    \n"
"    padding-left: 8px;\n"
"    padding-top: 8px;\n"
"}\n"
""));
        stackedWidget->addWidget(page);
        shoppingCartPage = new QWidget();
        shoppingCartPage->setObjectName("shoppingCartPage");
        cartScrollHolder = new QFrame(shoppingCartPage);
        cartScrollHolder->setObjectName("cartScrollHolder");
        cartScrollHolder->setGeometry(QRect(-10, 70, 360, 390));
        cartScrollHolder->setFrameShape(QFrame::Shape::StyledPanel);
        cartScrollHolder->setFrameShadow(QFrame::Shadow::Raised);
        label_14 = new QLabel(shoppingCartPage);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(0, 0, 560, 80));
        label_14->setFont(font);
        label_14->setStyleSheet(QString::fromUtf8("background-color:rgba(220, 213, 200, 1);\n"
"border-top-right-radius: 50px;\n"
"border-top-left-radius: 50px;"));
        label_15 = new QLabel(shoppingCartPage);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(150, 0, 261, 70));
        label_15->setFont(font1);
        label_15->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_15->setStyleSheet(QString::fromUtf8("color:rgba(13, 55, 30, 1);"));
        label_15->setTextFormat(Qt::TextFormat::AutoText);
        label_15->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_16 = new QLabel(shoppingCartPage);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(330, 80, 230, 370));
        label_16->setFont(font);
        label_16->setStyleSheet(QString::fromUtf8("background-color:rgba(220, 213, 200, 1);"));
        label_4 = new QLabel(shoppingCartPage);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(330, 80, 230, 270));
        label_4->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 80);\n"
"border-bottom-right-radius: 50px;\n"
"border-bottom-left-radius: 50px;\n"
"border-top-left-radius: 50px;\n"
"border-top-right-radius: 50px;"));
        label_17 = new QLabel(shoppingCartPage);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(330, 90, 241, 60));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("8514oem")});
        font3.setPointSize(15);
        font3.setBold(false);
        font3.setItalic(false);
        label_17->setFont(font3);
        label_17->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_17->setStyleSheet(QString::fromUtf8("color:rgba(13, 55, 30, 1);"));
        label_17->setTextFormat(Qt::TextFormat::AutoText);
        label_17->setAlignment(Qt::AlignmentFlag::AlignCenter);
        numberOfOrders = new QLabel(shoppingCartPage);
        numberOfOrders->setObjectName("numberOfOrders");
        numberOfOrders->setGeometry(QRect(350, 150, 170, 31));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Informal Roman")});
        font4.setPointSize(25);
        font4.setBold(true);
        font4.setItalic(false);
        numberOfOrders->setFont(font4);
        numberOfOrders->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        numberOfOrders->setStyleSheet(QString::fromUtf8("color:rgba(13, 55, 30, 1);"));
        numberOfOrders->setTextFormat(Qt::TextFormat::AutoText);
        numberOfOrders->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label_13 = new QLabel(shoppingCartPage);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(330, 190, 230, 60));
        label_13->setFont(font3);
        label_13->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_13->setStyleSheet(QString::fromUtf8("color:rgba(13, 55, 30, 1);"));
        label_13->setTextFormat(Qt::TextFormat::AutoText);
        label_13->setAlignment(Qt::AlignmentFlag::AlignCenter);
        totalPrice = new QLabel(shoppingCartPage);
        totalPrice->setObjectName("totalPrice");
        totalPrice->setGeometry(QRect(350, 255, 160, 31));
        totalPrice->setFont(font4);
        totalPrice->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        totalPrice->setStyleSheet(QString::fromUtf8("color:rgba(13, 55, 30, 1);"));
        totalPrice->setTextFormat(Qt::TextFormat::AutoText);
        totalPrice->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label_18 = new QLabel(shoppingCartPage);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(520, 260, 30, 31));
        label_18->setFont(font4);
        label_18->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_18->setStyleSheet(QString::fromUtf8("color:rgba(13, 55, 30, 1);"));
        label_18->setTextFormat(Qt::TextFormat::AutoText);
        label_18->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        orderButton = new QPushButton(shoppingCartPage);
        orderButton->setObjectName("orderButton");
        orderButton->setGeometry(QRect(390, 370, 110, 60));
        orderButton->setStyleSheet(QString::fromUtf8("QPushButton#orderButton {\n"
"    background-color: rgba(40, 60, 45, 255);   \n"
"    color: #F0F8F2;                              \n"
"    border-bottom-left-radius: 20px;\n"
"	border-top-left-radius: 20px;\n"
"    border-bottom-right-radius: 20px;\n"
"    border-top-right-radius: 20px;\n"
"    padding: 6px 20px;\n"
"}\n"
"\n"
"QPushButton#orderButton:hover {\n"
"    background-color: rgba(55, 80, 60, 255);   \n"
"}\n"
"\n"
"QPushButton#orderButton:pressed {\n"
"    background-color: rgba(30, 40, 30, 255);    \n"
"    padding-left: 8px;\n"
"    padding-top: 8px;\n"
"}\n"
""));
        shoppingCartButton_2 = new QPushButton(shoppingCartPage);
        shoppingCartButton_2->setObjectName("shoppingCartButton_2");
        shoppingCartButton_2->setGeometry(QRect(0, 450, 186, 60));
        shoppingCartButton_2->setStyleSheet(QString::fromUtf8("QPushButton#shoppingCartButton_2 {\n"
"    background-color: rgba(40, 60, 45, 255);   \n"
"    color: #F0F8F2;                              \n"
"    border-bottom-left-radius: 50px;\n"
"    padding: 6px 20px;\n"
"}\n"
"\n"
"QPushButton#shoppingCartButton_2:hover {\n"
"    background-color: rgba(55, 80, 60, 255);   \n"
"}\n"
"\n"
"QPushButton#shoppingCartButton_2:pressed {\n"
"    background-color: rgba(30, 40, 30, 255);    \n"
"    padding-left: 8px;\n"
"    padding-top: 8px;\n"
"}\n"
""));
        homeButton_2 = new QPushButton(shoppingCartPage);
        homeButton_2->setObjectName("homeButton_2");
        homeButton_2->setGeometry(QRect(186, 450, 186, 60));
        homeButton_2->setStyleSheet(QString::fromUtf8("QPushButton#homeButton_2 {\n"
"    background-color: rgba(40, 60, 45, 255);   \n"
"    color: #F0F8F2;                \n"
"    border-bottom-left-radius: 0px;              \n"
"    padding: 6px 20px;\n"
"}\n"
"\n"
"QPushButton#homeButton_2:hover {\n"
"    background-color: rgba(55, 80, 60, 255);   \n"
"}\n"
"\n"
"QPushButton#homeButton_2:pressed {\n"
"    background-color: rgba(30, 40, 30, 255);    \n"
"    padding-left: 8px;\n"
"    padding-top: 8px;\n"
"}\n"
""));
        HistoryButton_2 = new QPushButton(shoppingCartPage);
        HistoryButton_2->setObjectName("HistoryButton_2");
        HistoryButton_2->setGeometry(QRect(372, 450, 188, 60));
        HistoryButton_2->setStyleSheet(QString::fromUtf8("QPushButton#HistoryButton_2 {\n"
"    background-color: rgba(40, 60, 45, 255);   \n"
"    color: #F0F8F2;                \n"
"    border-bottom-right-radius: 50px;              \n"
"    padding: 6px 20px;\n"
"}\n"
"\n"
"QPushButton#HistoryButton_2:hover {\n"
"    background-color: rgba(55, 80, 60, 255);   \n"
"}\n"
"\n"
"QPushButton#HistoryButton_2:pressed {\n"
"    background-color: rgba(30, 40, 30, 255);    \n"
"    padding-left: 8px;\n"
"    padding-top: 8px;\n"
"}\n"
""));
        orderTrackingButton_2 = new QPushButton(shoppingCartPage);
        orderTrackingButton_2->setObjectName("orderTrackingButton_2");
        orderTrackingButton_2->setGeometry(QRect(280, 510, 140, 60));
        orderTrackingButton_2->setStyleSheet(QString::fromUtf8("QPushButton#orderTrackingButton_2 {\n"
"    background-color: rgba(40, 60, 45, 255);   \n"
"    color: #F0F8F2;                \n"
"    border-bottom-left-radius: 0px;              \n"
"    padding: 6px 20px;\n"
"}\n"
"\n"
"QPushButton#orderTrackingButton_2:hover {\n"
"    background-color: rgba(55, 80, 60, 255);   \n"
"}\n"
"\n"
"QPushButton#orderTrackingButton_2:pressed {\n"
"    background-color: rgba(30, 40, 30, 255);    \n"
"    padding-left: 8px;\n"
"    padding-top: 8px;\n"
"}\n"
""));
        stackedWidget->addWidget(shoppingCartPage);
        HistoryPage = new QWidget();
        HistoryPage->setObjectName("HistoryPage");
        historyFrame = new QFrame(HistoryPage);
        historyFrame->setObjectName("historyFrame");
        historyFrame->setGeometry(QRect(210, 70, 360, 390));
        historyFrame->setFrameShape(QFrame::Shape::StyledPanel);
        historyFrame->setFrameShadow(QFrame::Shadow::Raised);
        label_9 = new QLabel(HistoryPage);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(0, 0, 560, 80));
        label_9->setFont(font);
        label_9->setStyleSheet(QString::fromUtf8("background-color:rgba(220, 213, 200, 1);\n"
"border-top-right-radius: 50px;\n"
"border-top-left-radius: 50px;"));
        label_12 = new QLabel(HistoryPage);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(150, 0, 261, 70));
        label_12->setFont(font1);
        label_12->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_12->setStyleSheet(QString::fromUtf8("color:rgba(13, 55, 30, 1);"));
        label_12->setTextFormat(Qt::TextFormat::AutoText);
        label_12->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_2 = new QLabel(HistoryPage);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 80, 230, 371));
        label_2->setStyleSheet(QString::fromUtf8("background-image: url(:/images/finalback.jpg);"));
        deleteHistoryButton = new QPushButton(HistoryPage);
        deleteHistoryButton->setObjectName("deleteHistoryButton");
        deleteHistoryButton->setGeometry(QRect(40, 360, 141, 60));
        deleteHistoryButton->setStyleSheet(QString::fromUtf8("QPushButton#deleteHistoryButton {\n"
"    background-color: rgba(40, 60, 45, 255);   \n"
"    color: #F0F8F2;                              \n"
"    border-bottom-left-radius: 20px;\n"
"	border-top-left-radius: 20px;\n"
"    border-bottom-right-radius: 20px;\n"
"    border-top-right-radius: 20px;\n"
"    padding: 6px 20px;\n"
"}\n"
"\n"
"QPushButton#deleteHistoryButton:hover {\n"
"    background-color: rgba(55, 80, 60, 255);   \n"
"}\n"
"\n"
"QPushButton#deleteHistoryButton:pressed {\n"
"    background-color: rgba(30, 40, 30, 255);    \n"
"    padding-left: 8px;\n"
"    padding-top: 8px;\n"
"}\n"
""));
        shoppingCartButton_3 = new QPushButton(HistoryPage);
        shoppingCartButton_3->setObjectName("shoppingCartButton_3");
        shoppingCartButton_3->setGeometry(QRect(0, 450, 186, 60));
        shoppingCartButton_3->setStyleSheet(QString::fromUtf8("QPushButton#shoppingCartButton_3 {\n"
"    background-color: rgba(40, 60, 45, 255);   \n"
"    color: #F0F8F2;                              \n"
"    border-bottom-left-radius: 50px;\n"
"    padding: 6px 20px;\n"
"}\n"
"\n"
"QPushButton#shoppingCartButton_3:hover {\n"
"    background-color: rgba(55, 80, 60, 255);   \n"
"}\n"
"\n"
"QPushButton#shoppingCartButton_3:pressed {\n"
"    background-color: rgba(30, 40, 30, 255);    \n"
"    padding-left: 8px;\n"
"    padding-top: 8px;\n"
"}\n"
""));
        homeButton_3 = new QPushButton(HistoryPage);
        homeButton_3->setObjectName("homeButton_3");
        homeButton_3->setGeometry(QRect(186, 450, 186, 60));
        homeButton_3->setStyleSheet(QString::fromUtf8("QPushButton#homeButton_3 {\n"
"    background-color: rgba(40, 60, 45, 255);   \n"
"    color: #F0F8F2;                \n"
"    border-bottom-left-radius: 0px;              \n"
"    padding: 6px 20px;\n"
"}\n"
"\n"
"QPushButton#homeButton_3:hover {\n"
"    background-color: rgba(55, 80, 60, 255);   \n"
"}\n"
"\n"
"QPushButton#homeButton_3:pressed {\n"
"    background-color: rgba(30, 40, 30, 255);    \n"
"    padding-left: 8px;\n"
"    padding-top: 8px;\n"
"}\n"
""));
        HistoryButton_3 = new QPushButton(HistoryPage);
        HistoryButton_3->setObjectName("HistoryButton_3");
        HistoryButton_3->setGeometry(QRect(372, 450, 188, 60));
        HistoryButton_3->setStyleSheet(QString::fromUtf8("QPushButton#HistoryButton_3 {\n"
"    background-color: rgba(40, 60, 45, 255);   \n"
"    color: #F0F8F2;                \n"
"    border-bottom-right-radius: 50px;              \n"
"    padding: 6px 20px;\n"
"}\n"
"\n"
"QPushButton#HistoryButton_3:hover {\n"
"    background-color: rgba(55, 80, 60, 255);   \n"
"}\n"
"\n"
"QPushButton#HistoryButton_3:pressed {\n"
"    background-color: rgba(30, 40, 30, 255);    \n"
"    padding-left: 8px;\n"
"    padding-top: 8px;\n"
"}\n"
""));
        orderTrackingButton_3 = new QPushButton(HistoryPage);
        orderTrackingButton_3->setObjectName("orderTrackingButton_3");
        orderTrackingButton_3->setGeometry(QRect(280, 510, 140, 60));
        orderTrackingButton_3->setStyleSheet(QString::fromUtf8("QPushButton#orderTrackingButton_3 {\n"
"    background-color: rgba(40, 60, 45, 255);   \n"
"    color: #F0F8F2;                \n"
"    border-bottom-left-radius: 0px;              \n"
"    padding: 6px 20px;\n"
"}\n"
"\n"
"QPushButton#orderTrackingButton_3:hover {\n"
"    background-color: rgba(55, 80, 60, 255);   \n"
"}\n"
"\n"
"QPushButton#orderTrackingButton_3:pressed {\n"
"    background-color: rgba(30, 40, 30, 255);    \n"
"    padding-left: 8px;\n"
"    padding-top: 8px;\n"
"}\n"
""));
        stackedWidget->addWidget(HistoryPage);

        retranslateUi(CustomerMenu);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CustomerMenu);
    } // setupUi

    void retranslateUi(QWidget *CustomerMenu)
    {
        CustomerMenu->setWindowTitle(QCoreApplication::translate("CustomerMenu", "Form", nullptr));
        HistoryButton->setText(QCoreApplication::translate("CustomerMenu", "History", nullptr));
        homeButton->setText(QCoreApplication::translate("CustomerMenu", "Home", nullptr));
        shoppingCartButton->setText(QCoreApplication::translate("CustomerMenu", "Shopping Cart", nullptr));
        label_3->setText(QString());
        label_5->setText(QCoreApplication::translate("CustomerMenu", "IUT FOOD", nullptr));
        locationComboBox->setCurrentText(QString());
        locationComboBox->setPlaceholderText(QCoreApplication::translate("CustomerMenu", "location", nullptr));
        priceComboBox->setCurrentText(QString());
        priceComboBox->setPlaceholderText(QCoreApplication::translate("CustomerMenu", "price", nullptr));
        typeComboBox->setCurrentText(QString());
        typeComboBox->setPlaceholderText(QCoreApplication::translate("CustomerMenu", "type", nullptr));
        label_6->setText(QCoreApplication::translate("CustomerMenu", "filters", nullptr));
        resetFiltersButton->setText(QCoreApplication::translate("CustomerMenu", "reset filters", nullptr));
        orderTrackingButton->setText(QCoreApplication::translate("CustomerMenu", "Order tracking", nullptr));
        label_14->setText(QString());
        label_15->setText(QCoreApplication::translate("CustomerMenu", "Shopping Cart", nullptr));
        label_16->setText(QString());
        label_4->setText(QString());
        label_17->setText(QCoreApplication::translate("CustomerMenu", "Number of orders :", nullptr));
        numberOfOrders->setText(QCoreApplication::translate("CustomerMenu", "number", nullptr));
        label_13->setText(QCoreApplication::translate("CustomerMenu", "Total price of orders :", nullptr));
        totalPrice->setText(QCoreApplication::translate("CustomerMenu", "price", nullptr));
        label_18->setText(QCoreApplication::translate("CustomerMenu", "$", nullptr));
        orderButton->setText(QCoreApplication::translate("CustomerMenu", "order", nullptr));
        shoppingCartButton_2->setText(QCoreApplication::translate("CustomerMenu", "Shopping Cart", nullptr));
        homeButton_2->setText(QCoreApplication::translate("CustomerMenu", "Home", nullptr));
        HistoryButton_2->setText(QCoreApplication::translate("CustomerMenu", "History", nullptr));
        orderTrackingButton_2->setText(QCoreApplication::translate("CustomerMenu", "Order tracking", nullptr));
        label_9->setText(QString());
        label_12->setText(QCoreApplication::translate("CustomerMenu", "History", nullptr));
        label_2->setText(QString());
        deleteHistoryButton->setText(QCoreApplication::translate("CustomerMenu", "delete history", nullptr));
        shoppingCartButton_3->setText(QCoreApplication::translate("CustomerMenu", "Shopping Cart", nullptr));
        homeButton_3->setText(QCoreApplication::translate("CustomerMenu", "Home", nullptr));
        HistoryButton_3->setText(QCoreApplication::translate("CustomerMenu", "History", nullptr));
        orderTrackingButton_3->setText(QCoreApplication::translate("CustomerMenu", "Order tracking", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CustomerMenu: public Ui_CustomerMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERMENU_H
