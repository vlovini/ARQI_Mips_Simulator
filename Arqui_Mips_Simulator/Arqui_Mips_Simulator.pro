#-------------------------------------------------
#
# Project created by QtCreator 2019-09-03T20:59:43
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Arqui_Mips_Simulator
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
        instrucao.cpp \
        main.cpp \
        mainwindow.cpp \
    busca.cpp \
    barreirabuscadecodifica.cpp \
    decodifica.cpp \
    barreiradecoexec.cpp \
    execucao.cpp \
    barreiraexecmem.cpp \
    memoriadados.cpp \
    barreiramemwb.cpp \
    mecanismopredicao.cpp \
    predicaofixa.cpp \
    predicaotabela.cpp \
    estatisticas.cpp

HEADERS += \
        instrucao.h \
        mainwindow.h \
    busca.h \
    barreirabuscadecodifica.h \
    decodifica.h \
    barreiradecoexec.h \
    execucao.h \
    barreiraexecmem.h \
    memoriadados.h \
    barreiramemwb.h \
    mecanismopredicao.h \
    predicaofixa.h \
    predicaotabela.h \
    estatisticas.h

FORMS += \
        mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
