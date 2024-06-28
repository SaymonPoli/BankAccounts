#ifndef ACCOUNTS_H
#define ACCOUNTS_H

#include <iostream>

class Conta
{
protected:
    double m_balance;
    std::string m_AccountType;

public:
    //constructors and destructor
    Conta(double balance = 0) : m_balance(balance) {};

    std::string GetAccountType(){ return m_AccountType; }
    double GetBalance() { return m_balance; };
    void Deposit(double &value);
    virtual double GetLimit() = 0;
    virtual void Withdraw(double &ammount) = 0;
    virtual void Transfer(double &ammount, Conta &conta) = 0;
};

class ContaCorrente : public Conta
{
public:
    ContaCorrente(double balance = 0) : Conta(balance) { m_AccountType = "Conta Corrente";};
    double GetLimit() override { return 0; };
    void Withdraw(double &ammont) override;
    void Transfer(double &ammount, Conta &conta) override;
};

class ContaEspecial : public Conta
{
protected:
    double m_limit;

public:
    ContaEspecial(double balance = 0) : Conta(balance), m_limit(5000) {m_AccountType = "Conta Especial";};
    double GetLimit() override { return m_limit; } ;
    void Withdraw(double &ammount) override;
    void Transfer(double &amount, Conta &conta) override;
};

class ContaMaster : public Conta
{
private:
    double m_limit;
    double m_points;
public:
    ContaMaster(double balance = 0) : Conta(balance), m_limit(10000) {m_AccountType = "Conta Master";};
    double GetLimit() override { return m_limit; };
    void Withdraw (double &ammount) override;
    void Transfer (double &ammount, Conta &conta) override;
};

#endif
