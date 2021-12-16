#-------------------------------------------------
#
# Project created by QtCreator 2021-11-17T13:15:33
#
#-------------------------------------------------
#define _GLIBCXX_USE_CXX11_ABI 0

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = graphics
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


SOURCES += \
    main.cpp \
    menuform.cpp \
    player.cpp \
    regform.cpp \
    loginform.cpp \
    playerpresenter.cpp \
    wordsform.cpp

HEADERS += \
    iwiringview.h \
    menuform.h \
    player.h \
    regform.h \
    loginform.h \
    playerpresenter.h \
    wordsform.h

FORMS += \
    menu.ui \
    regform.ui \
    loginform.ui \
    wordsform.ui

LIBS += \
    -lboost_system

CONFIG += c++14
