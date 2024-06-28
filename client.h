#ifndef CLIENT_H
#define CLIENT_H

#include <iostream>

using namespace std;

class Client
{
private:
    string m_name, m_address, m_job, m_cpf, m_password;
    float m_income;
public:
    Client();

    Client(string name, string address, string job, string cpf, float income, string password)
        : m_name(name), m_address(address), m_job(job), m_cpf(cpf), m_password(password), m_income(income){};

    //getters and setters
    //void update(string name,string address,string job,float income) {}

    string GetInformation() const;
    string GetName() const;
    string GetCpf() const;
    string GetIncome() const;
    string GetPassoword() const;
};

#endif
