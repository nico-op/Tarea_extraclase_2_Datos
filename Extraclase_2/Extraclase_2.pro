include(gtest_dependency.pri)

TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG += thread
CONFIG -= qt

SOURCES += \
        main.cpp         tst_pruebas_server.cpp \
        p1_server.cpp \
        tarjetas.cpp

HEADERS += \
    p1_server.h \
    tarjetas.h
