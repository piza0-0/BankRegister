#ifndef PERSONTABLEWIDGETITEM_H
#define PERSONTABLEWIDGETITEM_H

#include <QTableWidgetItem>
#include "person.h"



class PersonTableWidgetItem : public QTableWidgetItem
{
public:
    PersonTableWidgetItem(Person* newPerson);
    ~PersonTableWidgetItem();

    int getRows() const;
    void setCurrentName();
    void setCurrentAge();
    void setCurrentGrade();
    Person *pPersonTableItem() const;



private:
    Person* m_pPersonTableItem;

};

#endif // PERSONTABLEWIDGETITEM_H
