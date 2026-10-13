// Уровень 1 — классы и объекты
// Задача 1. Банковский счёт
// Лёгкая

// Что нужно сделать
// Создай класс BankAccount с полями:
// - owner — имя владельца (string).
// - balance — баланс (double).
// Реализуй методы:
// - Конструктор, принимающий имя и начальный баланс.
// - Deposit(double amount) — пополнение.
// - Withdraw(double amount) — снятие денег, если хватает средств.
// - Display() — вывод владельца и баланса.
// Условия:
// - Поля должны быть private.
// - Нельзя пополнять счёт или снимать деньги на отрицательную сумму.
// - Нельзя снять больше, чем есть на счёте.

#include <iostream>
#include <string>

using namespace std;

class BankAccount
{
    private:
        string owner;
        double balance;
    
    public:
    BankAccount(const string& Input_owner, const double& Input_balance): owner(Input_owner),  balance(Input_balance >= 0 ? Input_balance : 0){};
    
    void Deposit(const double& amount)
    {
        if(amount > 0)
        {
            balance += amount;
            cout << "You sended: " << amount << "$" << endl;
            cout << "Your balance after operation: " << balance << "$" << endl;
        }
        else
        {
            cout << "You cannot top up a negative balance." << endl;
            cout << "Give it a try next time" << endl;
        }
    }

    void Withdraw(const double& amount)
    {
        if(amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "You take off: " << amount << "$" << endl;
            cout << "Your balance after operation: " << balance << "$" << endl;
        }
        else
        {
            cout << "You cannot withdraw more than you have." << endl;
            cout << "Give it a try next time" << endl;
        }
    }

    void Display() const
    {
        cout << "owner: " << owner << endl;
        cout << "Your balance: " << balance;
    }
};

int main()
{
    BankAccount somebody("Egor", 100.10);
    somebody.Deposit(1000);
    somebody.Withdraw(1200);
    somebody.Withdraw(100.10);
    somebody.Display();

    return 0;
}