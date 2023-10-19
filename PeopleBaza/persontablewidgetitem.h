#ifndef PERSONTABLEWIDGETITEM_H
#define PERSONTABLEWIDGETITEM_H

#include <QTableWidgetItem>
#include "person.h"



class PersonTableWidgetItem : public QTableWidgetItem
{
public:
    PersonTableWidgetItem(Person* newPerson);
    ~PersonTableWidgetItem();

    void setCurrentName();
    Person *pPersonTableItem() const;



private:
    Person* m_pPersonTableItem;

};

#endif // PERSONTABLEWIDGETITEM_H
