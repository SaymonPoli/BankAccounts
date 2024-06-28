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

    double GetValue();
    std::string GetTranferCpf();
    std::string GetOperation();

private slots:
    void on_Transfer_clicked();

    void on_Withdraw_clicked();

    void on_Deposit_clicked();

private:
    Ui::AccountOperations *ui;
    float m_Value;
    std::string m_TransferCpf, m_Operation;
};

#endif // ACCOUNTOPERATIONS_H
