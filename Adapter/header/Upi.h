#pragma once
#include "../header/Bank.h"

class UPI
{

public:
    UPI(Bank &sender, Bank &receiver);
    void makeTransaction(double amount);

private:
    Bank &mSenderBank;
    Bank &mReceiverBank;
};
