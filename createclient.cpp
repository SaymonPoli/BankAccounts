#include "createclient.h"
#include "ui_createclient.h"

CreateClient::CreateClient(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::CreateClient)
{
    ui->setupUi(this);
}

CreateClient::~CreateClient()
{
    delete ui;
}

void CreateClient::on_CreateAccountButton_clicked()
{
    if(m_ParentWindow)
    {
        // ->CreateNewAccount();
    }
    m_Client = Client(m_Name, m_Adress, m_Job, m_Cpf, m_Salary, m_Password);
    accept();
}

void CreateClient::on_NameField_textEdited(const QString &arg1)
{
    m_Name = arg1.toStdString();
}

void CreateClient::on_CpfField_textEdited(const QString &arg1)
{
    m_Cpf = arg1.toStdString();
}

void CreateClient::on_AdressField_textEdited(const QString &arg1)
{
    m_Adress = arg1.toStdString();
}

void CreateClient::on_SalaryField_textEdited(const QString &arg1)
{
    m_Salary = arg1.toFloat();
}

void CreateClient::on_EmailField_textEdited(const QString &arg1)
{
    m_Job = arg1.toStdString();
}

void CreateClient::on_PasswordField_textEdited(const QString &arg1)
{
    m_Password = arg1.toStdString();
}

Client CreateClient::getClient()
{
    return m_Client;
}


