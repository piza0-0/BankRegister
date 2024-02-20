#ifndef DIALOGPERSONEDIT_H
#define DIALOGPERSONEDIT_H

#include <QDialog>
#include <QString>
#include <QMessageBox>
#include <QCloseEvent>

#include "Person.h"

namespace Ui {
class DialogPersonEdit;
}

class DialogPersonEdit : public QDialog
{
    Q_OBJECT

public:
    explicit DialogPersonEdit(QWidget *parent = nullptr);
    ~DialogPersonEdit();

    void setPersonInfo(const Person* person, const QStringList &bankList);

    void setCurrentRowDialog (int newCurrentRow);

    const QString &name() const;

    const QString &surname() const;

    const QString &patronymic() const;

    const QString &passport() const;

    const QString &phone() const;

    const QString &oldSurname() const;

    const QString &oldPassport() const;

signals:
    void editPerson(const QList<QListWidgetItem*> &onEditPersonBanks);

private slots:
    void on_pb_dsave_clicked();

    void on_pb_ddiscard_clicked();

private:
    Ui::DialogPersonEdit *ui;
    QString m_name;
    QString m_surname;
    QString m_patronymic;
    QString m_passport;
    QString m_phone;
    QString m_oldSurname;
    QString m_oldPassport;

};

#endif // DIALOGPERSONEDIT_H
