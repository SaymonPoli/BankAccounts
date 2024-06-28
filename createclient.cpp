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

string CreateClient::getName() { return ui->NameField->text().toStdString(); }

string CreateClient::getCPF() { return ui->CpfField->text().toStdString(); }

string CreateClient::getAddress() { return ui->AdressField->text().toStdString(); }

string CreateClient::getJob() { return ui->JobField->text().toStdString(); }

string CreateClient::getPassword() { return ui->PasswordField->text().toStdString(); }

string CreateClient::getAccountType() { return ui->AccountField->currentText().toStdString(); }

double CreateClient::getIncome() { return ui->SalaryField->text().toDouble(); }

void CreateClient::on_CreateAccountButton_clicked() { accept(); }
