#ifndef DIALOGPERSONEDIT_H
#define DIALOGPERSONEDIT_H

#include <QDialog>
#include <QString>

#include "person.h"

namespace Ui {
class DialogPersonEdit;
}

class DialogPersonEdit : public QDialog
{
    Q_OBJECT

public:
    explicit DialogPersonEdit(QWidget *parent = nullptr);
    ~DialogPersonEdit();

    void setPersonInfo(const Person* person);


    void setCurrentRowDialog (int newCurrentRow);

signals:
    void sendEditPerson(const QString &surname, const QString &name,
                        const QString &patronymic, const QString &age,
                        const QString &phone,int row);

private slots:
    void on_pb_dsave_clicked();

private:
    Ui::DialogPersonEdit *ui;
    QString m_name;
    QString m_surname;
    QString m_patronymic;
    QString m_age;
    QString m_phone;

    int m_currentRow;

};

#endif // DIALOGPERSONEDIT_H
