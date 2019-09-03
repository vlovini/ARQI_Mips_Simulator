#-------------------------------------------------
#
# Project created by QtCreator 2018-03-23T09:14:26
#
#-------------------------------------------------

QT       += core gui
QT       += core

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PROJETO_ARQ_II_MODELO2
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
        janela.cpp \
    processador.cpp \
    busca.cpp \
    decode.cpp \
    execu.cpp \
    memoria.cpp \
    wback.cpp

HEADERS += \
        janela.h \
    processador.h \
    busca.h \
    decode.h \
    execu.h \
    memoria.h \
    wback.h

FORMS += \
        janela.ui
