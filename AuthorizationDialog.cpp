#include "AuthorizationDialog.h"
#include "ui_AuthorizationDialog.h"
#include <QPixmap>

AuthorizationDialog::AuthorizationDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AuthorizationDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("Авторизация");
    QPixmap logo(":/img_logo/images/GNUlogo.png");
    int w = ui->l_logo->width();
    int h = ui->l_logo->height();
    ui->l_logo->setPixmap(logo.scaled(w, h));


}

AuthorizationDialog::~AuthorizationDialog()
{
    delete ui;
}
