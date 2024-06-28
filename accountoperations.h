#ifndef ACCOUNTOPERATIONS_H
#define ACCOUNTOPERATIONS_H

#include <QDialog>

namespace Ui {
class AccountOperations;
}

class AccountOperations : public QDialog
{
    Q_OBJECT

public:
    explicit AccountOperations(QWidget *parent = nullptr);
    ~AccountOperations();

private:
    Ui::AccountOperations *ui;
};

#endif // ACCOUNTOPERATIONS_H
