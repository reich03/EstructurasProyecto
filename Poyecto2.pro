QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    favs.cpp \
    index_admin.cpp \
    index_nuser.cpp \
    login.cpp \
    login_admin.cpp \
    main.cpp \
    mainwindow.cpp \
    me_admin.cpp \
    me_nuser.cpp \
    signup.cpp \
    view_users.cpp

HEADERS += \
    favs.h \
    index_admin.h \
    index_nuser.h \
    login.h \
    login_admin.h \
    mainwindow.h \
    me_admin.h \
    me_nuser.h \
    signup.h \
    view_users.h

FORMS += \
    favs.ui \
    index_admin.ui \
    index_nuser.ui \
    login.ui \
    login_admin.ui \
    mainwindow.ui \
    me_admin.ui \
    me_nuser.ui \
    signup.ui \
    view_users.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
