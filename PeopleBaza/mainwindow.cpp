#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableWidget_List->setColumnCount(3);
    ui->tableWidget_List->setHorizontalHeaderLabels({"Имя", "Возраст", "Класс"});
    ui->tableWidget_List->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget_List->setWordWrap(true);

    model = new QStandardItemModel(4, 2);
    // Semenov L M
    // Semenov
    // L
    // M
    model->setData(model->index(0, 0), "Label 1\nLabel 1\nLabel 1\nLabel 1\nLabel 1\n");
    model->setData(model->index(1, 0), "Label 2");
    model->setData(model->index(2, 0), "Label 3");
    model->setData(model->index(3, 0), "Label 4");

    ui->tableView->setModel(model);

    // Устанавливаем делегата для первого столбца
    delegate = new LabelDelegate();
    ui->tableView->setItemDelegateForColumn(0, delegate);

    ui->tableView->show();
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
                ui->lineEdit_age->text(),
                ui->lineEdit_grade->text(),
                this
    );

    PersonTableWidgetItem *pPersonTableWidgetItemName = new PersonTableWidgetItem(pPerson);
    PersonTableWidgetItem *pPersonTableWidgetItemAge = new PersonTableWidgetItem(pPerson);
    PersonTableWidgetItem *pPersonTableWidgetItemGrade = new PersonTableWidgetItem(pPerson);

    pPerson = nullptr;

    int row = ui->tableWidget_List->rowCount();
    ui->tableWidget_List->insertRow(row);

    pPersonTableWidgetItemName->setCurrentName();
    pPersonTableWidgetItemAge->setCurrentAge();
    pPersonTableWidgetItemGrade->setCurrentGrade();

    ui->tableWidget_List->setItem(row,0, pPersonTableWidgetItemName);
    ui->tableWidget_List->setItem(row,1, pPersonTableWidgetItemAge);
    ui->tableWidget_List->setItem(row,2, pPersonTableWidgetItemGrade);

    ui->lineEdit_name->clear();
    ui->lineEdit_age->clear();
    ui->lineEdit_grade->clear();
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

