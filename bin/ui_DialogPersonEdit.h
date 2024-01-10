/********************************************************************************
** Form generated from reading UI file 'DialogPersonEdit.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGPERSONEDIT_H
#define UI_DIALOGPERSONEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogPersonEdit
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QFormLayout *formLayout;
    QLabel *l_dsurname;
    QLineEdit *le_dsurname;
    QLabel *l_dname;
    QLineEdit *le_dname;
    QLabel *l_dpatronymic;
    QLineEdit *le_dpatronymic;
    QLabel *l_dpassport;
    QLineEdit *le_dpassport;
    QLabel *l_dtelephone;
    QLineEdit *le_dphone;
    QSpacerItem *horizontalSpacer_3;
    QListWidget *lw_personBanks;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pb_ddiscard;
    QPushButton *pb_dsave;

    void setupUi(QDialog *DialogPersonEdit)
    {
        if (DialogPersonEdit->objectName().isEmpty())
            DialogPersonEdit->setObjectName(QString::fromUtf8("DialogPersonEdit"));
        DialogPersonEdit->resize(600, 324);
        verticalLayout = new QVBoxLayout(DialogPersonEdit);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setVerticalSpacing(29);
        l_dsurname = new QLabel(DialogPersonEdit);
        l_dsurname->setObjectName(QString::fromUtf8("l_dsurname"));

        formLayout->setWidget(0, QFormLayout::LabelRole, l_dsurname);

        le_dsurname = new QLineEdit(DialogPersonEdit);
        le_dsurname->setObjectName(QString::fromUtf8("le_dsurname"));

        formLayout->setWidget(0, QFormLayout::FieldRole, le_dsurname);

        l_dname = new QLabel(DialogPersonEdit);
        l_dname->setObjectName(QString::fromUtf8("l_dname"));

        formLayout->setWidget(1, QFormLayout::LabelRole, l_dname);

        le_dname = new QLineEdit(DialogPersonEdit);
        le_dname->setObjectName(QString::fromUtf8("le_dname"));

        formLayout->setWidget(1, QFormLayout::FieldRole, le_dname);

        l_dpatronymic = new QLabel(DialogPersonEdit);
        l_dpatronymic->setObjectName(QString::fromUtf8("l_dpatronymic"));

        formLayout->setWidget(2, QFormLayout::LabelRole, l_dpatronymic);

        le_dpatronymic = new QLineEdit(DialogPersonEdit);
        le_dpatronymic->setObjectName(QString::fromUtf8("le_dpatronymic"));

        formLayout->setWidget(2, QFormLayout::FieldRole, le_dpatronymic);

        l_dpassport = new QLabel(DialogPersonEdit);
        l_dpassport->setObjectName(QString::fromUtf8("l_dpassport"));

        formLayout->setWidget(3, QFormLayout::LabelRole, l_dpassport);

        le_dpassport = new QLineEdit(DialogPersonEdit);
        le_dpassport->setObjectName(QString::fromUtf8("le_dpassport"));

        formLayout->setWidget(3, QFormLayout::FieldRole, le_dpassport);

        l_dtelephone = new QLabel(DialogPersonEdit);
        l_dtelephone->setObjectName(QString::fromUtf8("l_dtelephone"));

        formLayout->setWidget(4, QFormLayout::LabelRole, l_dtelephone);

        le_dphone = new QLineEdit(DialogPersonEdit);
        le_dphone->setObjectName(QString::fromUtf8("le_dphone"));

        formLayout->setWidget(4, QFormLayout::FieldRole, le_dphone);


        horizontalLayout_2->addLayout(formLayout);

        horizontalSpacer_3 = new QSpacerItem(15, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        lw_personBanks = new QListWidget(DialogPersonEdit);
        lw_personBanks->setObjectName(QString::fromUtf8("lw_personBanks"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lw_personBanks->sizePolicy().hasHeightForWidth());
        lw_personBanks->setSizePolicy(sizePolicy);
        lw_personBanks->setMinimumSize(QSize(180, 0));
        lw_personBanks->setMaximumSize(QSize(170, 16777215));

        horizontalLayout_2->addWidget(lw_personBanks);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pb_ddiscard = new QPushButton(DialogPersonEdit);
        pb_ddiscard->setObjectName(QString::fromUtf8("pb_ddiscard"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pb_ddiscard->sizePolicy().hasHeightForWidth());
        pb_ddiscard->setSizePolicy(sizePolicy1);
        pb_ddiscard->setMinimumSize(QSize(83, 37));
        pb_ddiscard->setMaximumSize(QSize(80, 37));

        horizontalLayout->addWidget(pb_ddiscard);

        pb_dsave = new QPushButton(DialogPersonEdit);
        pb_dsave->setObjectName(QString::fromUtf8("pb_dsave"));
        sizePolicy1.setHeightForWidth(pb_dsave->sizePolicy().hasHeightForWidth());
        pb_dsave->setSizePolicy(sizePolicy1);
        pb_dsave->setMinimumSize(QSize(83, 37));
        pb_dsave->setMaximumSize(QSize(75, 37));
        pb_dsave->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout->addWidget(pb_dsave);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DialogPersonEdit);

        QMetaObject::connectSlotsByName(DialogPersonEdit);
    } // setupUi

    void retranslateUi(QDialog *DialogPersonEdit)
    {
        DialogPersonEdit->setWindowTitle(QCoreApplication::translate("DialogPersonEdit", "Dialog", nullptr));
        l_dsurname->setText(QCoreApplication::translate("DialogPersonEdit", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        l_dname->setText(QCoreApplication::translate("DialogPersonEdit", "\320\230\320\274\321\217", nullptr));
        l_dpatronymic->setText(QCoreApplication::translate("DialogPersonEdit", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        l_dpassport->setText(QCoreApplication::translate("DialogPersonEdit", "\320\237\320\260\321\201\320\277\320\276\321\200\321\202", nullptr));
        l_dtelephone->setText(QCoreApplication::translate("DialogPersonEdit", "\320\242\320\265\320\273\320\265\321\204\320\276\320\275", nullptr));
        pb_ddiscard->setText(QCoreApplication::translate("DialogPersonEdit", "\320\236\321\202\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        pb_dsave->setText(QCoreApplication::translate("DialogPersonEdit", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogPersonEdit: public Ui_DialogPersonEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGPERSONEDIT_H
