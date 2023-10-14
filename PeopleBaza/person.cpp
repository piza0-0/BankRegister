#include "person.h"
#include <QDebug>


Person::Person(QString Name, QString Age, QString Grade,QObject *parent)
    : QObject(parent)
{
    this->m_name = Name;
    this->m_age = Age;
    this->m_grade = Grade;
}

Person::~Person()
{
    qDebug()<<"Деструктор PERSON";

}

const QString Person::getName() const
{    
    return m_name;
}

const QString Person::getAge() const
{
    return m_age;
}

const QString Person::getGrade() const
{
    return m_grade;
}
