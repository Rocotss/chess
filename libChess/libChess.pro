#-------------------------------------------------
#
# Project created by QtCreator 2017-07-18T21:59:44
#
#-------------------------------------------------

QT       -= core gui

TARGET = libChess
TEMPLATE = lib

DEFINES += LIBCHESS_LIBRARY

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
      board.cpp \
      figure.cpp \
      pawn.cpp \
      rook.cpp \
      horse.cpp \
      elephant.cpp \
      queen.cpp \
      king.cpp \
    play.cpp


HEADERS +=\
        libchess_global.h \
        board.h \
        elephant.h \
        figure.h \
        horse.h \
        king.h \
        pawn.h \
        queen.h \
        rook.h \
        step.h \
    play.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
