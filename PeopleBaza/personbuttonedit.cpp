#include "personbuttonedit.h"

PersonButtonEdit::PersonButtonEdit(Person* person)
{
    m_personButton = person;
}

Person *PersonButtonEdit::personButton() const
{
    return m_personButton;
}

