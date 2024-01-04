#ifndef PLAYER_H
#define PLAYER_H
#include "GameObject.h"
#include <iostream>
#include "Rectangle.h"
class Player : public GameObject{
protected: std::string name;
public: Player(float x,float y,float width,float height,std::string name);
    void draw() const override;
    void update() override;

};


#endif
