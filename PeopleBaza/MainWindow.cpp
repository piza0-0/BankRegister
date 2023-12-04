
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

    ui->tw_personList->setColumnCount(7);
    ui->tw_personList->setHorizontalHeaderLabels({"Фамилия","Имя","Отчество", "Паспорт",
                                                  "Номер", " ", " "});

    ui->tw_personList->horizontalHeader()->setSectionResizeMode(0,QHeaderView::Stretch);
    ui->tw_personList->horizontalHeader()->setSectionResizeMode(1,QHeaderView::Stretch);
    ui->tw_personList->horizontalHeader()->setSectionResizeMode(2,QHeaderView::Stretch);
    ui->tw_personList->horizontalHeader()->setSectionResizeMode(3,QHeaderView::Fixed);
    ui->tw_personList->setColumnWidth(3,100);
    ui->tw_personList->horizontalHeader()->setSectionResizeMode(4,QHeaderView::Fixed);
    ui->tw_personList->setColumnWidth(4,125);
    ui->tw_personList->horizontalHeader()->setSectionResizeMode(5,QHeaderView::Fixed);
    ui->tw_personList->setColumnWidth(5,50);
    ui->tw_personList->horizontalHeader()->setSectionResizeMode(5,QHeaderView::Fixed);
    ui->tw_personList->setColumnWidth(6,50);



    QRegExpValidator *validator = new QRegExpValidator(QRegExp("[А-Яа-я]{2,40}"));

    ui->le_name->setValidator(validator);
    ui->le_surname->setValidator(validator);
    ui->le_patronymic->setValidator(validator);
    ui->le_passport->setInputMask("9999999999");
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
    QWidget::setTabOrder(ui->le_patronymic,ui->le_passport);
    QWidget::setTabOrder(ui->le_passport,ui->le_phone);

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
                ui->le_passport->text(),
                ui->le_phone->text(),
                ui->lw_checkBanks->selectedItems(),
                this );

    PersonTableWidgetItem *pPersonTableWidgetItemSurname = new PersonTableWidgetItem(pPerson);

    QTableWidgetItem *pPersonItemName = new QTableWidgetItem;
    QTableWidgetItem *pPersonItemPatronymic = new QTableWidgetItem;
    QTableWidgetItem *pPersonItemPassport = new QTableWidgetItem;
    QTableWidgetItem *pPersonItemPhone = new QTableWidgetItem;


    PersonButtonEdit *pButtonEdit = new PersonButtonEdit(pPerson);
    pButtonEdit->setText("edit");
    connect(pButtonEdit, &QPushButton::clicked, this, &MainWindow::createPersonEditDialog);

    PersonButtonEdit *pButtonDelete = new PersonButtonEdit(pPerson);
    pButtonDelete->setText("delete");
    connect(pButtonDelete, &QPushButton::clicked, this,
            static_cast<void(MainWindow::*) ()>(&MainWindow::deletePerson));

    int row = ui->tw_personList->rowCount();
    ui->tw_personList->insertRow(row);

    pPersonTableWidgetItemSurname->setCurrentSurname();
    pPersonItemName->setText(pPerson->getName());
    pPersonItemPatronymic->setText(pPerson->getPatronymic());
    pPersonItemPassport->setText(pPerson->getPassport());
    pPersonItemPhone->setText(pPerson->getPhone());

    ui->tw_personList->setItem(row,0, pPersonTableWidgetItemSurname);
    ui->tw_personList->setItem(row,1, pPersonItemName);
    ui->tw_personList->setItem(row,2, pPersonItemPatronymic);
    ui->tw_personList->setItem(row,3, pPersonItemPassport);
    ui->tw_personList->setItem(row,4, pPersonItemPhone);

    ui->tw_personList->setCellWidget(row,5,pButtonEdit);
    //pButtonEdit->setCurrentRowButton(row);
    ui->tw_personList->setCellWidget(row,6,pButtonDelete);
    //pButtonDelete->setCurrentRowButton(row);
    ui->tw_personList->sortByColumn(0,Qt::AscendingOrder);

    ui->lw_checkBanks->clearSelection();
    ui->le_name->clear();
    ui->le_surname->clear();
    ui->le_patronymic->clear();
    ui->le_passport->clear();
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
        ui->le_passport->setText("4444444444");
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
        m_dialogEdit->setPersonInfo(pButtonEdit->personButton(), m_bankList);

        //m_dialogEdit->setCurrentRowDialog(pButtonEdit->currentRow());
        connect(m_dialogEdit, &DialogPersonEdit::editPerson, this, &MainWindow::onEditPerson);
        m_dialogEdit->exec();
    }
}


