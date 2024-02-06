#ifndef TWODSHAPE_H
#define TWODSHAPE_H

class TwoDShape {
public:
    virtual void draw() const = 0;
    virtual double area() const = 0;
    virtual ~TwoDShape() {}
};

class TwoDRectangle : public TwoDShape {
public:
    void draw() const override;
    double area() const override;
};

#endif // TWODSHAPE_H
