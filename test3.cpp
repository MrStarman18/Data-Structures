/*Developer: Justin T. Alexander
Class: CS2233-01
Date: September 7, 2022
Project: Pointer Practice (Test)
This program should test the Pointer Practice functions.*/

#include <cassert>
#include <iostream>
#include "utility.h"
using namespace std;

void arrayPrint(int *array, int length)
{
    for (int loop{0}; loop < length; loop++)
        std::cout << *(array + loop) << " ";
    std::cout << endl;
}

int main()
{
    std::cout << 1/2 << endl;
    int a[] = {0,13,95,40,33,63,91,3,99,38,57,56,84,74,30,24,99,77,75,92};
    arrayReverse(a+14,2);
    arrayPrint(a, 20);
    int b[] = {0,13,95,40,33,63,91,3,99,38,57,56,84,74,24,30,99,77,75,92};
    arrayPrint(b, 20);
    assert(arrayEqual(a,20,b));
}