QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    adminnenu.cpp \
    changeofstatus.cpp \
    customermenu.cpp \
    fooditemwidget.cpp \
    main.cpp \
    loginwindow.cpp \
    restaurantitem.cpp \
    restaurantmenu.cpp \
    restaurantownermenu.cpp

HEADERS += \
    adminnenu.h \
    changeofstatus.h \
    customermenu.h \
    fooditemwidget.h \
    loginwindow.h \
    restaurant.h \
    restaurantitem.h \
    restaurantmenu.h \
    restaurantownermenu.h

FORMS += \
    adminnenu.ui \
    changeofstatus.ui \
    customermenu.ui \
    fooditemwidget.ui \
    loginwindow.ui \
    restaurantitem.ui \
    restaurantmenu.ui \
    restaurantownermenu.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc
