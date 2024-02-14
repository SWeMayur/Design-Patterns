#include <iostream>
#include <iostream>
#include <vector>
#include <algorithm>
#include "../header/SlotMachine.h"
#include "../header/Observer.h"

SlotMachine::SlotMachine() : slot1(0), slot2(0), slot3(0) {}

void SlotMachine::addObserver(Observer* observer) {
    observers.push_back(observer);
}

void SlotMachine::removeObserver(Observer* observer) {
    auto it = std::find(observers.begin(), observers.end(), observer);
    if (it != observers.end()) {
        observers.erase(it);
    }
}

void SlotMachine::notifyObservers() {
    for (Observer* observer : observers) {
        observer->update();
    }
}

void SlotMachine::spin() {
    slot1 = rand() % 3 + 1;
    slot2 = rand() % 3 + 1;
    slot3 = rand() % 3 + 1;

    std::cout << "Slot values: " << slot1 << " " << slot2 << " " << slot3 << std::endl;

    if (slot1 == 3 && slot2 == 3 && slot3 == 3) {
        std::cout << "Pattern matched! Notifying observers." << std::endl;
        notifyObservers();
    }
}
