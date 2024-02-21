#include "BackendFunctions.h"

BackendFunctions::BackendFunctions(const QTableWidget* mainWindowTable, QObject *parent)
    : QObject{parent}
{
    m_mainWindowTable = mainWindowTable;
}

int BackendFunctions::binarySearchSurname(const QString &surname)
{
    QString searchSurnameBinary = binaryStringConcatenation(surname);
    int rightBorder = m_mainWindowTable->rowCount()-1; //ссылаться на передаваемую таблицу
    int leftBorder = 0;
    int middle = 0;

    while (rightBorder >= leftBorder) {
        if (leftBorder == rightBorder){
            return leftBorder;
        }
        middle = (rightBorder + leftBorder) / 2;

        PersonTableWidgetItem* pComparePerson = dynamic_cast<PersonTableWidgetItem*>(m_mainWindowTable->item(middle,0));
        QString compareSurnameBinary = binaryStringConcatenation(pComparePerson->pPerson()->getSurname());

        if(compareSurnameBinary != searchSurnameBinary
                && isSearchBinarySurnameIsHigher(searchSurnameBinary, compareSurnameBinary)){
            leftBorder = middle + 1;
        }else if(compareSurnameBinary != searchSurnameBinary
                 && (!isSearchBinarySurnameIsHigher(searchSurnameBinary, compareSurnameBinary))){
            rightBorder = middle - 1;
        }else{
            return middle;
        }
    }
    return -1;
}

QString BackendFunctions::binaryStringConcatenation(const QString &surname)
{
    QString binaryStringSurname;

    for(int i = 0; i < surname.size(); ++i){
        int letter = surname.at(i).unicode();
        binaryStringSurname.push_back(QString::number(letter));
    }
    return binaryStringSurname;
}

bool BackendFunctions::isSearchBinarySurnameIsHigher(const QString &searchSurnameBinary, const QString &compareSurnameBinary)
{

    for (int i = 0; i < searchSurnameBinary.size() && i < compareSurnameBinary; ++i){
        if (searchSurnameBinary.at(i) > compareSurnameBinary.at(i)){
            return 1;
        }
        if (searchSurnameBinary.at(i) < compareSurnameBinary.at(i)){
            return 0;
        }
    }
    return 1;
}

int BackendFunctions::searchByPassportAndSurname(const QString &searchSurname, const QString &searchPassport)
{
    int rowWithCurrentSurname = binarySearchSurname(searchSurname);
    PersonTableWidgetItem *pComparePerson = dynamic_cast<PersonTableWidgetItem*>(m_mainWindowTable->item(rowWithCurrentSurname,0));
    if(pComparePerson->pPerson()->getPassport() == searchPassport){
        return rowWithCurrentSurname;
    }
    if (rowWithCurrentSurname != -1){
        int downCounter = rowWithCurrentSurname;
        int upCounter = rowWithCurrentSurname;

        while (downCounter > 0 || upCounter <= m_mainWindowTable->rowCount()) {
            --downCounter;
            ++upCounter;
            if (downCounter >= 0){
                pComparePerson = dynamic_cast<PersonTableWidgetItem*>(m_mainWindowTable->item(downCounter,0));
                if (pComparePerson->pPerson()->getPassport() == searchPassport){

                    return downCounter;
                }
            }
            if (upCounter <= m_mainWindowTable->rowCount()){
                pComparePerson = dynamic_cast<PersonTableWidgetItem*>(m_mainWindowTable->item(upCounter,0));
                if (pComparePerson->pPerson()->getPassport() == searchPassport){

                    return upCounter;
                }
            }
        }
    }
    return -1;
}
