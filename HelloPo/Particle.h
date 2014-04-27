#pragma once
#include "poObject.h"

class Particle : public poObject {
    
public:
    poShape2D* star;
    poPoint velocity;
    float rotationSpeed;
    
    Particle();
    virtual void update();
    virtual void eventHandler(poEvent* event);
    
};
