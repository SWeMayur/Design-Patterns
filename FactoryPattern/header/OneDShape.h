#ifndef ONEDSHAPE_H
#define ONEDSHAPE_H

class OneDShape {
public:
    virtual void draw() const = 0;
    virtual ~OneDShape() {}
};

class OneDLine : public OneDShape {
public:
    void draw() const override;
};

#endif // ONEDSHAPE_H
