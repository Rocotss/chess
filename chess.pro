TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \

HEADERS += \

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/build-libChess-Desktop_Qt_5_9_0_MinGW_32bit-Release/release/ -llibChess
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/build-libChess-Desktop_Qt_5_9_0_MinGW_32bit-Debug/debug/ -llibChess

INCLUDEPATH += $$PWD/libChess
DEPENDPATH += $$PWD/libChess
