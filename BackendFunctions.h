#ifndef BACKENDFUNCTIONS_H
#define BACKENDFUNCTIONS_H


#include "PersonTableWidgetItem.h"

#include <QObject>
#include <QTableWidget>


class BackendFunctions : public QObject
{
    Q_OBJECT
public:
    explicit BackendFunctions(const QTableWidget* mainWindowTable,QObject *parent = nullptr);


signals:

private:
    friend class MainWindow;

    const QTableWidget *m_mainWindowTable = nullptr;

    QString binaryStringConcatenation(const QString &surname);

    int binarySearchSurname(const QString &surname);

    bool isSearchBinarySurnameIsHigher(const QString &searchSurnameBinary, const QString &compareSurnameBinary);

    int searchByPassportAndSurname(const QString &searchSurname, const QString &searchPassport);


};

#endif // BACKENDFUNCTIONS_H
