TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Employee.cpp \
    Office.cpp

HEADERS += \
    printable.h \
    Employee.h \
    Office.h
