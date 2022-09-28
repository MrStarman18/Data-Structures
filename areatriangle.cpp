/*Developer: Justin T. Alexander
Class: CS2233-01
Date: August 31, 2022
Project: Area of Triangle
This program computes the area of a triangle with an input base and height*/
#include <iostream>
using namespace std;
float trianglearea(float base, float height) 
{return (0.5 * (base*height)); }

int main()
{
    cout << "This program computes the area of a triangle." << endl << endl;
    float base, height;
    cout << "Enter the base of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;
    float area = trianglearea(base, height);
    cout << "\nThe area is " << area << endl;
    return 0;
}