/********************************************************************************
** Form generated from reading UI file 'loginorregister.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINORREGISTER_H
#define UI_LOGINORREGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginOrRegister
{
public:
    QPushButton *LoginButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *UserLogin;
    QLabel *label_2;
    QLineEdit *UserPassword;

    void setupUi(QDialog *LoginOrRegister)
    {
        if (LoginOrRegister->objectName().isEmpty())
            LoginOrRegister->setObjectName(QString::fromUtf8("LoginOrRegister"));
        LoginOrRegister->resize(568, 413);
        LoginButton = new QPushButton(LoginOrRegister);
        LoginButton->setObjectName(QString::fromUtf8("LoginButton"));
        LoginButton->setGeometry(QRect(230, 290, 101, 31));
        QFont font;
        font.setPointSize(16);
        LoginButton->setFont(font);
        layoutWidget = new QWidget(LoginOrRegister);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(170, 90, 211, 181));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(20);
        label->setFont(font1);

        verticalLayout->addWidget(label);

        UserLogin = new QLineEdit(layoutWidget);
        UserLogin->setObjectName(QString::fromUtf8("UserLogin"));

        verticalLayout->addWidget(UserLogin);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        verticalLayout->addWidget(label_2);

        UserPassword = new QLineEdit(layoutWidget);
        UserPassword->setObjectName(QString::fromUtf8("UserPassword"));
        UserPassword->setEchoMode(QLineEdit::Password);
        UserPassword->setClearButtonEnabled(false);

        verticalLayout->addWidget(UserPassword);


        retranslateUi(LoginOrRegister);

        QMetaObject::connectSlotsByName(LoginOrRegister);
    } // setupUi

    void retranslateUi(QDialog *LoginOrRegister)
    {
        LoginOrRegister->setWindowTitle(QCoreApplication::translate("LoginOrRegister", "Dialog", nullptr));
        LoginButton->setText(QCoreApplication::translate("LoginOrRegister", "Login", nullptr));
        label->setText(QCoreApplication::translate("LoginOrRegister", "User (CPF)", nullptr));
        UserLogin->setInputMask(QCoreApplication::translate("LoginOrRegister", "000.000.000-00", nullptr));
        label_2->setText(QCoreApplication::translate("LoginOrRegister", "Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginOrRegister: public Ui_LoginOrRegister {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINORREGISTER_H
