// Car.cpp
#include "../header/Car.h"
#include <iostream>

Car::Car(CarPart *engine, CarPart *chassis, CarPart *tire)
{
    mEngine = engine;
    mChassis = chassis;
    mTire = tire;
}

void Car::drive() {
    std::cout << "Driving the car" << std::endl;
}
