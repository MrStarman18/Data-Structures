#include <iostream>

class Triangle
{
    double base, height, hypo;

public:
    Triangle(double b, double h, double ht)
    {
        base = b;
        std::cout << "Base: " << base;
        height = h;
        std::cout << "Height: " << height;
        hypo = ht;
        std::cout << "Hypo: " << hypo << std::endl;
    }

    void print_area()
    {
        std::cout << "Area: " << (0.5 * base * height) << std::endl;
        std::cout << "Perimeter: " << base + height + hypo << std::endl;
    }
};

int main()
{
    Triangle hank(3, 4, 5);
    hank.print_area();
    return 0;
}