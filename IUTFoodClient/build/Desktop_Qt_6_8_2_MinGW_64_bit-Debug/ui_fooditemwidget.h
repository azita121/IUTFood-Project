/********************************************************************************
** Form generated from reading UI file 'fooditemwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOODITEMWIDGET_H
#define UI_FOODITEMWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FoodItemWidget
{
public:
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_foodname;
    QLabel *label_fooddetails;
    QLabel *label_foodprice;
    QLabel *label_8;
    QToolButton *addFoodButton;
    QToolButton *removeFoodButton;

    void setupUi(QWidget *FoodItemWidget)
    {
        if (FoodItemWidget->objectName().isEmpty())
            FoodItemWidget->setObjectName("FoodItemWidget");
        FoodItemWidget->resize(321, 100);
        FoodItemWidget->setMinimumSize(QSize(0, 100));
        FoodItemWidget->setMaximumSize(QSize(16777215, 100));
        label_3 = new QLabel(FoodItemWidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(0, 0, 320, 100));
        QFont font;
        font.setPointSize(20);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("background-color:rgba(220, 213, 200, 1);\n"
"border-bottom-right-radius: 50px;\n"
"border-bottom-left-radius: 50px;\n"
"border-top-left-radius: 50px;\n"
"border-top-right-radius: 50px;"));
        label_2 = new QLabel(FoodItemWidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 0, 320, 100));
        label_2->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 80);\n"
"border-bottom-right-radius: 50px;\n"
"border-bottom-left-radius: 50px;\n"
"border-top-left-radius: 50px;\n"
"border-top-right-radius: 50px;"));
        label_foodname = new QLabel(FoodItemWidget);
        label_foodname->setObjectName("label_foodname");
        label_foodname->setGeometry(QRect(20, 0, 140, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Freestyle Script")});
        font1.setPointSize(25);
        font1.setBold(true);
        font1.setItalic(false);
        label_foodname->setFont(font1);
        label_foodname->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_foodname->setStyleSheet(QString::fromUtf8("color:rgba(80, 110, 85, 1);"));
        label_foodname->setTextFormat(Qt::TextFormat::AutoText);
        label_foodname->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label_fooddetails = new QLabel(FoodItemWidget);
        label_fooddetails->setObjectName("label_fooddetails");
        label_fooddetails->setGeometry(QRect(20, 60, 281, 40));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Freestyle Script")});
        font2.setPointSize(18);
        font2.setBold(false);
        font2.setItalic(false);
        label_fooddetails->setFont(font2);
        label_fooddetails->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_fooddetails->setStyleSheet(QString::fromUtf8("color:rgba(80, 110, 85, 1);"));
        label_fooddetails->setTextFormat(Qt::TextFormat::AutoText);
        label_fooddetails->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        label_foodprice = new QLabel(FoodItemWidget);
        label_foodprice->setObjectName("label_foodprice");
        label_foodprice->setGeometry(QRect(180, 15, 61, 20));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Freestyle Script")});
        font3.setPointSize(20);
        font3.setBold(true);
        font3.setItalic(false);
        label_foodprice->setFont(font3);
        label_foodprice->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_foodprice->setStyleSheet(QString::fromUtf8("color:rgba(100, 110, 85, 1);"));
        label_foodprice->setTextFormat(Qt::TextFormat::AutoText);
        label_foodprice->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        label_8 = new QLabel(FoodItemWidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(250, 15, 16, 20));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Bell MT")});
        font4.setPointSize(15);
        font4.setBold(true);
        font4.setItalic(false);
        label_8->setFont(font4);
        label_8->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_8->setStyleSheet(QString::fromUtf8("color:rgba(100\n"
", 110, 85, 1);"));
        label_8->setTextFormat(Qt::TextFormat::AutoText);
        label_8->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        addFoodButton = new QToolButton(FoodItemWidget);
        addFoodButton->setObjectName("addFoodButton");
        addFoodButton->setGeometry(QRect(270, 10, 25, 27));
        addFoodButton->setStyleSheet(QString::fromUtf8("background-color:rgba(220, 213, 200, 1);"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/plus icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        addFoodButton->setIcon(icon);
        removeFoodButton = new QToolButton(FoodItemWidget);
        removeFoodButton->setObjectName("removeFoodButton");
        removeFoodButton->setGeometry(QRect(270, 40, 25, 27));
        removeFoodButton->setStyleSheet(QString::fromUtf8("background-color:rgba(220, 213, 200, 1);"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/minus icon.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        removeFoodButton->setIcon(icon1);

        retranslateUi(FoodItemWidget);

        QMetaObject::connectSlotsByName(FoodItemWidget);
    } // setupUi

    void retranslateUi(QWidget *FoodItemWidget)
    {
        FoodItemWidget->setWindowTitle(QCoreApplication::translate("FoodItemWidget", "Form", nullptr));
        label_3->setText(QString());
        label_2->setText(QString());
        label_foodname->setText(QCoreApplication::translate("FoodItemWidget", "food name", nullptr));
        label_fooddetails->setText(QCoreApplication::translate("FoodItemWidget", "food details", nullptr));
        label_foodprice->setText(QCoreApplication::translate("FoodItemWidget", "price", nullptr));
        label_8->setText(QCoreApplication::translate("FoodItemWidget", "$", nullptr));
        addFoodButton->setText(QCoreApplication::translate("FoodItemWidget", "...", nullptr));
        removeFoodButton->setText(QCoreApplication::translate("FoodItemWidget", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FoodItemWidget: public Ui_FoodItemWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOODITEMWIDGET_H
