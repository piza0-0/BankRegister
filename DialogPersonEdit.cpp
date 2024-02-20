#include "DialogPersonEdit.h"
#include "ui_DialogPersonEdit.h"

DialogPersonEdit::DialogPersonEdit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogPersonEdit)
{
    ui->setupUi(this);
    this->setWindowTitle("Редактирование пользователей");
    ui->le_dphone->setInputMask("+7(999)999-9999");
    this->setWindowFlags(Qt::Window | Qt::CustomizeWindowHint | Qt::WindowTitleHint);

    ui->lw_personBanks->setSelectionMode(QAbstractItemView::MultiSelection);
}

DialogPersonEdit::~DialogPersonEdit()
{
    delete ui;
}

void DialogPersonEdit::setPersonInfo(const Person *person, const QStringList &bankList)
{
    m_oldSurname = person->getSurname();
    m_oldPassport = person->getPassport();

    ui->le_dsurname->setText(person->getSurname());
    ui->le_dname->setText(person->getName());
    ui->le_dpatronymic->setText(person->getPatronymic());
    ui->le_dpassport->setText(person->getPassport());
    ui->le_dphone->setText(person->getPhone());
    ui->lw_personBanks->addItems(bankList);

    int counter = 0;

    for (QString personBank : person->personBanks())
    {
        for(int i = counter; i < bankList.size(); ++i)
        {
            if (personBank == bankList.at(i))
            {
                ui->lw_personBanks->item(i)->setSelected(true);
                counter = i+1;
                break;
            }            
        }
    }
}


void DialogPersonEdit::on_pb_dsave_clicked()
{
    m_surname = ui->le_dsurname->text();
    m_name = ui->le_dname->text();
    m_patronymic = ui->le_dpatronymic->text();
    m_passport = ui->le_dpassport->text();
    m_phone = ui->le_dphone->text();

    emit editPerson(ui->lw_personBanks->selectedItems());
}



//Геттеры для испрользования в слоте MainWindow onEditPerson
void DialogPersonEdit::on_pb_ddiscard_clicked()
{
    this->close();
}

const QString &DialogPersonEdit::oldPassport() const
{
    return m_oldPassport;
}

const QString &DialogPersonEdit::oldSurname() const
{
    return m_oldSurname;
}

const QString &DialogPersonEdit::phone() const
{
    return m_phone;
}

const QString &DialogPersonEdit::passport() const
{
    return m_passport;
}

const QString &DialogPersonEdit::patronymic() const
{
    return m_patronymic;
}

const QString &DialogPersonEdit::surname() const
{
    return m_surname;
}

const QString &DialogPersonEdit::name() const
{
    return m_name;
}

