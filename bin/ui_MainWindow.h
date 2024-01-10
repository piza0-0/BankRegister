/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QTableWidget *tw_personList;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *l_surname;
    QLineEdit *le_surname;
    QLabel *l_name;
    QLineEdit *le_name;
    QLabel *l_patronymic;
    QLineEdit *le_patronymic;
    QLabel *l_passport;
    QLineEdit *le_passport;
    QLabel *l_phone;
    QLineEdit *le_phone;
    QListWidget *lw_checkBanks;
    QHBoxLayout *horizontalLayout;
    QPushButton *pb_select;
    QPushButton *pb_test;
    QSpacerItem *verticalSpacer;
    QLabel *l_logo;
    QSpacerItem *verticalSpacer_2;
    QListWidget *lw_bankList;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1200, 800);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(1200, 800));
        MainWindow->setMaximumSize(QSize(1200, 800));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        tw_personList = new QTableWidget(centralwidget);
        tw_personList->setObjectName(QString::fromUtf8("tw_personList"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(30);
        sizePolicy1.setVerticalStretch(60);
        sizePolicy1.setHeightForWidth(tw_personList->sizePolicy().hasHeightForWidth());
        tw_personList->setSizePolicy(sizePolicy1);
        tw_personList->setMinimumSize(QSize(610, 0));
        tw_personList->setMaximumSize(QSize(800, 800));
        tw_personList->setBaseSize(QSize(500, 500));

        gridLayout_2->addWidget(tw_personList, 0, 1, 2, 2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        l_surname = new QLabel(centralwidget);
        l_surname->setObjectName(QString::fromUtf8("l_surname"));

        gridLayout->addWidget(l_surname, 0, 0, 1, 1);

        le_surname = new QLineEdit(centralwidget);
        le_surname->setObjectName(QString::fromUtf8("le_surname"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(40);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(le_surname->sizePolicy().hasHeightForWidth());
        le_surname->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(le_surname, 0, 1, 1, 1);

        l_name = new QLabel(centralwidget);
        l_name->setObjectName(QString::fromUtf8("l_name"));

        gridLayout->addWidget(l_name, 1, 0, 1, 1);

        le_name = new QLineEdit(centralwidget);
        le_name->setObjectName(QString::fromUtf8("le_name"));
        sizePolicy2.setHeightForWidth(le_name->sizePolicy().hasHeightForWidth());
        le_name->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(le_name, 1, 1, 1, 1);

        l_patronymic = new QLabel(centralwidget);
        l_patronymic->setObjectName(QString::fromUtf8("l_patronymic"));

        gridLayout->addWidget(l_patronymic, 2, 0, 1, 1);

        le_patronymic = new QLineEdit(centralwidget);
        le_patronymic->setObjectName(QString::fromUtf8("le_patronymic"));
        sizePolicy2.setHeightForWidth(le_patronymic->sizePolicy().hasHeightForWidth());
        le_patronymic->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(le_patronymic, 2, 1, 1, 1);

        l_passport = new QLabel(centralwidget);
        l_passport->setObjectName(QString::fromUtf8("l_passport"));

        gridLayout->addWidget(l_passport, 3, 0, 1, 1);

        le_passport = new QLineEdit(centralwidget);
        le_passport->setObjectName(QString::fromUtf8("le_passport"));
        sizePolicy2.setHeightForWidth(le_passport->sizePolicy().hasHeightForWidth());
        le_passport->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(le_passport, 3, 1, 1, 1);

        l_phone = new QLabel(centralwidget);
        l_phone->setObjectName(QString::fromUtf8("l_phone"));

        gridLayout->addWidget(l_phone, 4, 0, 1, 1);

        le_phone = new QLineEdit(centralwidget);
        le_phone->setObjectName(QString::fromUtf8("le_phone"));
        sizePolicy2.setHeightForWidth(le_phone->sizePolicy().hasHeightForWidth());
        le_phone->setSizePolicy(sizePolicy2);
        le_phone->setMinimumSize(QSize(0, 0));

        gridLayout->addWidget(le_phone, 4, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        lw_checkBanks = new QListWidget(centralwidget);
        lw_checkBanks->setObjectName(QString::fromUtf8("lw_checkBanks"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lw_checkBanks->sizePolicy().hasHeightForWidth());
        lw_checkBanks->setSizePolicy(sizePolicy3);

        verticalLayout->addWidget(lw_checkBanks);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pb_select = new QPushButton(centralwidget);
        pb_select->setObjectName(QString::fromUtf8("pb_select"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(50);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(pb_select->sizePolicy().hasHeightForWidth());
        pb_select->setSizePolicy(sizePolicy4);
        pb_select->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout->addWidget(pb_select);

        pb_test = new QPushButton(centralwidget);
        pb_test->setObjectName(QString::fromUtf8("pb_test"));
        sizePolicy4.setHeightForWidth(pb_test->sizePolicy().hasHeightForWidth());
        pb_test->setSizePolicy(sizePolicy4);
        pb_test->setLayoutDirection(Qt::RightToLeft);

        horizontalLayout->addWidget(pb_test);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer);

        l_logo = new QLabel(centralwidget);
        l_logo->setObjectName(QString::fromUtf8("l_logo"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(l_logo->sizePolicy().hasHeightForWidth());
        l_logo->setSizePolicy(sizePolicy5);
        l_logo->setMinimumSize(QSize(250, 200));
        l_logo->setMaximumSize(QSize(16777215, 200));
        l_logo->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(l_logo);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_2);


        gridLayout_2->addLayout(verticalLayout_3, 0, 0, 2, 1);

        lw_bankList = new QListWidget(centralwidget);
        lw_bankList->setObjectName(QString::fromUtf8("lw_bankList"));
        QSizePolicy sizePolicy6(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(60);
        sizePolicy6.setVerticalStretch(40);
        sizePolicy6.setHeightForWidth(lw_bankList->sizePolicy().hasHeightForWidth());
        lw_bankList->setSizePolicy(sizePolicy6);
        lw_bankList->setMinimumSize(QSize(150, 0));
        lw_bankList->setMaximumSize(QSize(170, 400));

        gridLayout_2->addWidget(lw_bankList, 0, 3, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1200, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        l_surname->setText(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        l_name->setText(QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217", nullptr));
        l_patronymic->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        l_passport->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\201\320\277\320\276\321\200\321\202", nullptr));
        l_phone->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\273\320\265\321\204\320\276\320\275", nullptr));
        pb_select->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pb_test->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\321\201\321\202", nullptr));
        l_logo->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
