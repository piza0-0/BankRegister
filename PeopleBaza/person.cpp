#include "person.h"



Person::Person(QString pName, QString pAge, QString pGrade,QObject *parent)
    : QObject(parent)
{
    this->name = pName;    
    this->age = pAge;
    this->grade = pGrade;
}

const QString Person::GetName()
{    
    return name;
}
