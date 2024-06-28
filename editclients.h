#ifndef EDITCLIENTS_H
#define EDITCLIENTS_H

#include <QDialog>
#include "client.h"
#include "account.h"

namespace Ui {
class editClients;
}

class editClients : public QDialog
{
    Q_OBJECT

public:
    explicit editClients(QWidget *parent = nullptr);
    void widgetInicialize(std::vector<pair<Client, Conta*>> &clients);
    ~editClients();

private slots:
    void on_pushButton_clicked();

private:
    Ui::editClients *ui;
};

#endif // EDITCLIENTS_H
