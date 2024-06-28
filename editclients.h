#ifndef EDITCLIENTS_H
#define EDITCLIENTS_H

#include <QDialog>
#include "client.h"

namespace Ui {
class editClients;
}

class editClients : public QDialog
{
    Q_OBJECT

public:
    explicit editClients(QWidget *parent = nullptr);
    void widgetInicialize(std::vector<Client> &clients);
    ~editClients();

private:
    Ui::editClients *ui;
};

#endif // EDITCLIENTS_H
