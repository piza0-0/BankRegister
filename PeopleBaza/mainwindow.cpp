#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tw_personList->setColumnCount(5);
    ui->tw_personList->setHorizontalHeaderLabels({"Фамилия","Имя","Отчество", "Возраст", "Номер"});
    ui->tw_personList->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    ui->le_surname->setFocus();

    QWidget::setTabOrder(ui->le_surname, ui->le_name);
    QWidget::setTabOrder(ui->le_name, ui->le_patronymic);
    QWidget::setTabOrder(ui->le_patronymic,ui->le_age);
    QWidget::setTabOrder(ui->le_age,ui->le_phone);

//    ui->lineEdit_name->setEnabled(false);
//    ui->lineEdit_surname->setEnabled(false);
//    ui->lineEdit_patronymic->setEnabled(false);
//    ui->lineEdit_age->setEnabled(false);
//    ui->lineEdit_phone->setEnabled(false);

//    ui->pushButton_select->setEnabled(false);
//    ui->pushButton_TEST->setEnabled(false);


}

MainWindow::~MainWindow()
{
    qDebug() << "Деструктор MAINWINDOW";

    delete ui;
}

void MainWindow::on_pb_select_clicked()
{
    Person *pPerson = new Person (
                ui->le_surname->text(),
                ui->le_name->text(),
                ui->le_patronymic->text(),
                ui->le_age->text(),
                ui->le_phone->text(),
                this );

    PersonTableWidgetItem *pPersonTableWidgetItemSurname = new PersonTableWidgetItem(pPerson);
    PersonTableWidgetItem *pPersonTableWidgetItemName = new PersonTableWidgetItem(pPerson);
    PersonTableWidgetItem *pPersonTableWidgetItemPatronymic = new PersonTableWidgetItem(pPerson);
    PersonTableWidgetItem *pPersonTableWidgetItemAge = new PersonTableWidgetItem(pPerson);
    PersonTableWidgetItem *pPersonTableWidgetItemPhone = new PersonTableWidgetItem(pPerson);

    int row = ui->tw_personList->rowCount();
    ui->tw_personList->insertRow(row);

    pPersonTableWidgetItemName->setCurrentName();
    pPersonTableWidgetItemSurname->setCurrentSurname();
    pPersonTableWidgetItemPatronymic->setCurrentPatronymic();
    pPersonTableWidgetItemAge->setCurrentAge();
    pPersonTableWidgetItemPhone->setCurrentPhone();

    ui->tw_personList->setItem(row,0, pPersonTableWidgetItemSurname);
    ui->tw_personList->setItem(row,1, pPersonTableWidgetItemName);
    ui->tw_personList->setItem(row,2, pPersonTableWidgetItemPatronymic);
    ui->tw_personList->setItem(row,3, pPersonTableWidgetItemAge);
    ui->tw_personList->setItem(row,4, pPersonTableWidgetItemPhone);


    ui->le_name->clear();
    ui->le_surname->clear();
    ui->le_patronymic->clear();
    ui->le_age->clear();
    ui->le_phone->clear();
}


void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Return || event->key() == Qt::Key_Down)
    {
        QWidget::focusWidget()->nextInFocusChain()->setFocus();
    }

}



////////TEST////////

void MainWindow::on_pb_test_clicked()
{
    for(int i = 0; i < 100; i++)
    {
        qDebug() << i;
        ui->le_name->setText("TESTTESTTEST");
        ui->le_surname->setText("TEST");
        ui->le_patronymic->setText("sdasndajsd");
        ui->le_age->setText("999");
        ui->le_phone->setText("1111");

        on_pb_select_clicked();
    }
}

