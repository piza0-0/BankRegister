#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableWidget_List->setColumnCount(5);
    ui->tableWidget_List->setHorizontalHeaderLabels({"Имя","Фамилия","Отчество", "Возраст", "Класс"});
    ui->tableWidget_List->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget_List->setWordWrap(true);

}

MainWindow::~MainWindow()
{
    qDebug() << "Деструктор MAINWINDOW";

    delete ui;
}


void MainWindow::on_pushButton_select_clicked()
{
    Person *pPerson = new Person (
                ui->lineEdit_name->text(),
                ui->lineEdit_surname->text(),
                ui->lineEdit_patronymic->text(),
                ui->lineEdit_age->text(),
                ui->lineEdit_phone->text(),
                this
    );

    PersonTableWidgetItem *pPersonTableWidgetItemName = new PersonTableWidgetItem(pPerson);

    pPerson = nullptr;

    int row = ui->tableWidget_List->rowCount();
    ui->tableWidget_List->insertRow(row);

    pPersonTableWidgetItemName->setCurrentName();

    ui->tableWidget_List->setItem(row,0, pPersonTableWidgetItemName);
    //ui->tableWidget_List

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
        ui->lineEdit_age->setText("999");
        ui->lineEdit_grade->setText("1111");
        on_pushButton_select_clicked();
    }

}

