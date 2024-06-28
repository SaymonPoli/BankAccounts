#ifndef CREATEACCOUNT_H
#define CREATEACCOUNT_H

#include <QDialog>
#include "client.h"

namespace Ui {
class CreateAccount;
}

class CreateAccount : public QDialog
{
    Q_OBJECT

public:
    explicit CreateAccount(QWidget *parent = nullptr);
    std::string m_AccountId, m_Cpf
    Client cliente;
    ~CreateAccount();

private slots:
    void on_CpfField_textEdited(const QString &arg1);

private:
    Ui::CreateAccount *ui;
};

#endif // CREATEACCOUNT_H
