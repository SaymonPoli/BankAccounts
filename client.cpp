#include "client.h"
#include <sstream>

Client::Client() {}

string Client::GetInformation()
{
    stringstream stt;
    stt << "Client name: " << m_name << " Job: " << m_job << " Income: " << m_income;

    return stt.str();
}

string Client::GetName() { return m_name; };
string Client::GetCpf() { return m_cpf; };
string Client::GetIncome() { return to_string(m_income); };
