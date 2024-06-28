/********************************************************************************
** Form generated from reading UI file 'accountoperations.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTOPERATIONS_H
#define UI_ACCOUNTOPERATIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AccountOperations
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_3;
    QRadioButton *Withdraw;
    QSpacerItem *verticalSpacer_3;
    QLabel *AccountBalance;
    QLabel *label_6;
    QSpacerItem *verticalSpacer;
    QRadioButton *Transfer;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_2;
    QLabel *WindowTitle;
    QLineEdit *To;
    QGridLayout *gridLayout_2;
    QPushButton *Confirm;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label_4;
    QSpacerItem *verticalSpacer_6;
    QRadioButton *Deposit;
    QLabel *AcountCredit;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_4;
    QDoubleSpinBox *Value;

    void setupUi(QDialog *AccountOperations)
    {
        if (AccountOperations->objectName().isEmpty())
            AccountOperations->setObjectName(QString::fromUtf8("AccountOperations"));
        AccountOperations->resize(640, 480);
        gridLayoutWidget = new QWidget(AccountOperations);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 641, 481));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 7, 3, 1, 1);

        Withdraw = new QRadioButton(gridLayoutWidget);
        Withdraw->setObjectName(QString::fromUtf8("Withdraw"));
        QFont font;
        font.setPointSize(16);
        Withdraw->setFont(font);

        gridLayout->addWidget(Withdraw, 7, 4, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 5, 1, 1, 1);

        AccountBalance = new QLabel(gridLayoutWidget);
        AccountBalance->setObjectName(QString::fromUtf8("AccountBalance"));

        gridLayout->addWidget(AccountBalance, 3, 2, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        label_6->setFont(font1);

        gridLayout->addWidget(label_6, 3, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        Transfer = new QRadioButton(gridLayoutWidget);
        Transfer->setObjectName(QString::fromUtf8("Transfer"));
        Transfer->setFont(font);

        gridLayout->addWidget(Transfer, 8, 4, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 2, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 6, 1, 1, 1);

        WindowTitle = new QLabel(gridLayoutWidget);
        WindowTitle->setObjectName(QString::fromUtf8("WindowTitle"));
        QFont font2;
        font2.setPointSize(30);
        font2.setBold(true);
        WindowTitle->setFont(font2);

        gridLayout->addWidget(WindowTitle, 1, 1, 1, 4, Qt::AlignHCenter|Qt::AlignTop);

        To = new QLineEdit(gridLayoutWidget);
        To->setObjectName(QString::fromUtf8("To"));
        To->setEnabled(false);
        QFont font3;
        font3.setPointSize(12);
        To->setFont(font3);

        gridLayout->addWidget(To, 8, 2, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        Confirm = new QPushButton(gridLayoutWidget);
        Confirm->setObjectName(QString::fromUtf8("Confirm"));

        gridLayout_2->addWidget(Confirm, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 11, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 8, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 8, 5, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        gridLayout->addWidget(label_4, 3, 1, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 4, 1, 1, 1);

        Deposit = new QRadioButton(gridLayoutWidget);
        Deposit->setObjectName(QString::fromUtf8("Deposit"));
        Deposit->setFont(font);

        gridLayout->addWidget(Deposit, 6, 4, 1, 1);

        AcountCredit = new QLabel(gridLayoutWidget);
        AcountCredit->setObjectName(QString::fromUtf8("AcountCredit"));

        gridLayout->addWidget(AcountCredit, 3, 4, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setEnabled(true);
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 8, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 11, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 12, 1, 1, 1);

        Value = new QDoubleSpinBox(gridLayoutWidget);
        Value->setObjectName(QString::fromUtf8("Value"));
        Value->setMaximum(1000000000000000019884624838656.000000000000000);

        gridLayout->addWidget(Value, 6, 2, 1, 1);


        retranslateUi(AccountOperations);

        QMetaObject::connectSlotsByName(AccountOperations);
    } // setupUi

    void retranslateUi(QDialog *AccountOperations)
    {
        AccountOperations->setWindowTitle(QCoreApplication::translate("AccountOperations", "Dialog", nullptr));
        Withdraw->setText(QCoreApplication::translate("AccountOperations", "Withdraw", nullptr));
        AccountBalance->setText(QCoreApplication::translate("AccountOperations", "PlaceHolder", nullptr));
        label_6->setText(QCoreApplication::translate("AccountOperations", "Credit:", nullptr));
        Transfer->setText(QCoreApplication::translate("AccountOperations", "Transfer", nullptr));
        label_2->setText(QCoreApplication::translate("AccountOperations", "Value:(US$)", nullptr));
        WindowTitle->setText(QCoreApplication::translate("AccountOperations", "Name", nullptr));
        To->setInputMask(QCoreApplication::translate("AccountOperations", "000.000.000-00", nullptr));
        Confirm->setText(QCoreApplication::translate("AccountOperations", "Confirm", nullptr));
        label_4->setText(QCoreApplication::translate("AccountOperations", "Balance:", nullptr));
        Deposit->setText(QCoreApplication::translate("AccountOperations", "Deposit", nullptr));
        AcountCredit->setText(QCoreApplication::translate("AccountOperations", "PlaceHolder", nullptr));
        label_3->setText(QCoreApplication::translate("AccountOperations", "TO:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AccountOperations: public Ui_AccountOperations {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNTOPERATIONS_H
