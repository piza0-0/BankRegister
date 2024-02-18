#include "RegistrationDialog.h"
#include "ui_RegistrationDialog.h"


RegistrationDialog::RegistrationDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RegistrationDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("Регистрация");
    QPixmap logo(":/img_logo/images/GNUlogo.png");
    int w = ui->l_logo->width();
    int h = ui->l_logo->height();
    ui->l_logo->setPixmap(logo.scaled(w, h));

    ui->l_wrongData_reg->setStyleSheet("color: #121f41;");
}

RegistrationDialog::~RegistrationDialog()
{
    delete ui;
}

void RegistrationDialog::on_pb_accept_clicked()
{   
    QString password = ui->le_newPass->text();
    QString login = ui->le_newLog->text();
    if(password.size() >= 4 && login > 1){
    QString filePath = QApplication::applicationDirPath() + "/config.ini";
    QSettings configFile(filePath, QSettings::IniFormat);
    configFile.beginGroup("Personal");
    configFile.setValue("Login", ui->le_newLog->text());
    configFile.setValue("Password", password);
    configFile.endGroup();
    emit registrationComplete();}
    else{
        ui->l_wrongData_reg->setStyleSheet("color: #e84e84;");
    }
}

