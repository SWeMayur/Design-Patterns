#include "../header/Bank.h"
#include <iostream>

Bank::Bank(const std::string& n, double b) : mName(n), mBalance(b) {}

double Bank::getBalance() const {
    return mBalance;
}

bool Bank::deductAmount(double amount) {
    if (amount <= mBalance) {
        mBalance -= amount;
        std::cout << "Deducted Rs." << amount << " from " << mName << " account.\n";
        return true;
    } else {
        std::cout << "Insufficient funds in " << mName << " account.\n";
        return false;
    }
}

void Bank::depositAmount(double amount) {
    mBalance += amount;
    std::cout << "Deposited Rs." << amount << " to " << mName << " account.\n";
}
