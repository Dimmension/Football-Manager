QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    barselona.cpp \
    choseteam1.cpp \
    choseteam2.cpp \
    cska.cpp \
    liverpool.cpp \
    main.cpp \
    mainwindow.cpp \
    manchester.cpp \
    spartak.cpp \
    zenit.cpp

HEADERS += \
    barselona.h \
    choseteam1.h \
    choseteam2.h \
    cska.h \
    liverpool.h \
    mainwindow.h \
    manchester.h \
    spartak.h \
    zenit.h

FORMS += \
    barselona.ui \
    choseteam1.ui \
    choseteam2.ui \
    cska.ui \
    liverpool.ui \
    mainwindow.ui \
    manchester.ui \
    spartak.ui \
    zenit.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
