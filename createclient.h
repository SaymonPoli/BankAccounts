#ifndef CREATECLIENT_Hz
#define CREATECLIENT_Hz
#include <QDialog>
#include <client.h>
#include <account.h>

class MainWindow;

namespace Ui {
class CreateClient;
}

class CreateClient : public QDialog
{
    Q_OBJECT

public:
    explicit CreateClient(QWidget *parent = nullptr);

    string getName();
    string getCPF();
    string getAddress();
    string getJob();
    string getPassword();
    string getAccountType();
    double getIncome();

    ~CreateClient();

private slots:
    void on_CreateAccountButton_clicked();

    // void on_NameField_textEdited(const QString &arg1);

    // void on_CpfField_textEdited(const QString &arg1);

    // void on_AdressField_textEdited(const QString &arg1);

    // void on_SalaryField_textEdited(const QString &arg1);

    // void on_EmailField_textEdited(const QString &arg1);

    // void on_PasswordField_textEdited(const QString &arg1);

private:
    Ui::CreateClient *ui;
    MainWindow* m_ParentWindow;
    std::string m_Name, m_Cpf, m_Adress, m_Job, m_Password;
    Client m_Client;
    float m_Salary;
};

#endif // CREATECLIENT_Hz
