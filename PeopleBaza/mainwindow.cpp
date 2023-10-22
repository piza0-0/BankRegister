#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableWidget_List->setColumnCount(5);
    ui->tableWidget_List->setHorizontalHeaderLabels({"Фамилия","Имя","Отчество", "Возраст", "Номер"});
    ui->tableWidget_List->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    ui->lineEdit_surname->setFocus();

    QWidget::setTabOrder(QWidget::focusWidget(),ui->lineEdit_name);
    QWidget::setTabOrder(ui->lineEdit_name, ui->lineEdit_patronymic);
    QWidget::setTabOrder(ui->lineEdit_patronymic, ui->lineEdit_age);
    QWidget::setTabOrder(ui->lineEdit_age,ui->lineEdit_phone);
    QWidget::setTabOrder(ui->lineEdit_phone,ui->lineEdit_surname);

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

void MainWindow::on_pushButton_select_clicked()
{
    Person *pPerson = new Person (                
                ui->lineEdit_surname->text(),
                ui->lineEdit_name->text(),
                ui->lineEdit_patronymic->text(),
                ui->lineEdit_age->text(),
                ui->lineEdit_phone->text(),
                this );

    PersonTableWidgetItem *pPersonTableWidgetItemSurname = new PersonTableWidgetItem(pPerson);
    PersonTableWidgetItem *pPersonTableWidgetItemName = new PersonTableWidgetItem(pPerson);
    PersonTableWidgetItem *pPersonTableWidgetItemPatronymic = new PersonTableWidgetItem(pPerson);
    PersonTableWidgetItem *pPersonTableWidgetItemAge = new PersonTableWidgetItem(pPerson);
    PersonTableWidgetItem *pPersonTableWidgetItemPhone = new PersonTableWidgetItem(pPerson);

    int row = ui->tableWidget_List->rowCount();
    ui->tableWidget_List->insertRow(row);

    pPersonTableWidgetItemName->setCurrentName();
    pPersonTableWidgetItemSurname->setCurrentSurname();
    pPersonTableWidgetItemPatronymic->setCurrentPatronymic();
    pPersonTableWidgetItemAge->setCurrentAge();
    pPersonTableWidgetItemPhone->setCurrentPhone();

    ui->tableWidget_List->setItem(row,0, pPersonTableWidgetItemSurname);
    ui->tableWidget_List->setItem(row,1, pPersonTableWidgetItemName);
    ui->tableWidget_List->setItem(row,2, pPersonTableWidgetItemPatronymic);
    ui->tableWidget_List->setItem(row,3, pPersonTableWidgetItemAge);
    ui->tableWidget_List->setItem(row,4, pPersonTableWidgetItemPhone);


    ui->lineEdit_name->clear();
    ui->lineEdit_surname->clear();
    ui->lineEdit_patronymic->clear();
    ui->lineEdit_age->clear();
    ui->lineEdit_phone->clear();
}



////////TEST////////
void MainWindow::on_pushButton_TEST_clicked()
{
    for(int i = 0; i < 100; i++)
    {
        qDebug() << i;
        ui->lineEdit_name->setText("TESTTESTTEST");
        ui->lineEdit_surname->setText("TEST");
        ui->lineEdit_patronymic->setText("sdasndajsd");
        ui->lineEdit_age->setText("999");        
        ui->lineEdit_phone->setText("1111");

        on_pushButton_select_clicked();
    }

}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Return || event->key() == Qt::Key_Down)
    {
        QWidget::focusWidget()->nextInFocusChain()->setFocus();
    }

}


