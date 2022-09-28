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
    int a[20] = {11,13,15,17,19,21,23,25,27,29,31,33,35,37,39,41,43,45,47,49};
    arrayReverse(a+10,7);
    int b[20] = {11,13,15,17,19,21,23,25,27,29, 43,41,39,37,35,33,31, 45,47,49};
    arrayPrint(a, 20);
    arrayPrint(b, 20);
    assert(arrayEqual(a,20,b));
}