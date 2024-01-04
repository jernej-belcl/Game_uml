#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape2D.h"
#include <iostream>
class Rectangle: public Shape2D{
protected:
    float x,y,width,height;
public:
    //Rectangle();
    Rectangle(float x,float y,float width,float height);
    bool contains(float x,float y) const override;
    std::string toString() const;
    void setX(float x);

};


#endif
