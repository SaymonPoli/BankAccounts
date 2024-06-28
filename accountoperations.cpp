#include "accountoperations.h"
#include "ui_accountoperations.h"

AccountOperations::AccountOperations(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AccountOperations)
{
    ui->setupUi(this);
}

AccountOperations::~AccountOperations()
{
    delete ui;
}

double AccountOperations::GetValue() { return m_Value; }

std::string AccountOperations::GetTranferCpf() { return m_TransferCpf; }

std::string AccountOperations::GetOperation() {return m_Operation; }

void AccountOperations::on_Transfer_clicked() { m_Operation = "Transfer"; }

void AccountOperations::on_Withdraw_clicked() { m_Operation = "Withdraw"; }

void AccountOperations::on_Deposit_clicked() { m_Operation = "Deposit"; }
