QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    account.cpp \
    accountoperations.cpp \
    adminlogin.cpp \
    client.cpp \
    createclient.cpp \
    editclients.cpp \
    loginorregister.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    account.h \
    accountoperations.h \
    adminlogin.h \
    client.h \
    createclient.h \
    editclients.h \
    loginorregister.h \
    mainwindow.h

FORMS += \
    accountoperations.ui \
    adminlogin.ui \
    createclient.ui \
    editclients.ui \
    loginorregister.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
