#include "personbuttonedit.h"

PersonButtonEdit::PersonButtonEdit(Person* person)
{
    m_personButton = person;
}

const Person *PersonButtonEdit::personButton() const
{
    return m_personButton;
}

