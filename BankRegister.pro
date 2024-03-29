QT += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    GUI/AuthorizationDialog.cpp \
    Backend/ConnectionClass.cpp \
    Backend/DbBackend.cpp \
    GUI/DialogPersonEdit.cpp \
    GUI/MainWindow.cpp \
    GUI/Person.cpp \
    GUI/PersonTableWidgetItem.cpp \
    GUI/RegistrationDialog.cpp \
    main.cpp

HEADERS += \
    GUI/AuthorizationDialog.h \
    Backend/ConnectionClass.h \
    Backend/DbBackend.h \
    GUI/DialogPersonEdit.h \
    GUI/MainWindow.h \
    GUI/Person.h \
    GUI/PersonTableWidgetItem.h \
    GUI/RegistrationDialog.h
    

FORMS += \
    GUI/AuthorizationDialog.ui \
    GUI/DialogPersonEdit.ui \
    GUI/MainWindow.ui \
    GUI/RegistrationDialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DESTDIR = ../bin

OBJECTS_DIR = ../bin

MOC_DIR = ../bin

UI_DIR = ../bin

RESOURCES += \
    Recources/img_resource.qrc
