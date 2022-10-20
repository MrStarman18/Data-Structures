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
        void draw() {
            std::cout << "Draw from shape" << std::endl;
        }
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
};
int main() {
    Shape sList[] = {Circle("BLACK",150,100,50), Rect("RED",100,150,50,100), Text("GREEN",50,50,"this is a test")};

    for (int i=0; i < 3; i++) { 
        sList[i].draw(); }
}