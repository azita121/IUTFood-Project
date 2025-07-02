/********************************************************************************
** Form generated from reading UI file 'restaurantitem.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESTAURANTITEM_H
#define UI_RESTAURANTITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_restaurantitem
{
public:
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_restaurantName;
    QLabel *label_restaurantType;
    QLabel *label_restaurantLocation;
    QPushButton *showresButton;

    void setupUi(QWidget *restaurantitem)
    {
        if (restaurantitem->objectName().isEmpty())
            restaurantitem->setObjectName("restaurantitem");
        restaurantitem->resize(560, 100);
        restaurantitem->setMinimumSize(QSize(560, 100));
        restaurantitem->setMaximumSize(QSize(560, 100));
        lineEdit = new QLineEdit(restaurantitem);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(0, 0, 390, 100));
        lineEdit->setStyleSheet(QString::fromUtf8("background-image: url(:/images/minibackgroundmenu.jpg);\n"
"border-top-left-radius:50px;\n"
"border-bottom-left-radius:50px;"));
        label_2 = new QLabel(restaurantitem);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 0, 390, 100));
        label_2->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 80);\n"
"border-top-left-radius:50px;\n"
"border-bottom-left-radius:50px;"));
        label_3 = new QLabel(restaurantitem);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(390, 0, 170, 100));
        QFont font;
        font.setPointSize(20);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("background-color:rgba(220, 213, 200, 1);\n"
"border-bottom-right-radius: 50px;\n"
"border-top-right-radius: 50px;"));
        label_4 = new QLabel(restaurantitem);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(390, 0, 170, 100));
        label_4->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 70);\n"
"border-bottom-right-radius: 50px;\n"
"border-top-right-radius: 50px;"));
        label_restaurantName = new QLabel(restaurantitem);
        label_restaurantName->setObjectName("label_restaurantName");
        label_restaurantName->setGeometry(QRect(0, 0, 330, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Freestyle Script")});
        font1.setPointSize(25);
        font1.setBold(true);
        font1.setItalic(false);
        label_restaurantName->setFont(font1);
        label_restaurantName->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_restaurantName->setStyleSheet(QString::fromUtf8("color:rgba(80, 110, 85, 1);"));
        label_restaurantName->setTextFormat(Qt::TextFormat::AutoText);
        label_restaurantName->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_restaurantType = new QLabel(restaurantitem);
        label_restaurantType->setObjectName("label_restaurantType");
        label_restaurantType->setGeometry(QRect(410, 10, 121, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Rockwell")});
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setItalic(false);
        label_restaurantType->setFont(font2);
        label_restaurantType->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_restaurantType->setStyleSheet(QString::fromUtf8("color:rgba(40, 55, 30, 1);"));
        label_restaurantType->setTextFormat(Qt::TextFormat::AutoText);
        label_restaurantType->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_restaurantLocation = new QLabel(restaurantitem);
        label_restaurantLocation->setObjectName("label_restaurantLocation");
        label_restaurantLocation->setGeometry(QRect(410, 50, 121, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Rockwell")});
        font3.setPointSize(15);
        font3.setBold(false);
        font3.setItalic(false);
        label_restaurantLocation->setFont(font3);
        label_restaurantLocation->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_restaurantLocation->setStyleSheet(QString::fromUtf8("color:rgba(40, 55, 30, 1);"));
        label_restaurantLocation->setTextFormat(Qt::TextFormat::AutoText);
        label_restaurantLocation->setAlignment(Qt::AlignmentFlag::AlignCenter);
        showresButton = new QPushButton(restaurantitem);
        showresButton->setObjectName("showresButton");
        showresButton->setGeometry(QRect(300, 65, 81, 29));
        showresButton->setStyleSheet(QString::fromUtf8("QPushButton#showresButton {\n"
"    background-color: rgba(45, 60, 45, 255);   \n"
"    color: #F0F8F2;                              \n"
"    border-radius: 8px;\n"
"    padding: 6px 20px;\n"
"}\n"
"\n"
"QPushButton#showresButton:hover {\n"
"    background-color: rgba(55, 80, 60, 255);   \n"
"}\n"
"\n"
"QPushButton#showresButton:pressed {\n"
"    background-color: rgba(30, 40, 30, 255);    \n"
"    padding-left: 8px;\n"
"    padding-top: 8px;\n"
"}\n"
""));

        retranslateUi(restaurantitem);

        QMetaObject::connectSlotsByName(restaurantitem);
    } // setupUi

    void retranslateUi(QWidget *restaurantitem)
    {
        restaurantitem->setWindowTitle(QCoreApplication::translate("restaurantitem", "Form", nullptr));
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_restaurantName->setText(QCoreApplication::translate("restaurantitem", "Restaurant Name", nullptr));
        label_restaurantType->setText(QCoreApplication::translate("restaurantitem", "res type", nullptr));
        label_restaurantLocation->setText(QCoreApplication::translate("restaurantitem", "res loc", nullptr));
        showresButton->setText(QCoreApplication::translate("restaurantitem", "show ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class restaurantitem: public Ui_restaurantitem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESTAURANTITEM_H
