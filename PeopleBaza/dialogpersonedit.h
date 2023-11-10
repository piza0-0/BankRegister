#ifndef DIALOGPERSONEDIT_H
#define DIALOGPERSONEDIT_H

#include <QDialog>

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

    void fillFields(Person*);

private:
    Ui::DialogPersonEdit *ui;
};

#endif // DIALOGPERSONEDIT_H