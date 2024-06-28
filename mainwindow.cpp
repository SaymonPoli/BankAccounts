#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "editclients.h"
#include "loginorregister.h"
#include "adminlogin.h"
#include "createclient.h"
#include "client.h"
#include "account.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// bool MainWindow::authenticate(const std::string &login,
//                               const std::string &password) {
//     for (const auto &client : m_Clients) {
//         // if(client->getCPF())'
//         return false;
//     }
// }

void MainWindow::CreateNewAccount(string name, string cpf, string address, string job, string password, string accountType, double income)
{
    Client client(name, address, job, cpf, income, password);
    Conta* account = nullptr;

    if (accountType == "Corrente") {
        account = new ContaCorrente();
    } else if (accountType == "Especial") {
        account = new ContaEspecial();
    } else if (accountType == "Master") {
        account = new ContaMaster();
    } else {
        // TODO Handle error or default case
    }
    pair<Client, unique_ptr<Conta*>> contas(client, &account);
    m_Accounts.push_back(contas);
}

void MainWindow::on_actionEdit_triggered()
{
    editClients clientsWindow;
    clientsWindow.setModal(true);
    clientsWindow.exec();
}


void MainWindow::on_LoginButton_clicked()
{
    LoginOrRegister dialog(this);
    if(dialog.exec() == QDialog::Accepted)
    {

    }
}

void MainWindow::on_AdminButton_clicked()
{
    AdminLogin dialog(this);
    // dialog.setClients(m_Accounts);
    if(dialog.exec() == QDialog::Accepted)
    {

    }
}



void MainWindow::on_NewClient_clicked()
{
    CreateClient dialog(this);
    if (dialog.exec() == QDialog::Accepted) {
        // m_Accounts.push_back(dialog);
    }
}


