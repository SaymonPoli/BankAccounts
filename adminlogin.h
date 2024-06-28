#ifndef ADMINLOGIN_H
#define ADMINLOGIN_H

#include <QDialog>
#include "client.h"
#include "account.h"

namespace Ui {
class AdminLogin;
}

class AdminLogin : public QDialog
{
    Q_OBJECT

public:
    explicit AdminLogin(QWidget *parent = nullptr);
    void setClients(std::vector<std::pair<Client, Conta>> &Accounts);
    ~AdminLogin();

private slots:
    void on_AdminUser_textEdited(const QString &arg1);

    void on_AdminPassword_textEdited(const QString &arg1);

    void on_AdmLoginButton_clicked();

private:
    Ui::AdminLogin *ui;
    std::string m_Login, m_Senha;
};

#endif // ADMINLOGIN_H
