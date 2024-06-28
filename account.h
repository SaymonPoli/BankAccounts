#ifndef ACCOUNTS_H
#define ACCOUNTS_H

#include <iostream>
// #include "client.h"

class Conta
{
protected:
    double m_balance;

public:
    //constructors and destructor
    Conta(double balance = 0) : m_balance(balance) {};

    void Deposit(double &value);
    virtual void Withdraw(double &ammount) = 0;
    virtual void Transfer(double &ammount, Conta &conta) = 0;
};

class ContaCorrente : public Conta
{
public:
    ContaCorrente(double balance = 0) : Conta(balance) {};
    void Withdraw(double &ammont) override;
    void Transfer(double &ammount, Conta &conta) override;
};

class ContaEspecial : public Conta
{
protected:
    double m_limit;

public:
    ContaEspecial(double balance = 0) : Conta(balance) {};
    void Withdraw(double &ammount) override;
    void Transfer(double &amount, Conta &conta) override;
};

class ContaMaster : public Conta
{
private:
    double m_limit;
    double m_points;
public:
    ContaMaster(double balance = 0) : Conta(balance) {};
    void Withdraw (double &ammount) override;
    void Transfer (double &ammount, Conta &conta) override;
};

#endif
