/********************************************************************************
** Form generated from reading UI file 'createaccount.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEACCOUNT_H
#define UI_CREATEACCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateAccount
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label;
    QPushButton *CreateAccountButton;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_4;
    QLineEdit *NameField;
    QLabel *label_5;
    QLineEdit *SalaryField;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_6;
    QLabel *label_7;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *EmailField;
    QLineEdit *CpfField;
    QLineEdit *AdressField;
    QLabel *label_8;
    QComboBox *AccountField;
    QLineEdit *ClientPasswordField;

    void setupUi(QDialog *CreateAccount)
    {
        if (CreateAccount->objectName().isEmpty())
            CreateAccount->setObjectName(QString::fromUtf8("CreateAccount"));
        CreateAccount->resize(640, 480);
        gridLayoutWidget = new QWidget(CreateAccount);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 641, 481));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font;
        font.setPointSize(16);
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 5, 2, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 6, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(30);
        label->setFont(font1);

        gridLayout->addWidget(label, 1, 0, 1, 4, Qt::AlignHCenter);

        CreateAccountButton = new QPushButton(gridLayoutWidget);
        CreateAccountButton->setObjectName(QString::fromUtf8("CreateAccountButton"));
        CreateAccountButton->setFont(font);

        gridLayout->addWidget(CreateAccountButton, 9, 0, 1, 4, Qt::AlignHCenter);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 5, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 4, 0, 1, 4);

        NameField = new QLineEdit(gridLayoutWidget);
        NameField->setObjectName(QString::fromUtf8("NameField"));

        gridLayout->addWidget(NameField, 5, 1, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 8, 0, 1, 1);

        SalaryField = new QLineEdit(gridLayoutWidget);
        SalaryField->setObjectName(QString::fromUtf8("SalaryField"));

        gridLayout->addWidget(SalaryField, 7, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 11, 2, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 7, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        gridLayout->addWidget(label_7, 7, 2, 1, 1, Qt::AlignVCenter);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 0, 0, 1, 4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 3, 0, 1, 4);

        EmailField = new QLineEdit(gridLayoutWidget);
        EmailField->setObjectName(QString::fromUtf8("EmailField"));

        gridLayout->addWidget(EmailField, 7, 3, 1, 1);

        CpfField = new QLineEdit(gridLayoutWidget);
        CpfField->setObjectName(QString::fromUtf8("CpfField"));

        gridLayout->addWidget(CpfField, 5, 3, 1, 1);

        AdressField = new QLineEdit(gridLayoutWidget);
        AdressField->setObjectName(QString::fromUtf8("AdressField"));

        gridLayout->addWidget(AdressField, 6, 1, 1, 3);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        gridLayout->addWidget(label_8, 8, 2, 1, 1);

        AccountField = new QComboBox(gridLayoutWidget);
        AccountField->addItem(QString());
        AccountField->addItem(QString());
        AccountField->addItem(QString());
        AccountField->setObjectName(QString::fromUtf8("AccountField"));

        gridLayout->addWidget(AccountField, 8, 1, 1, 1);

        ClientPasswordField = new QLineEdit(gridLayoutWidget);
        ClientPasswordField->setObjectName(QString::fromUtf8("ClientPasswordField"));

        gridLayout->addWidget(ClientPasswordField, 8, 3, 1, 1);


        retranslateUi(CreateAccount);

        QMetaObject::connectSlotsByName(CreateAccount);
    } // setupUi

    void retranslateUi(QDialog *CreateAccount)
    {
        CreateAccount->setWindowTitle(QCoreApplication::translate("CreateAccount", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("CreateAccount", "CPF:", nullptr));
        label_4->setText(QCoreApplication::translate("CreateAccount", "Adress:", nullptr));
        label->setText(QCoreApplication::translate("CreateAccount", "Create Client", nullptr));
        CreateAccountButton->setText(QCoreApplication::translate("CreateAccount", "Create", nullptr));
        label_2->setText(QCoreApplication::translate("CreateAccount", "Name:", nullptr));
        label_5->setText(QCoreApplication::translate("CreateAccount", "Account:", nullptr));
        label_6->setText(QCoreApplication::translate("CreateAccount", "Salary:", nullptr));
        label_7->setText(QCoreApplication::translate("CreateAccount", "Job:", nullptr));
        CpfField->setInputMask(QCoreApplication::translate("CreateAccount", "000.000.000-00", nullptr));
        label_8->setText(QCoreApplication::translate("CreateAccount", "Password:", nullptr));
        AccountField->setItemText(0, QCoreApplication::translate("CreateAccount", "Conta corrente", nullptr));
        AccountField->setItemText(1, QCoreApplication::translate("CreateAccount", "Conta especial", nullptr));
        AccountField->setItemText(2, QCoreApplication::translate("CreateAccount", "Conta Master", nullptr));

        AccountField->setPlaceholderText(QCoreApplication::translate("CreateAccount", "Select", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateAccount: public Ui_CreateAccount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEACCOUNT_H
