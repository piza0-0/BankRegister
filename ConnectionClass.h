#ifndef CONNECTIONCLASS_H
#define CONNECTIONCLASS_H

#include "MainWindow.h"
#include "AuthorizationDialog.h"
#include "RegistrationDialog.h"

#include <QObject>
#include <QApplication>
#include <QFileInfo>

class ConnectionClass : public QObject
{
    Q_OBJECT
public:
    explicit ConnectionClass(QObject *parent = nullptr);
    ~ConnectionClass();
signals:

private slots:
    void openAuthorizationWindow();
    void openMainWindow();

private:
    MainWindow* mainwindow;
    AuthorizationDialog* authorization;
    RegistrationDialog* registration;
};

#endif // CONNECTIONCLASS_H
