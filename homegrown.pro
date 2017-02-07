#-------------------------------------------------
#
# Project created by QtCreator 2017-01-15T22:55:54
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = homegrown
TEMPLATE = app
INSTALLS        = target
target.files    = homegrown
target.path     = /home/pi

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

INCLUDEPATH += $$[QT_SYSROOT]/usr/local/include
LIBS += -L$$[QT_SYSROOT]/usr/local/lib -lwiringPi

SOURCES += main.cpp\
        mainwindow.cpp \
    humiditydisplay.cpp \
    rgb_led.cpp \
    dht11_sensor.cpp \
    pins.cpp

HEADERS  += mainwindow.h \
    humiditydisplay.h \
    rgb_led.h \
    dht11_sensor.h \
    pins.h

FORMS    += mainwindow.ui \
    humiditydisplay.ui

RESOURCES += \
    media_resource.qrc

DISTFILES +=
