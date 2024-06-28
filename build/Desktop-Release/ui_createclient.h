/********************************************************************************
** Form generated from reading UI file 'createclient.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATECLIENT_H
#define UI_CREATECLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateClient
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QComboBox *AccountField;
    QSpacerItem *horizontalSpacer;
    QLineEdit *NameField;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QLineEdit *JobField;
    QLineEdit *PasswordField;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_7;
    QPushButton *CreateAccountButton;
    QSpacerItem *verticalSpacer_3;
    QLineEdit *CpfField;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_5;
    QLabel *label_8;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *AdressField;
    QLabel *label;
    QLabel *label_6;
    QDoubleSpinBox *SalaryField;

    void setupUi(QDialog *CreateClient)
    {
        if (CreateClient->objectName().isEmpty())
            CreateClient->setObjectName(QString::fromUtf8("CreateClient"));
        CreateClient->resize(640, 480);
        layoutWidget = new QWidget(CreateClient);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(1, -3, 641, 481));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font;
        font.setPointSize(16);
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 5, 1, 1, 1);

        AccountField = new QComboBox(layoutWidget);
        AccountField->addItem(QString());
        AccountField->addItem(QString());
        AccountField->addItem(QString());
        AccountField->setObjectName(QString::fromUtf8("AccountField"));

        gridLayout->addWidget(AccountField, 9, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 5, 0, 1, 1);

        NameField = new QLineEdit(layoutWidget);
        NameField->setObjectName(QString::fromUtf8("NameField"));

        gridLayout->addWidget(NameField, 4, 2, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 4, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 4);

        JobField = new QLineEdit(layoutWidget);
        JobField->setObjectName(QString::fromUtf8("JobField"));

        gridLayout->addWidget(JobField, 8, 2, 1, 1);

        PasswordField = new QLineEdit(layoutWidget);
        PasswordField->setObjectName(QString::fromUtf8("PasswordField"));

        gridLayout->addWidget(PasswordField, 9, 4, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 4, 3, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 3, 3, 1, 1);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        gridLayout->addWidget(label_7, 8, 1, 1, 1);

        CreateAccountButton = new QPushButton(layoutWidget);
        CreateAccountButton->setObjectName(QString::fromUtf8("CreateAccountButton"));
        CreateAccountButton->setFont(font);

        gridLayout->addWidget(CreateAccountButton, 11, 0, 1, 6, Qt::AlignHCenter);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 2, 3, 1, 1);

        CpfField = new QLineEdit(layoutWidget);
        CpfField->setObjectName(QString::fromUtf8("CpfField"));

        gridLayout->addWidget(CpfField, 4, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 8, 5, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 9, 1, 1, 1);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        gridLayout->addWidget(label_8, 9, 3, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 10, 3, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 12, 3, 1, 1);

        AdressField = new QLineEdit(layoutWidget);
        AdressField->setObjectName(QString::fromUtf8("AdressField"));

        gridLayout->addWidget(AdressField, 5, 2, 1, 3);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(30);
        label->setFont(font1);

        gridLayout->addWidget(label, 1, 0, 1, 6, Qt::AlignHCenter);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 8, 3, 1, 1);

        SalaryField = new QDoubleSpinBox(layoutWidget);
        SalaryField->setObjectName(QString::fromUtf8("SalaryField"));
        SalaryField->setMaximum(9999999999999999455752309870428160.000000000000000);

        gridLayout->addWidget(SalaryField, 8, 4, 1, 1);

        QWidget::setTabOrder(NameField, CpfField);
        QWidget::setTabOrder(CpfField, AdressField);
        QWidget::setTabOrder(AdressField, CreateAccountButton);

        retranslateUi(CreateClient);

        QMetaObject::connectSlotsByName(CreateClient);
    } // setupUi

    void retranslateUi(QDialog *CreateClient)
    {
        CreateClient->setWindowTitle(QCoreApplication::translate("CreateClient", "Dialog", nullptr));
        label_4->setText(QCoreApplication::translate("CreateClient", "Adress:", nullptr));
        AccountField->setItemText(0, QCoreApplication::translate("CreateClient", "Conta corrente", nullptr));
        AccountField->setItemText(1, QCoreApplication::translate("CreateClient", "Conta especial", nullptr));
        AccountField->setItemText(2, QCoreApplication::translate("CreateClient", "Conta Master", nullptr));

        AccountField->setPlaceholderText(QCoreApplication::translate("CreateClient", "Select", nullptr));
        label_2->setText(QCoreApplication::translate("CreateClient", "Name:", nullptr));
        label_3->setText(QCoreApplication::translate("CreateClient", "CPF:", nullptr));
        label_7->setText(QCoreApplication::translate("CreateClient", "Job:", nullptr));
        CreateAccountButton->setText(QCoreApplication::translate("CreateClient", "Create", nullptr));
        CpfField->setInputMask(QCoreApplication::translate("CreateClient", "000.000.000-00", nullptr));
        label_5->setText(QCoreApplication::translate("CreateClient", "Account:", nullptr));
        label_8->setText(QCoreApplication::translate("CreateClient", "Password:", nullptr));
        label->setText(QCoreApplication::translate("CreateClient", "Create Client", nullptr));
        label_6->setText(QCoreApplication::translate("CreateClient", "Salary:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateClient: public Ui_CreateClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATECLIENT_H
