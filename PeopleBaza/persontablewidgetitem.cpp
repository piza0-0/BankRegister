#include "persontablewidgetitem.h"
#include <QDebug>

PersonTableWidgetItem::PersonTableWidgetItem(Person* newPerson)
{
    m_pPerson = newPerson;
}

// 3 items -- 1 person
// 1 item: != nullptr => delete m_personTableItem
// У оставшихся двух айтемов это поле не изменилось! Оно раньше указывало на объект в памяти, а теперь на мусор!


PersonTableWidgetItem::~PersonTableWidgetItem() {
    qDebug()<<"Деструктор PERSON-TABLE";
}


void PersonTableWidgetItem::setCurrentName()
{
    this->setText(m_pPerson->getName());
}
void PersonTableWidgetItem::setCurrentSurname()
{
    this->setText(m_pPerson->getSurname());
}
void PersonTableWidgetItem::setCurrentPatronymic()
{
    this->setText(m_pPerson->getPatronymic());
}
void PersonTableWidgetItem::setCurrentAge()
{
    this->setText(m_pPerson->getAge());
}
void PersonTableWidgetItem::setCurrentPhone()
{
    this->setText(m_pPerson->getPhone());
}

const QStringList &PersonTableWidgetItem::getPersonBanks() const
{
    return m_pPerson->personBanks();
}

Person *PersonTableWidgetItem::pPerson() const
{
    return m_pPerson;
}

