#ifndef AUTHORIZATIONDIALOG_H
#define AUTHORIZATIONDIALOG_H

#include <QDialog>
#include <QSettings>
#include <QPixmap>

namespace Ui {
class AuthorizationDialog;
}

class AuthorizationDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AuthorizationDialog(QWidget *parent = nullptr);
    ~AuthorizationDialog();
signals:
    void authorizationComplete();
private slots:
    void on_pb_accept_clicked();

private:
    Ui::AuthorizationDialog *ui;
};

#endif // AUTHORIZATIONDIALOG_H
