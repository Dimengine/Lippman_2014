#include <iostream>
#include <string>

class Account
{
    friend std::ostream &print(std::ostream&, const Account&);
public:
    Account(const std::string &s, double a) : owner(s), amount(a) {}
    Account() : Account ("", 0.0) {}

    void calculate() { amount += amount * interestRate; }
    static double rate() { return interestRate; }
    static void rate(double);

private:
    std::string owner;
    double amount;
    static double interestRate;
    static double initRate();
    static constexpr int period = 30;
};

void Account::rate (double newRate)
{
    interestRate = newRate;
}

double Account::initRate()
{
    return 1.0;
}

std::ostream &print(std::ostream& os, const Account& acc)
{
    os << acc.owner << " " << acc.amount;
    return os;
}

double Account::interestRate = initRate();
constexpr int Account::period;

int main()
{
    Account acc1;
    Account acc2("Account2", 3.4);

    print(std::cout, acc1) << std::endl;
    print(std::cout, acc2) << std::endl;
}