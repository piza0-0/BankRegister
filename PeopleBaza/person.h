#ifndef PERSON_H
#define PERSON_H

#include <QObject>
#include <QString>



class Person : public QObject
{
    Q_OBJECT
public:
    explicit Person(QString Name, QString Age, QString Grade,QObject *parent = nullptr);
    ~Person();
    const QString getName() const;


    const QString getAge() const;

    const QString getGrade() const;

signals:



private:
    //personal information (input)
    QString m_name;
    QString m_age;
    QString m_grade;




};

#endif // PERSON_H
