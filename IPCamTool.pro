#-------------------------------------------------
#
# Project created by QtCreator 2013-05-08T19:04:28
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = IPCamTool
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    ipcamtable.cpp \
    ipcamsetting.cpp

HEADERS  += mainwindow.h \
    ipcamtable.h \
    ipcamsetting.h

FORMS    += mainwindow.ui \
    ipcamtable.ui \
    ipcamsetting.ui
