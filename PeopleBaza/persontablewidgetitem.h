#ifndef PERSONTABLEWIDGETITEM_H
#define PERSONTABLEWIDGETITEM_H

#include <QTableWidgetItem>
#include "person.h"



class PersonTableWidgetItem : public QTableWidgetItem
{
public:
    PersonTableWidgetItem(const Person* newPerson);
    ~PersonTableWidgetItem();

    void setCurrentName();
    void setCurrentSurname();
    void setCurrentPatronymic();
    void setCurrentAge();
    void setCurrentPhone();
    const QList <QListWidgetItem*> &getPersonBanks();
    const Person *pPersonTableItem() const;



private:
    const Person* m_pPersonTableItem;

};

#endif // PERSONTABLEWIDGETITEM_H
