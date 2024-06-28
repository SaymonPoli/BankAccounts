#include "editclients.h"
#include "ui_editclients.h"

editClients::editClients(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::editClients)
{
    ui->setupUi(this);
}

void editClients::widgetInicialize(std::vector<pair<Client, Conta*>> &Accounts)
{
    this->ui->AccountsTable->clear();
    this->ui->AccountsTable->setRowCount(Accounts.size()); // Ajustado para apenas o tamanho de clients
    this->ui->AccountsTable->setColumnCount(4);
    this->ui->AccountsTable->setHorizontalHeaderLabels(QStringList() << "Nome" << "CPF" << "Salario" << "Tipo de conta");

    int row = 0;
    for(auto& Account : Accounts) {
        QTableWidgetItem *nameItem = new QTableWidgetItem(QString::fromStdString(Account.first.GetName()));
        QTableWidgetItem *cpfItem = new QTableWidgetItem(QString::fromStdString(Account.first.GetCpf()));
        QTableWidgetItem *salaryItem = new QTableWidgetItem(QString::fromStdString(Account.first.GetIncome()));
        QTableWidgetItem *accountTypeItem = new QTableWidgetItem(QString::fromStdString(Account.second->GetAccountType()));

        this->ui->AccountsTable->setItem(row, 0, nameItem);
        this->ui->AccountsTable->setItem(row, 1, cpfItem);
        this->ui->AccountsTable->setItem(row, 2, salaryItem);
        this->ui->AccountsTable->setItem(row, 3, accountTypeItem);

        row++;
    }
}



editClients::~editClients()
{
    delete ui;
}


void editClients::on_pushButton_clicked()
{
    accept();
}

