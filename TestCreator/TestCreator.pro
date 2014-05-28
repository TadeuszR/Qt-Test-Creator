#-------------------------------------------------
#
# Project created by QtCreator 2013-05-09T13:32:22
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TestCreator
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    question.cpp \
    test.cpp \
    dialog.cpp

HEADERS  += mainwindow.h \
    question.h \
    test.h \
    dialog.h

FORMS    += mainwindow.ui \
    dialog.ui
