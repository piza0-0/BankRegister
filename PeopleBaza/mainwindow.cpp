#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->comboBox_List->setLineEdit(ui->lineEdit_name);
    ui->comboBox_List->isEditable();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_select_clicked()
{
      QSharedPointer<Person> spPerson(new Person (
                ui->lineEdit_name->text(),
                ui->lineEdit_age->text(),
                ui->lineEdit_grade->text()));


    DataList.append(spPerson);
    ui->comboBox_List->addItem(spPerson->GetName());


    ui->lineEdit_name->clear();
    ui->lineEdit_age->clear();
    ui->lineEdit_grade->clear();

}




