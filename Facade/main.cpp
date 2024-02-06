// main.cpp
#include "header/CarManufacturer.h"

int main() {
    
    Car* myCar = CarManufacturer::buildCar();

    myCar->drive();
    
    delete myCar;

    return 0;
}
