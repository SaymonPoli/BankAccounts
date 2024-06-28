#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "client.h"
#include "account.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

    virtual void CreateNewAccount();

    ~MainWindow();

private slots:
    void on_actionEdit_triggered();

    void on_LoginButton_clicked();

    void on_AdminButton_clicked();

    void on_NewClient_clicked();

private:
    Ui::MainWindow *ui;

    bool authenticate(const std::string &login, const std::string &password);
    std::vector<pair<Client, Conta*>> m_Accounts;
};
#endif // MAINWINDOW_H
