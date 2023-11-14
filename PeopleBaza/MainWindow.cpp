
#include "MainWindow.h"
#include "ui_MainWindow.h"
#include <QDebug>
#include <QRegExpValidator>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Клиентская база");

    ui->tw_personList->setColumnCount(6);
    ui->tw_personList->setHorizontalHeaderLabels({"Фамилия","Имя","Отчество", "Возраст", "Номер", " "});

    ui->tw_personList->horizontalHeader()->setSectionResizeMode(0,QHeaderView::Stretch);
    ui->tw_personList->horizontalHeader()->setSectionResizeMode(1,QHeaderView::Stretch);
    ui->tw_personList->horizontalHeader()->setSectionResizeMode(2,QHeaderView::Stretch);
    ui->tw_personList->horizontalHeader()->setSectionResizeMode(3,QHeaderView::Fixed);
    ui->tw_personList->setColumnWidth(3,60);
    ui->tw_personList->horizontalHeader()->setSectionResizeMode(4,QHeaderView::Fixed);
    ui->tw_personList->setColumnWidth(4,125);
    ui->tw_personList->horizontalHeader()->setSectionResizeMode(5,QHeaderView::Fixed);
    ui->tw_personList->setColumnWidth(5,50);

    QRegExpValidator *validator = new QRegExpValidator(QRegExp("[А-Яа-я]{2,40}"));

    ui->le_name->setValidator(validator);
    ui->le_surname->setValidator(validator);
    ui->le_patronymic->setValidator(validator);
    ui->le_age->setInputMask("000");
    ui->le_phone->setInputMask("+7(999)999-9999");

    ui->tw_personList->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tw_personList->setSelectionMode(QAbstractItemView::SingleSelection);

    connect(ui->tw_personList, &QTableWidget::cellClicked,
            [=](int row, int coll) {
                if (coll !=5){
                    ui->lw_bankList->clear();

                    PersonTableWidgetItem* personItem = dynamic_cast<PersonTableWidgetItem*>
                            (ui->tw_personList->item(row,0));
                    ui->lw_bankList->addItems(personItem->getPersonBanks());
                }
            }
    );

    ui->le_surname->setFocus();

    QWidget::setTabOrder(ui->le_surname, ui->le_name);
    QWidget::setTabOrder(ui->le_name, ui->le_patronymic);
    QWidget::setTabOrder(ui->le_patronymic,ui->le_age);
    QWidget::setTabOrder(ui->le_age,ui->le_phone);

    m_bankList <<"Тинькофф"<<"ВТБ"<<"Сбербанк"<<"Альфа банк"<<"Газпром банк"<<"Росбанк"<<"Совкомбанк"<<"Райффайзен банк"<<"Открытие банк"
             <<"Банк Санкт-Петербург"<<"Почта банк"<<"Home credit bank"<<"Банк Россия"<<"Уралсиб"<<"МКБ"<<"ПСБ"<<"ЮниКредит";

    m_bankList.sort();
    ui->lw_checkBanks->setSelectionMode(QAbstractItemView::MultiSelection);
    ui->lw_checkBanks->addItems(m_bankList);
}


MainWindow::~MainWindow()
{
    qDebug() << "Деструктор MAINWINDOW";

    delete ui;
}

