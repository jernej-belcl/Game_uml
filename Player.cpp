#include "Player.h"
#include <iostream>
Player::Player(float x,float y,float width,float height, std::string name):GameObject(x,y,width,height),name(name) {}

void Player::draw() const {
    std::cout<< bounds.toString()+" "+name<<std::endl;
}
void Player::update() {
    bounds.setX(1);
}

