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

double AccountOperations::GetValue() { return ui->Value->text().toDouble(); }

std::string AccountOperations::GetTranferCpf() { return ui->To->text().toStdString(); }

std::string AccountOperations::GetOperation() { return m_Operation; }

void AccountOperations::on_Transfer_clicked()
{
    m_Operation = "Transfer";
    ui->To->setEnabled(true);
}

void AccountOperations::on_Withdraw_clicked()
{
    m_Operation = "Withdraw";
    ui->To->setEnabled(false);
}

void AccountOperations::on_Deposit_clicked()
{
    m_Operation = "Deposit";
    ui->To->setEnabled(false);
}

void AccountOperations::SetWindowTitle( const std::string &text)
{
    ui->WindowTitle->setText( QString::fromStdString(text) );
}

void AccountOperations::SetBalance( const double &balance )
{
    ui->AccountBalance->setText(QString::number(balance));
}

void AccountOperations::SetCredit(const double &credit)
{
    ui->AcountCredit->setText(QString::number(credit));
}

void AccountOperations::on_Confirm_clicked()
{
    accept();
}


