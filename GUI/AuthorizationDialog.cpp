#include "AuthorizationDialog.h"
#include "ui_AuthorizationDialog.h"


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

    ui->l_wrongData->setStyleSheet("color: #121f41;");

}

AuthorizationDialog::~AuthorizationDialog()
{
    delete ui;
}

void AuthorizationDialog::on_pb_accept_clicked()
{
    QString filePath = QApplication::applicationDirPath() + "/config.ini";
    QSettings configFile(filePath, QSettings::IniFormat);
    configFile.beginGroup("Personal");
    QString login = configFile.value("Login","").toString();
    QString password = configFile.value("Password","").toString();
    configFile.endGroup();
    if (login == ui->le_login->text() && password == ui->le_password->text()){
        emit authorizationComplete();
    }else{
        ui->l_wrongData->setStyleSheet("color: #e84e84;");
    }


}

