#include "header/Bank.h"
#include "header/Upi.h"
#include <iostream>

int main() {
    Bank senderBank("SenderBank", 1000.0);
    Bank receiverBank("ReceiverBank", 500.0);

    UPI upi(senderBank, receiverBank);

    double amount = 200.0;
    upi.makeTransaction(amount);

    std::cout << "Sender Bank Balance: Rs." << senderBank.getBalance() << std::endl;
    std::cout << "Receiver Bank Balance: Rs." << receiverBank.getBalance() << std::endl;

    return 0;
}
