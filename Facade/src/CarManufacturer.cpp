// CarManufacturer.cpp
#include "../header/CarManufacturer.h"
#include "../header/Engine.h"
#include "../header/Chassis.h"
#include "../header/Tyre.h"

CarPart* CarManufacturer::engine = new Engine();
CarPart* CarManufacturer::chassis = new Chassis();
CarPart* CarManufacturer::tire = new Tire();

Car* CarManufacturer::buildCar() {
    // Assemble the car using individual parts
    engine->assemble();
    chassis->assemble();
    tire->assemble();
    // Return the fully assembled car
    return new Car(engine, chassis, tire);
}
