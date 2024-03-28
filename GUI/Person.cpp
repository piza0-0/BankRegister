#include "Person.h"
#include <QDebug>


Person::Person(QString surname, QString name, QString patronymic, QString passport, QString phone,QList <QListWidgetItem*> personBanks,QObject *parent)
    : QObject(parent)
{
    this->m_name = name;
    this->m_surname = surname;
    this->m_patronymic = patronymic;
    this->m_passport = passport;
    this->m_phone = phone;
    overwriteBankList(personBanks);
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


const QString &Person::getPassport() const
{
    return m_passport;
}

const QString &Person::getPhone() const
{
    return m_phone;
}

const QStringList &Person::personBanks() const
{
    return m_personBanks;
}

void Person::setName (const QString &newName)
{
    m_name = newName;
}

void Person::setSurname (const QString &newSurname)
{
    m_surname = newSurname;
}

void Person::setPatronymic(const QString &newPatronymic)
{
    m_patronymic = newPatronymic;
}

void Person::setPassport(const QString &newPassport)
{
    m_passport = newPassport;
}

void Person::setPhone(const QString &newPhone)
{
    m_phone = newPhone;
}

//Функция перезаписывает список банков в экземпляре класса в случае его изменения в окне редактирования
void Person::overwriteBankList(const QList <QListWidgetItem*> personBanks)
{
    if(!m_personBanks.isEmpty()){
        m_personBanks.clear();
    }
    for(int i = 0; i < personBanks.size(); ++i) {
        m_personBanks.append(personBanks.at(i)->data(Qt::DisplayRole).toString());
    }
}

