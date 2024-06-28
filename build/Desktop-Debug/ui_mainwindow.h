/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionEdit;
    QWidget *centralwidget;
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *LoginButton;
    QPushButton *NewClient;
    QPushButton *AdminButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(776, 589);
        actionEdit = new QAction(MainWindow);
        actionEdit->setObjectName(QString::fromUtf8("actionEdit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 90, 311, 71));
        QFont font;
        font.setPointSize(35);
        font.setBold(true);
        label->setFont(font);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(227, 237, 301, 151));
        QFont font1;
        font1.setPointSize(15);
        layoutWidget->setFont(font1);
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        LoginButton = new QPushButton(layoutWidget);
        LoginButton->setObjectName(QString::fromUtf8("LoginButton"));
        LoginButton->setFont(font1);

        verticalLayout->addWidget(LoginButton);

        NewClient = new QPushButton(layoutWidget);
        NewClient->setObjectName(QString::fromUtf8("NewClient"));

        verticalLayout->addWidget(NewClient);

        AdminButton = new QPushButton(layoutWidget);
        AdminButton->setObjectName(QString::fromUtf8("AdminButton"));

        verticalLayout->addWidget(AdminButton);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionEdit->setText(QCoreApplication::translate("MainWindow", "Edit Clients", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Bank Account", nullptr));
        LoginButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        NewClient->setText(QCoreApplication::translate("MainWindow", "New Client", nullptr));
        AdminButton->setText(QCoreApplication::translate("MainWindow", "ADMIN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
