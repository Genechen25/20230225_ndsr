#-------------------------------------------------
#
# Project created by QtCreator 2017-05-24T18:38:15
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET      = uidemo25
TEMPLATE    = app
MOC_DIR     = temp/moc
RCC_DIR     = temp/rcc
UI_DIR      = temp/ui
OBJECTS_DIR = temp/obj
DESTDIR     = $$PWD/../bin

CONFIG      += warn_off
HEADERS     += head.h \
    frmbatterydata.h
SOURCES     += main.cpp \
    frmbatterydata.cpp
RESOURCES   += other/main.qrc
RESOURCES   += other/qss.qrc

INCLUDEPATH += $$PWD
INCLUDEPATH += $$PWD/api
INCLUDEPATH += $$PWD/form
INCLUDEPATH += $$PWD/batteryicon
include ($$PWD/api/api.pri)
include ($$PWD/form/form.pri)
include ($$PWD/batteryicon/batteryicon.pri)

FORMS += \
    frmbatterydata.ui
