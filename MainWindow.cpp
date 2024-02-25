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
    ui->tw_personList->horizontalHeader()->setHighlightSections(false);
    QPixmap logo(":/img_logo/images/GNUlogo_levitate.png");
    int h = ui->l_logo->height();
    ui->l_logo->setPixmap(logo.scaled(215, h));
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
    ui->lw_bankList->setSelectionMode(QAbstractItemView::NoSelection);

    connect(this, &MainWindow::cellEditClicked, this, &MainWindow::createPersonEditDialog);
    connect(this, &MainWindow::cellDeleteClicked, this, static_cast<void(MainWindow::*) ()>(&MainWindow::deletePerson));
    connect(ui->tw_personList, &QTableWidget::cellClicked,
            [=](int row, int coll) {
        if (coll < 5){
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

    QTableWidgetItem *PersonItemName = new QTableWidgetItem;
    QTableWidgetItem *PersonItemPatronymic = new QTableWidgetItem;
    QTableWidgetItem *PersonItemPassport = new QTableWidgetItem;
    QTableWidgetItem *PersonItemPhone = new QTableWidgetItem;
    QTableWidgetItem *PersonItemEdit = new QTableWidgetItem;
    QTableWidgetItem *PersonItemDelete = new QTableWidgetItem;

    int row = ui->tw_personList->rowCount();
    ui->tw_personList->insertRow(row);

    pPersonTableWidgetItemSurname->setCurrentSurname();
    PersonItemName->setText(pPerson->getName());
    PersonItemPatronymic->setText(pPerson->getPatronymic());
    PersonItemPassport->setText(pPerson->getPassport());
    PersonItemPhone->setText(pPerson->getPhone());
    PersonItemEdit->setText("Изменить");
    PersonItemDelete->setText("Удалить");

    ui->tw_personList->setItem(row,0, pPersonTableWidgetItemSurname);
    ui->tw_personList->setItem(row,1, PersonItemName);
    ui->tw_personList->setItem(row,2, PersonItemPatronymic);
    ui->tw_personList->setItem(row,3, PersonItemPassport);
    ui->tw_personList->setItem(row,4, PersonItemPhone);
    ui->tw_personList->setItem(row,5, PersonItemEdit);
    ui->tw_personList->setItem(row,6, PersonItemDelete);

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

    ui->le_name->setText("ТЕСТ");
    ui->le_surname->setText("Астафьев");
    ui->le_patronymic->setText("ТЕСТТЕСТ");
    ui->le_passport->setText("4022689452");
    ui->le_phone->setText("6994423338");
    ui->lw_checkBanks->selectAll();

    on_pb_select_clicked();

    ui->le_name->setText("ТЕСТ");
    ui->le_surname->setText("Барбоскин");
    ui->le_patronymic->setText("ТЕСТТЕСТ");
    ui->le_passport->setText("4016514480");
    ui->le_phone->setText("6994423338");
    ui->lw_checkBanks->selectAll();
    on_pb_select_clicked();
    ui->le_name->setText("ТЕСТ");
    ui->le_surname->setText("Лыжин");
    ui->le_patronymic->setText("ТЕСТТЕСТ");
    ui->le_passport->setText("6314876328");
    ui->le_phone->setText("6994423338");
    ui->lw_checkBanks->selectAll();
    on_pb_select_clicked();


    ui->le_name->setText("ТЕСТ");
    ui->le_surname->setText("Парашин");
    ui->le_patronymic->setText("ТЕСТТЕСТ");
    ui->le_passport->setText("4016558792");
    ui->le_phone->setText("6994423338");
    ui->lw_checkBanks->selectAll();
    on_pb_select_clicked();
    ui->le_name->setText("ТЕСТ");
    ui->le_surname->setText("Петухов");
    ui->le_patronymic->setText("ТЕСТТЕСТ");
    ui->le_passport->setText("6151418191");
    ui->le_phone->setText("6994423338");
    ui->lw_checkBanks->selectAll();
    on_pb_select_clicked();

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
    PersonTableWidgetItem* editPerson = dynamic_cast<PersonTableWidgetItem*>(ui->tw_personList->item(clickedRowNumber, 0));
    m_dialogEdit = new DialogPersonEdit(this);
    m_dialogEdit->setModal(true);
    m_dialogEdit->setPersonInfo(editPerson->pPerson(),editPerson->getPersonBanks());

    connect(m_dialogEdit, &DialogPersonEdit::editPerson, this, &MainWindow::onEditPerson);
    m_dialogEdit->exec();
}


void MainWindow::onEditPerson(const QList<QListWidgetItem*> &onEditPersonBanks) {
    if (sender() != nullptr){
        const DialogPersonEdit *onEditPerson = dynamic_cast<DialogPersonEdit*>(sender());
        int currentRow = clickedRowNumber;
        PersonTableWidgetItem* editPersonItem = dynamic_cast<PersonTableWidgetItem*>
                (ui->tw_personList->item(currentRow,0));

        editPersonItem->pPerson()->setSurname(onEditPerson->surname());
        editPersonItem->pPerson()->setName(onEditPerson->name());
        editPersonItem->pPerson()->setPatronymic(onEditPerson->patronymic());
        editPersonItem->pPerson()->setPassport(onEditPerson->passport());
        editPersonItem->pPerson()->setPhone(onEditPerson->phone());
        editPersonItem->pPerson()->overwriteBankList(onEditPersonBanks);

        ui->tw_personList->item(currentRow,0)->setText(onEditPerson->surname());
        ui->tw_personList->item(currentRow,1)->setText(onEditPerson->name());
        ui->tw_personList->item(currentRow,2)->setText(onEditPerson->patronymic());
        ui->tw_personList->item(currentRow,3)->setText(onEditPerson->passport());
        ui->tw_personList->item(currentRow,4)->setText(onEditPerson->phone());

        m_dialogEdit->close();
        delete m_dialogEdit;
        m_dialogEdit = nullptr;
        ui->tw_personList->sortByColumn(0,Qt::AscendingOrder);
        ui->lw_bankList->clear();
        ui->lw_bankList->addItems(editPersonItem->getPersonBanks());
    }
}

void MainWindow::deletePerson() {
    int currentRow = clickedRowNumber;

    if(ui->tw_personList->item(currentRow, 0) != nullptr){
        PersonTableWidgetItem* personTableItem = dynamic_cast<PersonTableWidgetItem*>
                (ui->tw_personList->item(currentRow, 0));
        delete personTableItem->pPerson();
    }
    for (int i = 0; i < ui->tw_personList->columnCount(); ++i) {
        delete ui->tw_personList->item(currentRow, i);
    }
    ui->lw_bankList->clear();
    ui->tw_personList->removeRow(currentRow);
}

void MainWindow::on_tw_personList_cellClicked(int row, int column)
{
    if(column == 5){
        clickedRowNumber = row;
        emit cellEditClicked();
    }
    if(column == 6){
        clickedRowNumber = row;
        emit cellDeleteClicked();
    }
}



// Функцию разбить на две функции:
// Реализовать и протестировать бинарный поиск, который выполняет поиск по строке
// (фамилии). В результате работы функции должны получать индекс элемента, в котором
// содержится эта фамилия.
// int binarySearchSurname(const QString &surname); O(log(N))
//
// Так как фамилии могут повторяться, то нужно брать этот индекс, фамилию которую мы ищем,
// и подавать её в другую функцию, которая уже будет идти вниз и вверх пока фамилии элементов совпадают
// и смотреть по паспорту на совпадение
// int searchByPasport(const int id, const QString &passport)
// up = id
// down = id
// while(true)
// up = up + 1;
// down = down - 1;
//
// Можно вызывать эти две функции из какой-то одной большой функции по типу той которая сейчас внизу.






