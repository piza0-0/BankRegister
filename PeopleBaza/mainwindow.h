#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QKeyEvent>
#include "person.h"
#include "persontablewidgetitem.h"
#include "personbuttonedit.h"
#include "dialogpersonedit.h"

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

    void on_pb_select_clicked();

    void on_pb_test_clicked();

    void createPersonEditDialog();

private:

    Ui::MainWindow *ui;
    QStringList m_bankList;
    bool lengthCheck();
    DialogPersonEdit* m_dialogEdit = nullptr;


};

#endif // MAINWINDOW_H
