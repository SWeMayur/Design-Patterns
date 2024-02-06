#ifndef SHAPEFACTORY_H
#define SHAPEFACTORY_H

#include "../header/OneDShape.h"
#include "../header/TwoDShape.h"
#include "../header/ThreeDShape.h"

class ShapeFactory {
public:
    OneDShape* createOneDShape();
    TwoDShape* createTwoDShape();
    ThreeDShape* createThreeDShape();
};

#endif // SHAPEFACTORY_H
