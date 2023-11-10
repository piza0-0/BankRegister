#ifndef PERSONBUTTONEDIT_H
#define PERSONBUTTONEDIT_H

#include <QPushButton>
#include <QObject>
#include "person.h"

class PersonButtonEdit : public QPushButton
{
    Q_OBJECT
public:
    PersonButtonEdit(Person* );
    Person *personButton() const;

private:
    Person* m_personButton;

};

#endif // PERSONBUTTONEDIT_H
