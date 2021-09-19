#define _XOPEN_SOURCE_EXTENDED 1
#include "Shape.hpp"
#include <SDL2/SDL.h>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace TheGame;

Shape::Shape(int id, int height, int width)
: id{id}, height{height}, width{width}
{}

Circle::Circle(int id, int height, int width)
: Shape(id, height, width)
{}

void Shape::setCoords(int x, int y, bool anchored){
    if(anchored){
        // tracks cursor, maintaining relative position
        xPos += (x - _anchorX);
        yPos += (y - _anchorY);
        _anchorX = x;
        _anchorY = y;
        return;
    }
    // simple positioning centered on top left corner
    xPos = x;
    yPos = y;
}

void Shape::setGrabbed(bool grabbed){
    isGrabbed = grabbed;
    grabbed ? setColor({255, 0, 0, 1}) : setColor({0, 0, 0, 0});
}

void Shape::setColor(std::vector<int> newColor){
    color = newColor;
}

void Shape::setAnchor(int x, int y){
    _anchorX = x;
    _anchorY = y;
}

