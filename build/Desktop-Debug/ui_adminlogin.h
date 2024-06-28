/********************************************************************************
** Form generated from reading UI file 'adminlogin.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINLOGIN_H
#define UI_ADMINLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminLogin
{
public:
    QPushButton *AdmLoginButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *AdminUser;
    QLabel *label_2;
    QLineEdit *AdminPassword;

    void setupUi(QDialog *AdminLogin)
    {
        if (AdminLogin->objectName().isEmpty())
            AdminLogin->setObjectName(QString::fromUtf8("AdminLogin"));
        AdminLogin->resize(569, 413);
        AdmLoginButton = new QPushButton(AdminLogin);
        AdmLoginButton->setObjectName(QString::fromUtf8("AdmLoginButton"));
        AdmLoginButton->setGeometry(QRect(230, 280, 101, 31));
        QFont font;
        font.setPointSize(16);
        AdmLoginButton->setFont(font);
        layoutWidget = new QWidget(AdminLogin);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(170, 80, 211, 181));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(20);
        label->setFont(font1);

        verticalLayout->addWidget(label, 0, Qt::AlignHCenter);

        AdminUser = new QLineEdit(layoutWidget);
        AdminUser->setObjectName(QString::fromUtf8("AdminUser"));

        verticalLayout->addWidget(AdminUser);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        verticalLayout->addWidget(label_2, 0, Qt::AlignHCenter);

        AdminPassword = new QLineEdit(layoutWidget);
        AdminPassword->setObjectName(QString::fromUtf8("AdminPassword"));
        AdminPassword->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(AdminPassword);


        retranslateUi(AdminLogin);

        QMetaObject::connectSlotsByName(AdminLogin);
    } // setupUi

    void retranslateUi(QDialog *AdminLogin)
    {
        AdminLogin->setWindowTitle(QCoreApplication::translate("AdminLogin", "Dialog", nullptr));
        AdmLoginButton->setText(QCoreApplication::translate("AdminLogin", "Login", nullptr));
        label->setText(QCoreApplication::translate("AdminLogin", "Admin user", nullptr));
        label_2->setText(QCoreApplication::translate("AdminLogin", "Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminLogin: public Ui_AdminLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINLOGIN_H
