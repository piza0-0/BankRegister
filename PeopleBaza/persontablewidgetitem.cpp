#include "persontablewidgetitem.h"
#include <QDebug>

PersonTableWidgetItem::PersonTableWidgetItem(const Person* newPerson)
{
    m_pPersonTableItem = newPerson;
    setData(Qt::UserRole,QVariant::fromValue(newPerson));
}

// 3 items -- 1 person
// 1 item: != nullptr => delete m_personTableItem
// У оставшихся двух айтемов это поле не изменилось! Оно раньше указывало на объект в памяти, а теперь на мусор!


PersonTableWidgetItem::~PersonTableWidgetItem() {
    qDebug()<<"Деструктор PERSON-TABLE";
}


void PersonTableWidgetItem::setCurrentName()
{
    this->setText(m_pPersonTableItem->getName());
}
void PersonTableWidgetItem::setCurrentSurname()
{
    this->setText(m_pPersonTableItem->getSurname());
}
void PersonTableWidgetItem::setCurrentPatronymic()
{
    this->setText(m_pPersonTableItem->getPatronymic());
}
void PersonTableWidgetItem::setCurrentAge()
{
    this->setText(m_pPersonTableItem->getAge());
}
void PersonTableWidgetItem::setCurrentPhone()
{
    this->setText(m_pPersonTableItem->getPhone());
}



const QList<QListWidgetItem *> &PersonTableWidgetItem::getPersonBanks()
{
    return m_pPersonTableItem->personBanks();
}

const Person *PersonTableWidgetItem::pPersonTableItem() const
{
    return m_pPersonTableItem;
}

