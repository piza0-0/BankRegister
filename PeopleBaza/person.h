#ifndef PERSON_H
#define PERSON_H

#include <QObject>
#include <QString>
#include <QList>
#include <QListWidgetItem>



class Person : public QObject
{
    Q_OBJECT
public:
    explicit Person(QString surname, QString name, QString patronymic, QString age, QString phone,QList <QListWidgetItem*> personBanks,QObject *parent = nullptr);
    ~Person();

    const QString &getName() const;
    const QString &getSurname() const;
    const QString &getPatronymic() const;
    const QString &getAge() const;
    const QString &getPhone() const;


    const QList<QListWidgetItem *> &personBanks() const;

signals:



private:
    //personal information (input)
    QString m_name;
    QString m_surname;
    QString m_patronymic;
    QString m_age;
    QString m_phone;
    QList <QListWidgetItem*> m_personBanks;

};

#endif // PERSON_H
