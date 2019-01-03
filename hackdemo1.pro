#-------------------------------------------------
#
# Project created by QtCreator 2018-12-20T16:41:19
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = hackdemo1
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        widget.cpp \
    message_qemu.cpp \
    login.cpp \
    title_bar.cpp \
    dlgwait.cpp \
    dlgwait_1.cpp \
    fitwindow.cpp \
    customtabstyle.cpp \
    test.cpp \
    loading.cpp

HEADERS += \
        widget.h \
    message_qemu.h \
    login.h \
    title_bar.h \
    dlgwait.h \
    dlgwait_1.h \
    fitwindow.h \
    customtabstyle.h \
    test.h \
    loading.h

FORMS += \
        widget.ui \
    message_qemu.ui \
    login.ui \
    title_bar.ui \
    dlgwait.ui \
    dlgwait_1.ui \
    test.ui \
    loading.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    picture.qrc
