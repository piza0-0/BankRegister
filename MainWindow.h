#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QKeyEvent>
#include "Person.h"
#include "PersonTableWidgetItem.h"
#include "PersonButtonEdit.h"
#include "DialogPersonEdit.h"

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
    int binarySearchSurname(const QString &surname);
    int searchByPassportAndSurname(const QString &searchSurname, const QString &searchPassport);
    void deletePerson(const QString &oldSurname, const QString &oldPassport);
    QString binaryStringConcatenation(const QString &surname);
    bool isSearchBinarySurnameIsHigher(const QString &searchSurnameBinary, const QString &compareSurnameBinary);

    ~MainWindow();

protected:
    void keyPressEvent(QKeyEvent *event) override;

private slots:

    void on_pb_select_clicked();

    void on_pb_test_clicked();

    void createPersonEditDialog();

    void onEditPerson(const QString &surname, const QString &name, const QString &patronymic,
                      const QString &passport, const QString &phone,
                      const QList<QListWidgetItem*> &,
                      const QString &oldSurname, const QString &oldPassport);


    void deletePerson();

private:
    // ../PeopleBaza/image.png
    Ui::MainWindow *ui;
    QStringList m_bankList;
    bool lengthCheck();
    DialogPersonEdit* m_dialogEdit = nullptr;
};

#endif // MAINWINDOW_H
