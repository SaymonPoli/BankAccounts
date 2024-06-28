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
    void SetWindowTitle( const std::string&);
    void SetBalance( const double&);
    void SetCredit(const double&);

private slots:
    void on_Transfer_clicked();

    void on_Withdraw_clicked();

    void on_Deposit_clicked();

    void on_Confirm_clicked();

private:
    Ui::AccountOperations *ui;
    float m_Value;
    std::string m_TransferCpf, m_Operation;
};

#endif // ACCOUNTOPERATIONS_H
