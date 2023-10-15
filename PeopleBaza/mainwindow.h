#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "person.h"
#include "persontablewidgetitem.h"
#include "LabelDelegate.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_select_clicked();


    void on_pushButton_TEST_clicked();

private:
    Ui::MainWindow *ui;
    QStandardItemModel* model = nullptr;
    LabelDelegate* delegate = nullptr;
};
#endif // MAINWINDOW_H
