#define _XOPEN_SOURCE_EXTENDED 1
#include "Shape.hpp"
#include <SDL2/SDL.h>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace TheGame;

Shape::Shape(int id, std::vector<int> color, int xPos, int yPos, int zPos, int height, int width, int velocity)
: id{id}, height{height}, width{width}, xPos(xPos), yPos(yPos), zPos(zPos), color{color}, velocity(velocity)
{}

void Shape::setCoords(int x, int y){
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

void Shape::setAnchor(uint8_t x, uint8_t y){
    _anchorX = x;
    _anchorY = y;
}