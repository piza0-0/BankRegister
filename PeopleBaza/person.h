#ifndef PERSON_H
#define PERSON_H

#include <QObject>
#include <QString>



class Person : public QObject
{
    Q_OBJECT
public:
    explicit Person(QString name, QString surname, QString patronymic, QString age, QString phone,QObject *parent = nullptr);
    ~Person();

    const QString &getName() const;
    const QString &getSurname() const;
    const QString &getPatronymic() const;
    const QString &getAge() const;
    const QString &getPhone() const;


signals:



private:
    //personal information (input)
    QString m_name;
    QString m_surname;
    QString m_patronymic;
    QString m_age;
    QString m_phone;
};

#endif // PERSON_H
