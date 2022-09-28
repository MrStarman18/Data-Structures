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
    int a[20] = {1,2,3,4,5,6,7};
    arrayPrint(a, 20);
    arrayReverse(a+2,3);
    arrayPrint(a, 20);
    assert(a[2] == 5);
    assert(a[4] == 3);
    arrayCopy(a+7,6,a+1);
    arrayPrint(a, 20);
    assert(a[12]==7);
    arrayFill(a+13,6,-1);
    arrayPrint(a, 20);
    int b[20] = {1,2,5,4,3,6,7,2,5,4,3,6,7,-1,-1,-1,-1,-1,-1};
    assert(arrayEqual(a,20,b));
    arrayPrint(a, 20);
    arrayPrint(b, 20);
}