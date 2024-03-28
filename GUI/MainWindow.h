#pragma once
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QKeyEvent>
#include "Person.h"
#include "PersonTableWidgetItem.h"
#include "DialogPersonEdit.h"
#include "Backend/DbBackend.h"

/*
 * Завести массив где каждой букве будет соответствовать номер строки, с которой начинаются фамилии на эту букву
 * Все строки отстортированы по фамилиям.
 * Начинаем искать с индекса строки, который соответствует первой букве фамилии человека, к-го удаляем.
 */

/*
 * Использовать алгоритм -- двоичный поиск. Он позволяет быстро найти элемент в отсортированном массиве
 * Людей сортируем, например, по возрасту. Допустим мы хотим удалить 36-летнего. У нас есть массив людей
 * у которых возраст от 5 лет до 80 лет. Что мы делаем, мы берём средний элемент, смотрим сколько ему лет.
 * Допустим ему 40 лет. Получается все кому больше нам не нужны, рассматриваем только те кому меньше.
 */


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

    void deletePerson(const QString &oldSurname, const QString &oldPassport);

    ~MainWindow();

signals:
    void cellEditClicked();
    void cellDeleteClicked();

protected:
    void keyPressEvent(QKeyEvent *event) override;

private slots:

    void on_pb_select_clicked();

    void on_pb_test_clicked();

    void createPersonEditDialog();

    void onEditPerson(const QList<QListWidgetItem*> &onEditPersonBanks);

    void deletePerson();

    void on_tw_personList_cellClicked(int row, int column);

private:
    Ui::MainWindow *ui;
    QStringList m_bankList;
    DialogPersonEdit* m_dialogEdit = nullptr;    
    int m_clickedRowNumber = 0;
    DbBackend* m_db = nullptr;

    bool lengthCheck();


};

#endif // MAINWINDOW_H
