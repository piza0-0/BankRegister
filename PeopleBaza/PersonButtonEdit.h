#ifndef PERSONBUTTONEDIT_H
#define PERSONBUTTONEDIT_H

#include <QPushButton>
#include <QObject>
#include "Person.h"

class PersonButtonEdit : public QPushButton
{
    Q_OBJECT
public:
    PersonButtonEdit(Person* );
    const Person *personButton() const;

    int currentRow() const;
    void setCurrentRowButton (int currentRow);

private:
    Person* m_personButton;
    int m_currentRow;

};

#endif // PERSONBUTTONEDIT_H
