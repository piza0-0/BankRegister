#include "person.h"
#include <QDebug>


Person::Person(QString surname, QString name, QString patronymic, QString age, QString phone,QList <QListWidgetItem*> personBanks,QObject *parent)
    : QObject(parent)
{
    this->m_name = name;
    this->m_surname = surname;
    this->m_patronymic = patronymic;
    this->m_age = age;
    this->m_phone = phone;
    this->m_personBanks = personBanks;
}

Person::~Person()
{
    qDebug()<<"Деструктор PERSON";

}

const QString &Person::getName() const
{    
    return m_name;
}
const QString &Person::getSurname() const
{
    return m_surname;
}

const QString &Person::getPatronymic() const
{
    return m_patronymic;
}


const QString &Person::getAge() const
{
    return m_age;
}

const QString &Person::getPhone() const
{
    return m_phone;
}

const QList<QListWidgetItem *> &Person::personBanks() const
{
    return m_personBanks;
}

