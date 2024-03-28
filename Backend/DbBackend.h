#ifndef DBBACKEND_H
#define DBBACKEND_H

#include <QObject>
#include <QSettings>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>


class DbBackend : public QObject
{
    Q_OBJECT
    friend class MainWindow;
public:
    explicit DbBackend(QObject *parent = nullptr);

signals:

protected:
    void connectionToDB();
private:
    QString m_hostName;
    int m_port;
    QString m_dbName;
    QString m_userName;
    QString m_password;
    QSqlDatabase m_db;
};

#endif // DBBACKEND_H
