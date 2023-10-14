#include "persontablewidgetitem.h"
#include <QDebug>

PersonTableWidgetItem::PersonTableWidgetItem(Person* newPerson)
{
    m_pPersonTableItem = newPerson;

}

PersonTableWidgetItem::~PersonTableWidgetItem()
{
    if(m_pPersonTableItem!=nullptr)
    {
        delete m_pPersonTableItem;
        m_pPersonTableItem = nullptr;
    }
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