void MainWindow::on_pb_select_clicked()
{
    if(lengthCheck()) return;

    Person *pPerson = new Person (
                ui->le_surname->text(),
                ui->le_name->text(),
                ui->le_patronymic->text(),
                ui->le_age->text(),
                ui->le_phone->text(),
                ui->lw_checkBanks->selectedItems(),
                this );

    PersonTableWidgetItem *pPersonTableWidgetItemSurname = new PersonTableWidgetItem(pPerson);

    QTableWidgetItem *pPersonItemName = new QTableWidgetItem;
    QTableWidgetItem *pPersonItemPatronymic = new QTableWidgetItem;
    QTableWidgetItem *pPersonItemAge = new QTableWidgetItem;
    QTableWidgetItem *pPersonItemPhone = new QTableWidgetItem;


    PersonButtonEdit *pButtonEdit = new PersonButtonEdit(pPerson);
    pButtonEdit->setText("edit");
    connect(pButtonEdit, &QPushButton::clicked, this, &MainWindow::createPersonEditDialog);

    int row = ui->tw_personList->rowCount();
    ui->tw_personList->insertRow(row);

   pPersonTableWidgetItemSurname->setCurrentSurname();
    pPersonItemName->setText(pPerson->getName());
    pPersonItemPatronymic->setText(pPerson->getPatronymic());
    pPersonItemAge->setText(pPerson->getAge());
    pPersonItemPhone->setText(pPerson->getPhone());

    ui->tw_personList->setItem(row,0, pPersonTableWidgetItemSurname);
    ui->tw_personList->setItem(row,1, pPersonItemName);
    ui->tw_personList->setItem(row,2, pPersonItemPatronymic);
    ui->tw_personList->setItem(row,3, pPersonItemAge);
    ui->tw_personList->setItem(row,4, pPersonItemPhone);

    ui->tw_personList->setCellWidget(row,5,pButtonEdit);
    pButtonEdit->setCurrentRowButton(row);

    ui->lw_checkBanks->clearSelection();
    ui->le_name->clear();
    ui->le_surname->clear();
    ui->le_patronymic->clear();
    ui->le_age->clear();
    ui->le_phone->clear();
}


void MainWindow::keyPressEvent(QKeyEvent *event) {
    if(event->key() == Qt::Key_Return || event->key() == Qt::Key_Down) {
        QWidget::focusWidget()->nextInFocusChain()->setFocus();
    }
}


////////TEST////////
void MainWindow::on_pb_test_clicked() {
    for(int i = 0; i < 100; i++) {
        qDebug() << i;
        ui->le_name->setText("TESTTESTTEST");
        ui->le_surname->setText("TEST");
        ui->le_patronymic->setText("sdasndajsd");
        ui->le_age->setText("999");
        ui->le_phone->setText("1111");

        on_pb_select_clicked();
    }
}


bool MainWindow::lengthCheck()
{
    bool check = 0;
    if(ui->le_name->text().count()<=2 || ui->le_surname->text().count()<=2
            || ui->le_patronymic->text().count()<=2)
    {
        if(ui->le_name->text().count()<=2) ui->le_name->setStyleSheet("color: red");
        if(ui->le_surname->text().count()<=2) ui->le_surname->setStyleSheet("color: red");
        if(ui->le_patronymic->text().count()<=2) ui->le_patronymic->setStyleSheet("color: red");
        check = 1;
    }

    return check;
}


void MainWindow::createPersonEditDialog() {
    QObject *senderObj = sender();
    if (senderObj!=nullptr) {
        PersonButtonEdit *pButtonEdit = dynamic_cast<PersonButtonEdit*>(senderObj);

        m_dialogEdit = new DialogPersonEdit(this);
        m_dialogEdit->setModal(true);
        m_dialogEdit->setPersonInfo(pButtonEdit->personButton());
        m_dialogEdit->setCurrentRowDialog(pButtonEdit->currentRow());
        connect(m_dialogEdit, &DialogPersonEdit::editPerson, this, &MainWindow::onEditPerson);
        m_dialogEdit->exec();
    }
}


void MainWindow::onEditPerson(const QString &surname, const QString &name, const QString &patronymic,
                              const QString &age, const QString &phone, int row) {
    PersonTableWidgetItem* personTableItem = dynamic_cast<PersonTableWidgetItem*>(ui->tw_personList->item(row, 0));
    personTableItem->pPerson()->setSurname(surname);
    personTableItem->pPerson()->setName(name);
    personTableItem->pPerson()->setPatronymic(patronymic);
    personTableItem->pPerson()->setAge(age);
    personTableItem->pPerson()->setPhone(phone);

    personTableItem->setText(surname);
    ui->tw_personList->item(row,1)->setText(name);
    ui->tw_personList->item(row,2)->setText(patronymic);
    ui->tw_personList->item(row,3)->setText(age);
    ui->tw_personList->item(row,4)->setText(phone);

    m_dialogEdit->close();
    m_dialogEdit = nullptr;
}
