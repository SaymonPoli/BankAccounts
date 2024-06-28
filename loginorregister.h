#ifndef LOGINORREGISTER_H
#define LOGINORREGISTER_H

#include <QDialog>

namespace Ui {
class LoginOrRegister;
}

class LoginOrRegister : public QDialog
{
    Q_OBJECT

public:
    explicit LoginOrRegister(QWidget *parent = nullptr);
    ~LoginOrRegister();

private slots:
    void on_UserLogin_textEdited(const QString &arg1);

    void on_UserPassword_textEdited(const QString &arg1);

    void on_LoginButton_clicked();

private:
    std::string m_Login, m_Password;
    Ui::LoginOrRegister *ui;
};

#endif // LOGINORREGISTER_H
