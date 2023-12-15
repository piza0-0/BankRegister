#ifndef PERSONTABLEWIDGETITEM_H
#define PERSONTABLEWIDGETITEM_H

#include <QTableWidgetItem>
#include "Person.h"



class PersonTableWidgetItem : public QTableWidgetItem
{
public:
    PersonTableWidgetItem(Person* newPerson);
    ~PersonTableWidgetItem();

    void setCurrentName();
    void setCurrentSurname();
//    void setCurrentPatronymic();
//    void setCurrentAge();
//    void setCurrentPhone();

    const QStringList &getPersonBanks() const;

    Person *pPerson() const;

private:
    Person* m_pPerson; // 6 колонок, 8 байт * 6 = 48 байт вместо 8 байт если мы храним только в первой ячейке строки
};

#endif // PERSONTABLEWIDGETITEM_H
