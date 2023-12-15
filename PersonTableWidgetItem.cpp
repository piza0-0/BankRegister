#include "PersonTableWidgetItem.h"
#include <QDebug>

PersonTableWidgetItem::PersonTableWidgetItem(Person* newPerson)
{
    m_pPerson = newPerson;
}


PersonTableWidgetItem::~PersonTableWidgetItem() {
    qDebug()<<"Деструктор PERSON-TABLE";
}


void PersonTableWidgetItem::setCurrentSurname()
{
    this->setText(m_pPerson->getSurname());
}


const QStringList &PersonTableWidgetItem::getPersonBanks() const
{
    return m_pPerson->personBanks();
}

Person *PersonTableWidgetItem::pPerson() const
{
    return m_pPerson;
}

