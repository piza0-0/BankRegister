#include "ConnectionClass.h"

ConnectionClass::ConnectionClass(QObject *parent)
    : QObject{parent}
{
    mainwindow = new MainWindow;
    authorization = new AuthorizationDialog;
    registration = new RegistrationDialog;
    connect(registration, &RegistrationDialog::registrationComplete, this, &ConnectionClass::openAuthorizationWindow);
    connect(authorization, &AuthorizationDialog::authorizationComplete, this, &ConnectionClass::openMainWindow);

    QString filePath = QApplication::applicationDirPath() + "/config.ini";
    QFileInfo configInfo(filePath);
    if (configInfo.exists()){
        authorization->show();
    }else{
        registration->show();
    }

}

ConnectionClass::~ConnectionClass(){
    delete registration;
    delete authorization;
    delete mainwindow;
}


void ConnectionClass::openAuthorizationWindow()
{
    registration->close();
    authorization->show();

}

void ConnectionClass::openMainWindow()
{
    authorization->close();
    mainwindow->show();

}
