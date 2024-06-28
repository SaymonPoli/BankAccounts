#include "adminlogin.h"
#include "ui_adminlogin.h"
#include "editclients.h"

AdminLogin::AdminLogin(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AdminLogin)
{
    ui->setupUi(this);
};

AdminLogin::~AdminLogin()
{
    delete ui;
};

void AdminLogin::on_AdminUser_textEdited(const QString &arg1)
{
    m_Login = arg1.toStdString();
};


void AdminLogin::on_AdminPassword_textEdited(const QString &arg1)
{
    m_Senha = arg1.toStdString();
};

void AdminLogin::setClients(std::vector<std::pair<Client, Conta*>> &Accounts)
{
    m_Clients = Accounts;
}

void AdminLogin::on_AdmLoginButton_clicked()
{
    if(m_Login == "admin" && m_Senha == "admin1234"){
        editClients dialog(this);
        dialog.widgetInicialize(m_Clients);
        if(dialog.exec() == QDialog::Accepted){
            // sexo
        }
    }
};
