/*Developers: Justin, Hayden, Jordan, and Travis
Class: CS2233-01
Date: October 17-19, 2022
Project: C++ Inheritance
This program was developed alongside the worksheet for this class meeting.*/

#include <iostream>

class Shape {
   private:
       std::string color;
   public:
       void setColor(std::string aColor) { color = aColor;  }
       void setColor(int r, int g, int b) {
      // normally you would call a library to convert rgb to a color
      // this is just simple code to illustrate inheritance
         if ( r>=0 && r<=255 && g>=0 && g<=255 && b>=0 && b<=255 ) {
            if (r==255 && g == 0 && b == 0) {
                   color = "Red";    }
               else if (r == 0 && g == 255 && b == 0) {
                   color = "Green";  }
               else
               {  color = "Blue";    }
           }
       }
       std::string getColor() { return color;  }
};

class Circle : public Shape
{

};

class Rect : public Shape
{

};

int main()
{
    Circle sam;
    sam.setColor("Red");
    std::cout << sam.getColor();

    Circle c0;
    Shape  s0;
    Shape*  s1 = &c0;  // The Circle child is aware of the Shape parent,
    Circle* c1 = &s0;  // but the Shape parent is not aware of the Circle child.
}

