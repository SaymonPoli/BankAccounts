/********************************************************************************
** Form generated from reading UI file 'editclients.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITCLIENTS_H
#define UI_EDITCLIENTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_editClients
{
public:
    QTableWidget *AccountsTable;
    QPushButton *pushButton;

    void setupUi(QDialog *editClients)
    {
        if (editClients->objectName().isEmpty())
            editClients->setObjectName(QString::fromUtf8("editClients"));
        editClients->resize(931, 591);
        AccountsTable = new QTableWidget(editClients);
        AccountsTable->setObjectName(QString::fromUtf8("AccountsTable"));
        AccountsTable->setGeometry(QRect(20, 20, 891, 511));
        pushButton = new QPushButton(editClients);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(820, 550, 88, 26));

        retranslateUi(editClients);

        QMetaObject::connectSlotsByName(editClients);
    } // setupUi

    void retranslateUi(QDialog *editClients)
    {
        editClients->setWindowTitle(QCoreApplication::translate("editClients", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("editClients", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editClients: public Ui_editClients {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITCLIENTS_H
