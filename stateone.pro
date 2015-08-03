TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG +=c++11

LIBS += -lsfml-system -lsfml-graphics -lsfml-window

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    game.hpp \
    gamestate.hpp \
    mainmenu.hpp \
    maingame.hpp

SOURCES += \
    game.cpp \
    main.cpp \
    mainmenu.cpp \
    maingame.cpp

