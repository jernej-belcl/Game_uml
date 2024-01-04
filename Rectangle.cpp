#include "Rectangle.h"

Rectangle::Rectangle(float x, float y, float width, float height): x(x),y(y),width(width),height(height){}

bool  Rectangle::contains(float x, float y) const {
    return this->x<=x && this->width>=x && this->y<=y &&this->height>=y;
}
std::string Rectangle::toString() const{
    return std::to_string(x)+" "+std::to_string(y)+" "+std::to_string(width)+" "+std::to_string(height);
}
void Rectangle::setX(float x) {
    Rectangle::x =this->x+x;
}
