#include "client.h"
#include <sstream>

Client::Client() {}

string Client::GetInformation() const
{
    stringstream stt;
    stt << "Client name: " << m_name << " Job: " << m_job << " Income: " << m_income;

    return stt.str();
}

string Client::GetName() const { return m_name; };

string Client::GetCpf() const { return m_cpf; };

string Client::GetIncome() const { return to_string(m_income); };

string Client::GetPassoword() const { return m_password; };
