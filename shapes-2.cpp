/*Developer: Justin T. Alexander
Dates: October 24, 2022
Project: Shapes 2
This program was completed alongside the Inheritance 3 assignment.*/
#include <iostream>

class Shape {
    protected:
        std::string color;
        int xcoord;
        int ycoord;
    public:
        void setColor(std::string aColor) {
            color = aColor;
        }
        void setColor(int r, int g, int b) {
            if ( r>=0 && r<=255 && g>=0 && g<=255 && b>=0 && b<=255 ) {
                // normally you would call a library to convert rgb to a color
                // this is just simple code to illustrate
                if (r==255 && g == 0 && b == 0) {
                    color = "Red";
                }
                else if (r == 0 && g == 255 && b == 0) {
                    color = "Green";  }
                else
                   {  color = "Blue";  }
            }
        }
        std::string getColor() {
            return color;
        }
        Shape() {}
        Shape(std::string initColor) {
            color = initColor; 
        }
        virtual void draw() = 0; 
        virtual ~Shape() =default;
};
class Circle : public Shape {
    private:
        int radius;
    public:
        Circle()  {}
        Circle(std::string initColor) {
            color = initColor;
        }
        Circle(std::string initColor, int x, int y, int rad) {
            color = initColor;
            xcoord = x;
            ycoord = y;
            radius = rad;
        }
        void draw() {
            std::cout << "Draw from Circle.\n";
        }
        
};
class Rect : public Shape {
    private:
        int height;
        int width;
    public:
        Rect()  {}
        Rect(std::string initColor) {
            color = initColor;
        }
        Rect(std::string initColor, int x, int y, int h, int w) {
            color = initColor;
            xcoord = x;
            ycoord = y;
            height = h;
            width = w;
        }
        void draw() {
            std::cout << "Draw from Rect.\n";
        }
        
};
class Text : public Shape {
    private:
        std::string body;
    public:
        Text()  {}
        Text(std::string initColor) {
            color = initColor;
        }
        Text(std::string initColor, int x, int y, std::string b) {
            color = initColor;
            xcoord = x;
            ycoord = y;
            body = b;
        }
        void draw() {
            std::cout << "Draw from Text.\n";
        }
         
};
int main() {

   
    Circle c0{"BLACK",150,100,50};
    Rect r0{"RED",100,150,50,100};
    Text t0{"GREEN",50,50,"this is a test"};
    Shape* sListptr[] = {&c0, &r0, &t0};

    for (Shape* s :sListptr) { 

        s->draw(); 

        }
}