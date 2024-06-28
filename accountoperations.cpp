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
