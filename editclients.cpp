#include "editclients.h"
#include "ui_editclients.h"

editClients::editClients(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::editClients)
{
    ui->setupUi(this);
}

void editClients::widgetInicialize(std::vector<Client> &clients)
{
    this->ui->AccountsTable->clear();
    this->ui->AccountsTable->setRowCount(clients.size()); // Ajustado para apenas o tamanho de clients
    this->ui->AccountsTable->setColumnCount(4);
    this->ui->AccountsTable->setHorizontalHeaderLabels(QStringList() << "Nome" << "CPF" << "Salario" << "Tipo de conta");

    int row = 0;
    for(auto& client : clients) {
        QTableWidgetItem *nameItem = new QTableWidgetItem(QString::fromStdString(client.GetName()));
        QTableWidgetItem *cpfItem = new QTableWidgetItem(QString::fromStdString(client.GetCpf()));
        QTableWidgetItem *salaryItem = new QTableWidgetItem(QString::fromStdString(client.GetIncome()));
        QTableWidgetItem *accountTypeItem = new QTableWidgetItem("sax");

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

