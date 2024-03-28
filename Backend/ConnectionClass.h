#ifndef CONNECTIONCLASS_H
#define CONNECTIONCLASS_H

#include "GUI/MainWindow.h"
#include "GUI/AuthorizationDialog.h"
#include "GUI/RegistrationDialog.h"

#include <QObject>
#include <QApplication>
#include <QFileInfo>

//Класс создан с целью упорядочивания вызова окон: регистрации, авторизации, основного окна


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
