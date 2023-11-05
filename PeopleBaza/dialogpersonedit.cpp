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

void DialogPersonEdit::fillFields(Person* personFill)
{
    ui->le_dsurname->setText(personFill->getSurname());
    ui->le_dname->setText(personFill->getName());
    ui->le_dpatronymic->setText(personFill->getPatronymic());
    ui->le_dage->setText(personFill->getAge());
    ui->le_dphone->setText(personFill->getPhone());
}

