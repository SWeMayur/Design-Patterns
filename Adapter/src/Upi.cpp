#include <iostream>
#include "../header/Upi.h"

UPI::UPI(Bank& sender, Bank& receiver) : mSenderBank(sender), mReceiverBank(receiver) {}

void UPI::makeTransaction(double amount) {
    if(!mSenderBank.deductAmount(amount))
    {
        std::cout << "UPI Transaction failed!\n";
        return;
    }
    mReceiverBank.depositAmount(amount);
    std::cout << "UPI Transaction successful!\n";
}
