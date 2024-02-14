#include "../header/Observer.h"
#include <iostream>

void PatternObserver::update() {
    std::cout << "Pattern Observer: Pattern matched! Jackpot!" << std::endl;
}
