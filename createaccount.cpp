#include "createaccount.h"
#include "ui_createaccount.h"

CreateAccount::CreateAccount(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::CreateAccount)
{
    ui->setupUi(this);
}

CreateAccount::~CreateAccount()
{
    delete ui;
}

void CreateAccount::on_CpfField_textEdited(const QString &arg1)
{
    m_Cpf = arg1.toStdString();
}
