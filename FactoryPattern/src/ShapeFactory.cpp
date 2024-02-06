#include "../header/ShapeFactory.h"
#include "../header/OneDShape.h"
#include "../header/TwoDShape.h"
#include "../header/ThreeDShape.h"

OneDShape* ShapeFactory::createOneDShape() {
    return new OneDLine();
}

TwoDShape* ShapeFactory::createTwoDShape() {
    return new TwoDRectangle();
}

ThreeDShape* ShapeFactory::createThreeDShape() {
    return new ThreeDSphere();
}
