#include "account.h"

// Conta
void Conta::Deposit(double &value)
{
    m_balance += value;
}
// ================================

// Conta CorrenteContaEspecial
void ContaCorrente::Withdraw(double &value)
{
    if(m_balance-value >= 0)
    {
        m_balance -= value;

    }
}
void ContaCorrente::Transfer(double &value, Conta &conta)
{
    if(m_balance-value >= 0)
    {
        m_balance -= value;
        conta.Deposit(value);
    }
}
// =================================

// Conta Especial
void ContaEspecial::Withdraw(double &value)
{
    if(m_balance-value+m_limit >= 0)
    {
        m_balance -= value;
    }
};
void ContaEspecial::Transfer(double &value, Conta &conta)
{
    if(m_balance - value + m_limit >= 0){
        m_balance -= value;
        conta.Deposit(value);
    }
};
// ====================================

// Conta Master
void ContaMaster::Withdraw(double &value)
{
    if(m_balance - value + m_limit >= 0)
    {
        m_balance -= value;
    }
}
void ContaMaster::Transfer(double &value, Conta &conta)
{
    if(m_balance - value + m_limit >= 0)
    {
        m_balance -= value;
        conta.Deposit(value);
    }
}