void MainWindow::onEditPerson(const QString &surname, const QString &name, const QString &patronymic,
                              const QString &passport, const QString &phone,
                              const QList<QListWidgetItem *> &editPesronBanks,
                              const QString &oldSurname, const QString &oldPassport) {
    deletePerson(oldSurname, oldPassport);
    Person *pPerson = new Person (surname, name, patronymic,
                                  passport, phone, editPesronBanks, this);
    PersonTableWidgetItem *pPersonTableWidgetItemSurname = new PersonTableWidgetItem(pPerson);

    QTableWidgetItem *pPersonItemName = new QTableWidgetItem;
    QTableWidgetItem *pPersonItemPatronymic = new QTableWidgetItem;
    QTableWidgetItem *pPersonItemPassport = new QTableWidgetItem;
    QTableWidgetItem *pPersonItemPhone = new QTableWidgetItem;
    PersonButtonEdit *pButtonEdit = new PersonButtonEdit(pPerson);
    pButtonEdit->setText("edit");
    connect(pButtonEdit, &QPushButton::clicked, this, &MainWindow::createPersonEditDialog);

    PersonButtonEdit *pButtonDelete = new PersonButtonEdit(pPerson);
    pButtonDelete->setText("delete");
    connect(pButtonDelete, &QPushButton::clicked, this,
            static_cast<void(MainWindow::*) ()>(&MainWindow::deletePerson));

    int row = ui->tw_personList->rowCount();
    ui->tw_personList->insertRow(row);

    pPersonTableWidgetItemSurname->setCurrentSurname();
    pPersonItemName->setText(pPerson->getName());
    pPersonItemPatronymic->setText(pPerson->getPatronymic());
    pPersonItemPassport->setText(pPerson->getPassport());
    pPersonItemPhone->setText(pPerson->getPhone());

    ui->tw_personList->setItem(row,0, pPersonTableWidgetItemSurname);
    ui->tw_personList->setItem(row,1, pPersonItemName);
    ui->tw_personList->setItem(row,2, pPersonItemPatronymic);
    ui->tw_personList->setItem(row,3, pPersonItemPassport);
    ui->tw_personList->setItem(row,4, pPersonItemPhone);

    ui->tw_personList->setCellWidget(row,5,pButtonEdit);
    //pButtonEdit->setCurrentRowButton(row);
    ui->tw_personList->setCellWidget(row,6,pButtonDelete);
    //pButtonDelete->setCurrentRowButton(row);
    ui->tw_personList->sortByColumn(0,Qt::AscendingOrder);

    m_dialogEdit->close();
    m_dialogEdit = nullptr;
}

void MainWindow::deletePerson()
{
    QObject *senderObj = sender();
    if (senderObj!=nullptr){
        PersonButtonEdit *pButtonDelete = dynamic_cast<PersonButtonEdit*>(senderObj);
        int currentRow = binarySearchSurname(pButtonDelete->personButton()->getSurname(),
                                             pButtonDelete->personButton()->getPassport());
        if(ui->tw_personList->item(currentRow, 0) != nullptr){
        PersonTableWidgetItem* personTableItem = dynamic_cast<PersonTableWidgetItem*>
                (ui->tw_personList->item(currentRow, 0));
        delete personTableItem->pPerson();
        delete personTableItem;
        personTableItem = nullptr;
        }
        for (int i = 1; i < 5 ; ++i) {
            delete ui->tw_personList->item(currentRow, i);
        }
        for (int i = 5; i < 7; ++i){
            delete ui->tw_personList->cellWidget(currentRow, i);
        }
        ui->lw_bankList->clear();
        ui->tw_personList->removeRow(currentRow);
    }
}

void MainWindow::deletePerson(const QString &oldSurname, const QString &oldPassport)
{
    int currentRow = binarySearchSurname(oldSurname, oldPassport);
    if(ui->tw_personList->item(currentRow, 0) != nullptr){
    PersonTableWidgetItem* personTableItem = dynamic_cast<PersonTableWidgetItem*>
            (ui->tw_personList->item(currentRow, 0));
    delete personTableItem->pPerson();
    delete personTableItem;
    personTableItem = nullptr;
    }
    for (int i = 1; i < 5 ; ++i) {
        delete ui->tw_personList->item(currentRow, i);
    }
    for (int i = 5; i < 7; ++i){
        delete ui->tw_personList->cellWidget(currentRow, i);
    }
    ui->lw_bankList->clear();
    ui->tw_personList->removeRow(currentRow);

}


int MainWindow::binarySearchSurname(const QString &surname, const QString &passport)
{
    int searchLetterCode = surname.at(0).unicode();
    int rightBorder = ui->tw_personList->rowCount()-1;
    int leftBorder = 0;
    bool isFound = 0;
    int middle;
    PersonTableWidgetItem* checkPerson;

    if(rightBorder == leftBorder){
        return rightBorder;
    }

    while (rightBorder > leftBorder && !isFound) {
        middle = (rightBorder + leftBorder)/2;
        checkPerson = dynamic_cast<PersonTableWidgetItem*>
                (ui->tw_personList->item(middle,0));
        int checkLetterCode = checkPerson->pPerson()->getSurname().at(0).unicode();

        if(checkLetterCode < searchLetterCode){
            leftBorder = middle + 1;
        }else if(checkLetterCode > searchLetterCode){
            rightBorder = middle - 1;
        }else if(checkLetterCode == searchLetterCode){
            isFound = 1;
            while (checkLetterCode == searchLetterCode){
                --middle;
                if(middle > 0){
                    checkPerson = dynamic_cast<PersonTableWidgetItem*>
                            (ui->tw_personList->item(middle,0));
                    checkLetterCode = checkPerson->pPerson()->getSurname().at(0).unicode();
                }else break;
            }
        }
    }
    if(isFound){
        QString checkPassport;

        while (checkPassport != passport){
            middle += 1;
            checkPerson = dynamic_cast<PersonTableWidgetItem*>
                    (ui->tw_personList->item(middle, 0));
            checkPassport = checkPerson->pPerson()->getPassport();
        }
        return middle;

    }else return -1;


}
