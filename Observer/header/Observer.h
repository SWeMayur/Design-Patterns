#ifndef OBSERVER_H
#define OBSERVER_H

class Observer {
public:
    virtual void update() = 0;
};

class PatternObserver : public Observer {
public:
    void update() override;
};

#endif // OBSERVER_H
                