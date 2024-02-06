// CarManufacturer.h
#pragma once
#include "../header/CarPart.h"
#include "../header/Car.h"
#include "Car.h"

class CarManufacturer {
public:
    static Car* buildCar();

private:
    static CarPart* engine;
    static CarPart* chassis;
    static CarPart* tire;
};
