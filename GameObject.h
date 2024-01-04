#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include "Rectangle.h"
class GameObject {
protected:
    Rectangle bounds;
public:
    GameObject(float x,float y,float width,float height);
    virtual ~GameObject() = default;
    virtual void draw() const =0;
    virtual void update() = 0;

};

#endif
