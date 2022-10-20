#include <iostream>
void pointPrint(int *p)
{
    std::cout << *p;
}

int main()
{
    int number;
    int * point = &number;
    std::cin >> number;
    pointPrint(point);
    
    return 0;
}