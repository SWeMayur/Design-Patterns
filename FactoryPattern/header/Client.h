#ifndef CLIENT_H
#define CLIENT_H

#include "OneDShape.h"
#include "TwoDShape.h"
#include "ThreeDShape.h"

class Client {
public:
    Client();
    void buildOneDShapes();
    void buildTwoDShapes();
    void buildThreeDShapes();
    ~Client();

    OneDShape* getOneDShape();
    TwoDShape* getTwoDShape();
    ThreeDShape* getThreeDShape();

private:
    OneDShape* mShape1D;
    TwoDShape* mShape2D;
    ThreeDShape* mShape3D;
};

#endif // CLIENT_H
