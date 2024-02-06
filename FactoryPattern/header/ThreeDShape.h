#ifndef THREEDSHAPE_H
#define THREEDSHAPE_H

class ThreeDShape {
public:
    virtual void draw() const = 0;
    virtual double area() const = 0;
    virtual double volume() const = 0;
    virtual ~ThreeDShape() {}
};

class ThreeDSphere : public ThreeDShape {
public:
    void draw() const override;
    double area() const override;
    double volume() const override;
};

#endif // THREEDSHAPE_H
