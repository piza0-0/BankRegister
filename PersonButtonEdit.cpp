#include "PersonButtonEdit.h"

PersonButtonEdit::PersonButtonEdit(Person* person)
{
    m_personButton = person;
}

PersonButtonEdit::PersonButtonEdit()
{

}

const Person *PersonButtonEdit::personButton() const
{
    return m_personButton;
}

