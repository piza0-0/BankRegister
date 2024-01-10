/********************************************************************************
** Form generated from reading UI file 'RegistrationDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATIONDIALOG_H
#define UI_REGISTRATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RegistrationDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *l_logo;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QLabel *l_newLog;
    QLineEdit *le_newLog;
    QSpacerItem *verticalSpacer_2;
    QLabel *l_newPass;
    QLineEdit *le_newPass;
    QSpacerItem *vs_middle;
    QLabel *l_wrongData;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pb_accept;

    void setupUi(QDialog *RegistrationDialog)
    {
        if (RegistrationDialog->objectName().isEmpty())
            RegistrationDialog->setObjectName(QString::fromUtf8("RegistrationDialog"));
        RegistrationDialog->resize(350, 400);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RegistrationDialog->sizePolicy().hasHeightForWidth());
        RegistrationDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(RegistrationDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(30, 20, 30, 20);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        l_logo = new QLabel(RegistrationDialog);
        l_logo->setObjectName(QString::fromUtf8("l_logo"));
        l_logo->setEnabled(true);
        sizePolicy.setHeightForWidth(l_logo->sizePolicy().hasHeightForWidth());
        l_logo->setSizePolicy(sizePolicy);
        l_logo->setMinimumSize(QSize(175, 70));
        l_logo->setMaximumSize(QSize(175, 70));
        l_logo->setLayoutDirection(Qt::RightToLeft);
        l_logo->setScaledContents(false);
        l_logo->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(l_logo);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        l_newLog = new QLabel(RegistrationDialog);
        l_newLog->setObjectName(QString::fromUtf8("l_newLog"));
        QFont font;
        font.setPointSize(14);
        l_newLog->setFont(font);

        verticalLayout->addWidget(l_newLog);

        le_newLog = new QLineEdit(RegistrationDialog);
        le_newLog->setObjectName(QString::fromUtf8("le_newLog"));

        verticalLayout->addWidget(le_newLog);

        verticalSpacer_2 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        l_newPass = new QLabel(RegistrationDialog);
        l_newPass->setObjectName(QString::fromUtf8("l_newPass"));
        l_newPass->setFont(font);

        verticalLayout->addWidget(l_newPass);

        le_newPass = new QLineEdit(RegistrationDialog);
        le_newPass->setObjectName(QString::fromUtf8("le_newPass"));

        verticalLayout->addWidget(le_newPass);

        vs_middle = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(vs_middle);

        l_wrongData = new QLabel(RegistrationDialog);
        l_wrongData->setObjectName(QString::fromUtf8("l_wrongData"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(l_wrongData->sizePolicy().hasHeightForWidth());
        l_wrongData->setSizePolicy(sizePolicy1);
        l_wrongData->setMinimumSize(QSize(0, 60));
        l_wrongData->setMaximumSize(QSize(16777215, 60));
        QFont font1;
        font1.setPointSize(13);
        l_wrongData->setFont(font1);
        l_wrongData->setAcceptDrops(false);
        l_wrongData->setInputMethodHints(Qt::ImhNone);
        l_wrongData->setTextFormat(Qt::AutoText);
        l_wrongData->setScaledContents(false);
        l_wrongData->setAlignment(Qt::AlignCenter);
        l_wrongData->setWordWrap(true);

        verticalLayout->addWidget(l_wrongData);

        verticalSpacer_3 = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        pb_accept = new QPushButton(RegistrationDialog);
        pb_accept->setObjectName(QString::fromUtf8("pb_accept"));
        pb_accept->setMinimumSize(QSize(0, 35));
        pb_accept->setMaximumSize(QSize(16777215, 35));

        verticalLayout->addWidget(pb_accept);


        retranslateUi(RegistrationDialog);

        QMetaObject::connectSlotsByName(RegistrationDialog);
    } // setupUi

    void retranslateUi(QDialog *RegistrationDialog)
    {
        RegistrationDialog->setWindowTitle(QCoreApplication::translate("RegistrationDialog", "Dialog", nullptr));
        l_logo->setText(QCoreApplication::translate("RegistrationDialog", "TextLabel", nullptr));
        l_newLog->setText(QCoreApplication::translate("RegistrationDialog", "\320\237\321\200\320\270\320\264\321\203\320\274\320\260\320\271\321\202\320\265 \320\273\320\276\320\263\320\270\320\275:", nullptr));
        l_newPass->setText(QCoreApplication::translate("RegistrationDialog", "\320\237\321\200\320\270\320\264\321\203\320\274\320\260\320\271\321\202\320\265 \320\277\320\260\321\200\320\276\320\273\321\214:", nullptr));
        l_wrongData->setText(QCoreApplication::translate("RegistrationDialog", "\320\237\320\260\321\200\320\276\320\273\321\214 \321\201\320\273\320\270\321\210\320\272\320\276\320\274 \320\272\320\276\321\200\320\276\321\202\320\272\320\270\320\271. \320\237\320\276\320\266\320\260\320\273\321\203\320\271\321\201\321\202\320\260, \321\203\320\272\320\260\320\266\320\270\321\202\320\265 \320\277\320\260\321\200\320\276\320\273\321\214 \320\275\320\265 \320\274\320\265\320\275\320\265\320\265 4 \321\201\320\270\320\274\320\262\320\276\320\273\320\276\320\262", nullptr));
        pb_accept->setText(QCoreApplication::translate("RegistrationDialog", "\320\227\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\321\202\321\214\321\201\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegistrationDialog: public Ui_RegistrationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATIONDIALOG_H
