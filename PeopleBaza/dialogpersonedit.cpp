#include "dialogpersonedit.h"
#include "ui_dialogpersonedit.h"

DialogPersonEdit::DialogPersonEdit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogPersonEdit)
{
    ui->setupUi(this);
    ui->le_dphone->setInputMask("+7(999)999-9999");
}

DialogPersonEdit::~DialogPersonEdit()
{
    delete ui;
}


void DialogPersonEdit::setPersonInfo(const Person *person)
{
    ui->le_dsurname->setText(person->getSurname());
    ui->le_dname->setText(person->getName());
    ui->le_dpatronymic->setText(person->getPatronymic());
    ui->le_dage->setText(person->getAge());
    ui->le_dphone->setText(person->getPhone());
}




void DialogPersonEdit::on_pb_dsave_clicked()
{
    m_surname = ui->le_dsurname->text();
    m_name = ui->le_dname->text();
    m_patronymic = ui->le_dpatronymic->text();
    m_age = ui->le_dage->text();
    m_phone = ui->le_dphone->text();
    emit sendEditPerson(m_surname, m_name, m_patronymic, m_age, m_phone, m_currentRow);

}

void DialogPersonEdit::setCurrentRowDialog(int newCurrentRow)
{
    m_currentRow = newCurrentRow;
}

