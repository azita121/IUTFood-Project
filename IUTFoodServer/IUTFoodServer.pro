QT += core network sql
QT -= gui

CONFIG += c++17 console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += \
    main.cpp \
    server.cpp \
    databasemanager.cpp \
    authsystem.cpp \
    invoker.cpp \
    command.cpp \
    ordercommand.cpp

HEADERS += \
    server.h \
    databasemanager.h \
    authsystem.h \
    invoker.h \
    command.h \
    ordercommand.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target 