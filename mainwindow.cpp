#include <unordered_map>
#include <memory>
#include <string>
#include <qglobal.h>
#include <QMessageBox>

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "editclients.h"
#include "loginorregister.h"
#include "adminlogin.h"
#include "createclient.h"
#include "accountoperations.h"
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

bool MainWindow::authenticate(const std::string &login, const std::string &password) {
    for (auto &Account : m_Accounts) {
        if (Account.first.GetCpf() == login && Account.first.GetPassoword() == password) {
            AccountOperations dialog(this);

            dialog.SetWindowTitle(Account.first.GetName());
            dialog.SetBalance(Account.second->GetBalance());
            dialog.SetCredit(Account.second->GetLimit());

            dialog.exec();

            double value = dialog.GetValue();
            std::string operation = dialog.GetOperation();
            std::string transferDestiny = dialog.GetTranferCpf();

            if (operation == "Transfer") {
                Conta* contaParaTranferir = nullptr;
                for (auto &TransferAccount : m_Accounts) {
                    if (TransferAccount.first.GetCpf() == transferDestiny) {
                        contaParaTranferir = TransferAccount.second;
                        break;
                    }
                }
                Account.second->Transfer(value, *contaParaTranferir);
            } else if (operation == "Withdraw") {
                Account.second->Withdraw(value);
            } else if (operation == "Deposit") {
                Account.second->Deposit(value);
            }
            return true;
        }
    }
    return false;
}

void MainWindow::CreateNewAccount()
{
    CreateClient dialog(this);
    if(dialog.exec() == QDialog::Accepted)
    {
        string newCpf = dialog.getCPF();

        for (const auto &Account : m_Accounts) {
            if (Account.first.GetCpf() == newCpf) {
                QMessageBox::warning(this, "Error", "CPF already exists!");
                return;
            }
        }

        string accountType = dialog.getAccountType();
        Client client(dialog.getName(), dialog.getAddress(), dialog.getJob(), newCpf, dialog.getIncome(), dialog.getPassword());
        Conta* account = nullptr;
        if (accountType == "Conta corrente") {
            account = new ContaCorrente();
        } else if (accountType == "Conta especial") {
            account = new ContaEspecial();
        } else if (accountType == "Conta master") {
            account = new ContaMaster();
        } else {
            account = new ContaCorrente();
        }
        pair<Client, Conta*> contas(client, account);
        m_Accounts.push_back(contas);
    }
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
        authenticate(dialog.GetLogin(), dialog.GetPassowrd());
    }
}

void MainWindow::on_AdminButton_clicked()
{
    AdminLogin dialog(this);
    dialog.setClients(m_Accounts);
    dialog.exec();
}

void MainWindow::on_NewClient_clicked() { CreateNewAccount(); }
