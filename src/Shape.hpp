#ifndef SHAPE
#define SHAPE
#include <string>
#include <vector>


namespace TheGame{

    class Shape{
        public:
            Shape(int id, int height, int width);
            void setCoords(int x, int y, bool anchored=false);
            void setGrabbed(bool grabbed);
            void setAnchor(int x, int y);
            void setColor(std::vector<int> color);
            void setVelocity(int velocity);
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

    class Circle: public Shape{
        public:
            Circle(int id, int height, int width);
    };
};

#endif