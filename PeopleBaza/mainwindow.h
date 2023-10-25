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

    void twItemSelection(QTableWidgetItem*);
    void on_pb_select_clicked();

    void on_pb_test_clicked();

private:
    Ui::MainWindow *ui;
    QStringList m_bankList;
};
#endif // MAINWINDOW_H
