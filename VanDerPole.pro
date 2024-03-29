QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    form.cpp \
    system.cpp

HEADERS += \
    form.h \
    system.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

win32:CONFIG(release, debug|release): LIBS += -LC:/Qwt-6.2.0/lib/ -lqwt
else:win32:CONFIG(debug, debug|release): LIBS += -LC:/Qwt-6.2.0/lib/ -lqwtd
else:unix: LIBS += -L$$PWD/../../../../Qwt-6.2.0/lib/ -lqwt

INCLUDEPATH += C:/Qwt-6.2.0/include
DEPENDPATH += C:/Qwt-6.2.0/include
