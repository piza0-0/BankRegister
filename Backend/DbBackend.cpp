#include "DbBackend.h"

DbBackend::DbBackend(QObject *parent)
    : QObject{parent}
{
    QString filePath = ":/dbConf/DbConfig.ini";
    QSettings configFile(filePath, QSettings::IniFormat);
    configFile.beginGroup("DbConfig");
    m_hostName = configFile.value("HostName","").toString();
    m_port = configFile.value("Port","").toInt();
    m_dbName = configFile.value("DbName","").toString();
    m_userName = configFile.value("UserName","").toString();
    m_password = configFile.value("Password","").toString();
    configFile.endGroup();
}

void DbBackend::connectionToDB()
{
    m_db = QSqlDatabase::addDatabase("QPSQL");
    m_db.setHostName(m_hostName);
    m_db.setPort(m_port);
    m_db.setDatabaseName(m_dbName);
    m_db.setUserName(m_userName);
    m_db.setPassword(m_password);
    if(m_db.open()){
        qDebug() << "Соединение создано" << '\n';
    }else{
        qDebug() << "Произошла ошибка соединения" << '\n';
        qDebug() << m_db.lastError().text();
    }
}
