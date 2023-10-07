#ifndef PERSON_H
#define PERSON_H

#include <QObject>
#include <QString>
#include <QSharedPointer>


class Person : public QObject
{
    Q_OBJECT
public:
    explicit Person(QString pName, QString pAge, QString pGrade,QObject *parent = nullptr);
    const QString GetName();


signals:



private:
    //personal information (input)
    QString name;
    QString age;
    QString grade;

    QString Info;


};

#endif // PERSON_H
