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


}

RegistrationDialog::~RegistrationDialog()
{
    delete ui;
}

void RegistrationDialog::on_pb_accept_clicked()
{
    QString filePath = QApplication::applicationDirPath() + "/config.ini";
    QSettings configFile(filePath, QSettings::IniFormat);
    configFile.beginGroup("Personal");
    configFile.setValue("Login", ui->le_newLog->text());
    configFile.setValue("Password", ui->le_newPass->text());
    configFile.endGroup();
    emit registrationComplete();
}

