#pragma once
#include <string>

class Bank {

public:
    Bank(const std::string& n, double b);
    double getBalance() const;
    bool deductAmount(double amount);
    void depositAmount(double amount);

private:
    std::string mName;
    double mBalance;
};

