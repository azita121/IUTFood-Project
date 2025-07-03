/********************************************************************************
** Form generated from reading UI file 'restaurantmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESTAURANTMENU_H
#define UI_RESTAURANTMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RestaurantMenu
{
public:
    QTextEdit *textEdit;
    QLabel *label_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *RestaurantName;

    void setupUi(QWidget *RestaurantMenu)
    {
        if (RestaurantMenu->objectName().isEmpty())
            RestaurantMenu->setObjectName("RestaurantMenu");
        RestaurantMenu->resize(560, 510);
        textEdit = new QTextEdit(RestaurantMenu);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(0, 0, 261, 511));
        textEdit->setStyleSheet(QString::fromUtf8(""));
        label_2 = new QLabel(RestaurantMenu);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 0, 241, 511));
        label_2->setStyleSheet(QString::fromUtf8("background-color:rgba(0, 0, 0, 80);\n"
""));
        scrollArea = new QScrollArea(RestaurantMenu);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(240, 0, 321, 510));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy);
        scrollArea->setStyleSheet(QString::fromUtf8("QScrollArea, QScrollArea > QWidget > QWidget {\n"
"    background-color: rgba(220, 213, 200, 1);\n"
"}\n"
"QScrollBar:vertical, QScrollBar:horizontal {\n"
"    width: 0px;\n"
"    height: 0px;\n"
"}"));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAsNeeded);
        scrollArea->setWidgetResizable(true);
        scrollArea->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 319, 1000));
        sizePolicy.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy);
        scrollAreaWidgetContents->setMinimumSize(QSize(0, 1000));
        QFont font;
        font.setBold(false);
        scrollAreaWidgetContents->setFont(font);
        verticalLayoutWidget = new QWidget(scrollAreaWidgetContents);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 0, 320, 1160));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SizeConstraint::SetNoConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea->setWidget(scrollAreaWidgetContents);
        RestaurantName = new QLabel(RestaurantMenu);
        RestaurantName->setObjectName("RestaurantName");
        RestaurantName->setGeometry(QRect(30, 90, 180, 51));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Freestyle Script")});
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setItalic(false);
        RestaurantName->setFont(font1);
        RestaurantName->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        RestaurantName->setStyleSheet(QString::fromUtf8("color:rgba(220, 213, 200, 1);"));
        RestaurantName->setTextFormat(Qt::TextFormat::AutoText);
        RestaurantName->setAlignment(Qt::AlignmentFlag::AlignCenter);

        retranslateUi(RestaurantMenu);

        QMetaObject::connectSlotsByName(RestaurantMenu);
    } // setupUi

    void retranslateUi(QWidget *RestaurantMenu)
    {
        RestaurantMenu->setWindowTitle(QCoreApplication::translate("RestaurantMenu", "Form", nullptr));
        label_2->setText(QString());
        RestaurantName->setText(QCoreApplication::translate("RestaurantMenu", "Restaurant Name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RestaurantMenu: public Ui_RestaurantMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESTAURANTMENU_H
