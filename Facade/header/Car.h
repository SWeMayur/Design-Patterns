// Car.h
#pragma once
#include "../header/CarPart.h"

class Car {
public:
    Car(CarPart*, CarPart*, CarPart*);
    void drive();
    
private:
    CarPart* mEngine;
    CarPart* mChassis;
    CarPart* mTire;
};
