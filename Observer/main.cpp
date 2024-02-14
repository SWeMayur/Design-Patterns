#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "header/SlotMachine.h"
#include "header/Observer.h"

int main() {
    std::srand(std::time(0));

    SlotMachine slotMachine;
    PatternObserver patternObserver;

    slotMachine.addObserver(&patternObserver);

    for (int i = 0; i < 5; ++i) {
        std::cout << "\nSpin " << i + 1 << ":" << std::endl;
        slotMachine.spin();
    }

    slotMachine.removeObserver(&patternObserver);

    return 0;
}
