#include "PersonButtonEdit.h"

PersonButtonEdit::PersonButtonEdit(Person* person)
{
    m_personButton = person;
}

const Person *PersonButtonEdit::personButton() const
{
    return m_personButton;
}

int PersonButtonEdit::currentRow() const
{
    return m_currentRow;
}

void PersonButtonEdit::setCurrentRowButton (int currentRow)
{
    m_currentRow = currentRow;
}

