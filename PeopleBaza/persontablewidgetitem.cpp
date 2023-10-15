#include "persontablewidgetitem.h"
#include <QDebug>

PersonTableWidgetItem::PersonTableWidgetItem(Person* newPerson)
{
    m_pPersonTableItem = newPerson;


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

void PersonTableWidgetItem::setCurrentAge()
{
    this->setText(m_pPersonTableItem->getAge());

}

void PersonTableWidgetItem::setCurrentGrade()
{
    this->setText(m_pPersonTableItem->getGrade());

}

Person *PersonTableWidgetItem::pPersonTableItem() const
{
    return m_pPersonTableItem;
}

