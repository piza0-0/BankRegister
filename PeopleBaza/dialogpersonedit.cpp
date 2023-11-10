#include "dialogpersonedit.h"
#include "ui_dialogpersonedit.h"

DialogPersonEdit::DialogPersonEdit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogPersonEdit)
{
    ui->setupUi(this);
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

