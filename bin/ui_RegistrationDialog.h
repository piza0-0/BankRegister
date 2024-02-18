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
    QLabel *l_wrongData_reg;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *pb_accept;
    QSpacerItem *horizontalSpacer_10;

    void setupUi(QDialog *RegistrationDialog)
    {
        if (RegistrationDialog->objectName().isEmpty())
            RegistrationDialog->setObjectName(QString::fromUtf8("RegistrationDialog"));
        RegistrationDialog->resize(340, 400);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RegistrationDialog->sizePolicy().hasHeightForWidth());
        RegistrationDialog->setSizePolicy(sizePolicy);
        RegistrationDialog->setMinimumSize(QSize(340, 400));
        RegistrationDialog->setMaximumSize(QSize(424, 413));
        verticalLayout = new QVBoxLayout(RegistrationDialog);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(25, 15, 25, 25);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, 10);
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

        verticalSpacer = new QSpacerItem(25, 25, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        l_newLog = new QLabel(RegistrationDialog);
        l_newLog->setObjectName(QString::fromUtf8("l_newLog"));
        l_newLog->setMinimumSize(QSize(0, 25));
        l_newLog->setMaximumSize(QSize(16777215, 25));
        QFont font;
        font.setPointSize(12);
        l_newLog->setFont(font);
        l_newLog->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        verticalLayout->addWidget(l_newLog);

        le_newLog = new QLineEdit(RegistrationDialog);
        le_newLog->setObjectName(QString::fromUtf8("le_newLog"));
        le_newLog->setMinimumSize(QSize(0, 40));

        verticalLayout->addWidget(le_newLog);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        l_newPass = new QLabel(RegistrationDialog);
        l_newPass->setObjectName(QString::fromUtf8("l_newPass"));
        l_newPass->setMinimumSize(QSize(0, 25));
        l_newPass->setMaximumSize(QSize(16777215, 25));
        l_newPass->setSizeIncrement(QSize(0, 0));
        l_newPass->setFont(font);
        l_newPass->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);
        l_newPass->setTextInteractionFlags(Qt::NoTextInteraction);

        verticalLayout->addWidget(l_newPass);

        le_newPass = new QLineEdit(RegistrationDialog);
        le_newPass->setObjectName(QString::fromUtf8("le_newPass"));
        le_newPass->setMinimumSize(QSize(0, 40));

        verticalLayout->addWidget(le_newPass);

        l_wrongData_reg = new QLabel(RegistrationDialog);
        l_wrongData_reg->setObjectName(QString::fromUtf8("l_wrongData_reg"));
        sizePolicy.setHeightForWidth(l_wrongData_reg->sizePolicy().hasHeightForWidth());
        l_wrongData_reg->setSizePolicy(sizePolicy);
        l_wrongData_reg->setMinimumSize(QSize(280, 60));
        l_wrongData_reg->setMaximumSize(QSize(340, 50));
        l_wrongData_reg->setFont(font);
        l_wrongData_reg->setAcceptDrops(false);
        l_wrongData_reg->setInputMethodHints(Qt::ImhNone);
        l_wrongData_reg->setTextFormat(Qt::AutoText);
        l_wrongData_reg->setScaledContents(false);
        l_wrongData_reg->setAlignment(Qt::AlignCenter);
        l_wrongData_reg->setWordWrap(true);
        l_wrongData_reg->setTextInteractionFlags(Qt::NoTextInteraction);

        verticalLayout->addWidget(l_wrongData_reg);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, -1, -1, 5);
        horizontalSpacer_9 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);

        pb_accept = new QPushButton(RegistrationDialog);
        pb_accept->setObjectName(QString::fromUtf8("pb_accept"));
        sizePolicy.setHeightForWidth(pb_accept->sizePolicy().hasHeightForWidth());
        pb_accept->setSizePolicy(sizePolicy);
        pb_accept->setMinimumSize(QSize(150, 40));
        pb_accept->setMaximumSize(QSize(170, 40));

        horizontalLayout_5->addWidget(pb_accept);

        horizontalSpacer_10 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_10);


        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(RegistrationDialog);

        QMetaObject::connectSlotsByName(RegistrationDialog);
    } // setupUi

    void retranslateUi(QDialog *RegistrationDialog)
    {
        RegistrationDialog->setWindowTitle(QCoreApplication::translate("RegistrationDialog", "Dialog", nullptr));
        l_logo->setText(QCoreApplication::translate("RegistrationDialog", "TextLabel", nullptr));
        l_newLog->setText(QCoreApplication::translate("RegistrationDialog", "\320\237\321\200\320\270\320\264\321\203\320\274\320\260\320\271\321\202\320\265 \320\273\320\276\320\263\320\270\320\275", nullptr));
        l_newPass->setText(QCoreApplication::translate("RegistrationDialog", "\320\237\321\200\320\270\320\264\321\203\320\274\320\260\320\271\321\202\320\265 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        l_wrongData_reg->setText(QCoreApplication::translate("RegistrationDialog", "\320\237\320\260\321\200\320\276\320\273\321\214 \321\201\320\273\320\270\321\210\320\272\320\276\320\274 \320\272\320\276\321\200\320\276\321\202\320\272\320\270\320\271. \320\243\320\272\320\260\320\266\320\270\321\202\320\265 \320\277\320\260\321\200\320\276\320\273\321\214 \320\275\320\265 \320\274\320\265\320\275\320\265\320\265 4 \321\201\320\270\320\274\320\262\320\276\320\273\320\276\320\262", nullptr));
        pb_accept->setText(QCoreApplication::translate("RegistrationDialog", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegistrationDialog: public Ui_RegistrationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATIONDIALOG_H
