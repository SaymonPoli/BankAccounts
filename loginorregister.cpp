#include "loginorregister.h"
#include "ui_loginorregister.h"

LoginOrRegister::LoginOrRegister(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LoginOrRegister)
{
    ui->setupUi(this);
}

LoginOrRegister::~LoginOrRegister()
{
    delete ui;
}

void LoginOrRegister::on_UserLogin_textEdited(const QString &arg1)
{
    m_Login = arg1.toStdString();
}


void LoginOrRegister::on_UserPassword_textEdited(const QString &arg1)
{
    m_Password = arg1.toStdString();
}


void LoginOrRegister::on_LoginButton_clicked()
{

}
