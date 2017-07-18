TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    board.cpp \
    figure.cpp \
    pawn.cpp \
    rook.cpp \
    horse.cpp \
    elephant.cpp \
    queen.cpp \
    king.cpp

HEADERS += \
    board.h \
    figure.h \
    pawn.h \
    rook.h \
    horse.h \
    elephant.h \
    queen.h \
    king.h \
    step.h
