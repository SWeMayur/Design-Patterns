#include "../header/Client.h"
#include "../header/ShapeFactory.h"

Client::Client() : mShape1D(nullptr), mShape2D(nullptr), mShape3D(nullptr) {}

void Client::buildOneDShapes() 
{
    ShapeFactory* shapeFactory = new ShapeFactory();
    mShape1D = shapeFactory->createOneDShape();

    delete shapeFactory;
}

void Client::buildTwoDShapes() 
{
    ShapeFactory* shapeFactory = new ShapeFactory();
    mShape2D = shapeFactory->createTwoDShape();

    delete shapeFactory;
}

void Client::buildThreeDShapes() 
{
    ShapeFactory* shapeFactory = new ShapeFactory();
    mShape3D = shapeFactory->createThreeDShape();

    delete shapeFactory;
}

Client::~Client() 
{
    if (mShape1D) {
        delete mShape1D;
        mShape1D = nullptr;
    }

    if (mShape2D) {
        delete mShape2D;
        mShape2D = nullptr;
    }

    if (mShape3D) {
        delete mShape3D;
        mShape3D = nullptr;
    }
}

OneDShape* Client::getOneDShape() {
    return mShape1D;
}

TwoDShape* Client::getTwoDShape() {
    return mShape2D;
}

ThreeDShape* Client::getThreeDShape() {
    return mShape3D;
}
