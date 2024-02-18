/********************************************************************************
** Form generated from reading UI file 'AuthorizationDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHORIZATIONDIALOG_H
#define UI_AUTHORIZATIONDIALOG_H

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

class Ui_AuthorizationDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *l_logo;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QLabel *l_login;
    QLineEdit *le_login;
    QLabel *l_password;
    QLineEdit *le_password;
    QSpacerItem *vs_middle;
    QLabel *l_wrongData;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pb_accept;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QDialog *AuthorizationDialog)
    {
        if (AuthorizationDialog->objectName().isEmpty())
            AuthorizationDialog->setObjectName(QString::fromUtf8("AuthorizationDialog"));
        AuthorizationDialog->setEnabled(true);
        AuthorizationDialog->resize(340, 400);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AuthorizationDialog->sizePolicy().hasHeightForWidth());
        AuthorizationDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(AuthorizationDialog);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(25, 15, 25, 20);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        l_logo = new QLabel(AuthorizationDialog);
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

        verticalSpacer = new QSpacerItem(20, 15, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        l_login = new QLabel(AuthorizationDialog);
        l_login->setObjectName(QString::fromUtf8("l_login"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(l_login->sizePolicy().hasHeightForWidth());
        l_login->setSizePolicy(sizePolicy1);
        l_login->setMinimumSize(QSize(0, 25));
        l_login->setMaximumSize(QSize(16777215, 25));
        QFont font;
        font.setPointSize(12);
        l_login->setFont(font);
        l_login->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        l_login->setTextInteractionFlags(Qt::NoTextInteraction);

        verticalLayout->addWidget(l_login);

        le_login = new QLineEdit(AuthorizationDialog);
        le_login->setObjectName(QString::fromUtf8("le_login"));
        le_login->setMinimumSize(QSize(0, 40));
        le_login->setMaximumSize(QSize(16777215, 40));

        verticalLayout->addWidget(le_login);

        l_password = new QLabel(AuthorizationDialog);
        l_password->setObjectName(QString::fromUtf8("l_password"));
        sizePolicy1.setHeightForWidth(l_password->sizePolicy().hasHeightForWidth());
        l_password->setSizePolicy(sizePolicy1);
        l_password->setMinimumSize(QSize(0, 28));
        l_password->setMaximumSize(QSize(16777215, 28));
        l_password->setFont(font);
        l_password->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        l_password->setTextInteractionFlags(Qt::NoTextInteraction);

        verticalLayout->addWidget(l_password);

        le_password = new QLineEdit(AuthorizationDialog);
        le_password->setObjectName(QString::fromUtf8("le_password"));
        le_password->setMinimumSize(QSize(0, 40));
        le_password->setMaximumSize(QSize(16777215, 40));
        le_password->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout->addWidget(le_password);

        vs_middle = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(vs_middle);

        l_wrongData = new QLabel(AuthorizationDialog);
        l_wrongData->setObjectName(QString::fromUtf8("l_wrongData"));
        l_wrongData->setEnabled(false);
        sizePolicy1.setHeightForWidth(l_wrongData->sizePolicy().hasHeightForWidth());
        l_wrongData->setSizePolicy(sizePolicy1);
        l_wrongData->setMinimumSize(QSize(0, 20));
        l_wrongData->setMaximumSize(QSize(16777215, 15));
        QFont font1;
        font1.setPointSize(14);
        l_wrongData->setFont(font1);
        l_wrongData->setAlignment(Qt::AlignCenter);
        l_wrongData->setTextInteractionFlags(Qt::NoTextInteraction);

        verticalLayout->addWidget(l_wrongData);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, -1, 0, -1);
        horizontalSpacer_3 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        pb_accept = new QPushButton(AuthorizationDialog);
        pb_accept->setObjectName(QString::fromUtf8("pb_accept"));
        pb_accept->setEnabled(true);
        sizePolicy.setHeightForWidth(pb_accept->sizePolicy().hasHeightForWidth());
        pb_accept->setSizePolicy(sizePolicy);
        pb_accept->setMinimumSize(QSize(170, 35));
        pb_accept->setMaximumSize(QSize(150, 40));
        pb_accept->setSizeIncrement(QSize(0, 0));

        horizontalLayout_2->addWidget(pb_accept);

        horizontalSpacer_4 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(AuthorizationDialog);

        QMetaObject::connectSlotsByName(AuthorizationDialog);
    } // setupUi

    void retranslateUi(QDialog *AuthorizationDialog)
    {
        AuthorizationDialog->setWindowTitle(QCoreApplication::translate("AuthorizationDialog", "Dialog", nullptr));
        l_logo->setText(QCoreApplication::translate("AuthorizationDialog", "TextLabel", nullptr));
        l_login->setText(QCoreApplication::translate("AuthorizationDialog", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        l_password->setText(QCoreApplication::translate("AuthorizationDialog", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        l_wrongData->setText(QCoreApplication::translate("AuthorizationDialog", "\320\235\320\265\320\262\320\265\321\200\320\275\321\213\320\271 \320\273\320\276\320\263\320\270\320\275 \320\270\320\273\320\270 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        pb_accept->setText(QCoreApplication::translate("AuthorizationDialog", "\320\222\320\276\320\271\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AuthorizationDialog: public Ui_AuthorizationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHORIZATIONDIALOG_H
