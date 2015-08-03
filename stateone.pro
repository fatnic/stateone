TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG +=c++11

SOURCES += main.cpp \
    game.cpp \
    gamestatestart.cpp

LIBS += -lsfml-system -lsfml-graphics -lsfml-window

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    gamestate.hpp \
    game.hpp \
    gamestatestart.h

