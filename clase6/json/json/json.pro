TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    jsonelement.cpp \
    jsonsimpleelement.cpp \
    jsonarray.cpp \
    jsontuple.cpp \
    jsonobject.cpp \
    jsonset.cpp

HEADERS += \
    jsonelement.h \
    jsonsimpleelement.h \
    jsonarray.h \
    jsontuple.h \
    jsonobject.h \
    jsonset.h

