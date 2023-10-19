#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QKeyEvent>
#include "person.h"
#include "persontablewidgetitem.h"



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    void keyPressEvent(QKeyEvent *event) override;

private slots:

    void on_pushButton_select_clicked();

    void on_pushButton_TEST_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
