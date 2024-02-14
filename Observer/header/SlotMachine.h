#ifndef SLOTMACHINE_H
#define SLOTMACHINE_H

#include "Subject.h"

class SlotMachine : public Subject {
private:
    std::vector<Observer*> observers;
    int slot1, slot2, slot3;

public:
    SlotMachine();
    void addObserver(Observer* observer) override;
    void removeObserver(Observer* observer) override;
    void notifyObservers() override;
    void spin();
};

#endif // SLOTMACHINE_H
