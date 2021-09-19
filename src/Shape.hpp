#ifndef SHAPE
#define SHAPE
#include <string>
#include <vector>


namespace TheGame{

    class Shape{
        public:
            Shape(int id, std::vector<int> color, int xPos, int yPos, int zPos, int height, int width, int velocity);
            void setCoords(int x, int y);
            void setGrabbed(bool grabbed);
            void setAnchor(uint8_t x, uint8_t y);
            void setColor(std::vector<int> color);
            int id;
            int height;
            int width;
            int xPos;
            int yPos;
            int zPos;
            int xDelta = 1; 
            int yDelta = 1;
            std::vector<int> color;
            int velocity; 
            bool moving = false;
            bool isGrabbed = false;
        private:
            int _anchorX;
            int _anchorY;
    };
};

#endif