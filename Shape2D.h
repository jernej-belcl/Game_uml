#ifndef SHAPE2D_H
#define SHAPE2D_H

class Shape2D {
public:
    virtual bool contains(float x,float y) const=0;
};

#endif
