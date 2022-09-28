/*Developer: Justin T. Alexander
Class: CS2233-01
Date: September 7, 2022
Project: Pointer Practice (Functions)
This program should define the Pointer Practice functions. This is the assignment submission*/

// #include "utility.h"    //comment out before submitting
// #include <iostream>

void arrayFill(int *p,int n,int v)      // fill n elements starting a p with the value v
{
    for (int loop{0}; loop < n; loop++)
        *(p + loop) = v;
}     
void arrayReverse(int *p,int n)         // reverse the order of n elements starting a p
{
    n -= 1;
    int middleMan{0}, loopControl = n/2;
    if (loopControl == 0) {loopControl = 1;}
    for (int loop{0}; loop < loopControl; loop++)
    {       //Test outputs
            //std::cout << "Before: " << *(p+loop) << " ";
            //std::cout << "Before (n-): " << *(p + (n-loop)) << " ";
        middleMan = *(p + (n-loop));
            //std::cout << "Before (Middle): " << middleMan << " ";
        *(p + (n-loop)) = *(p + loop);
        *(p + loop) = middleMan;
            // std::cout << "After: " << *(p+loop) << " ";
            // std::cout << "After (Middle): " << middleMan << " ";
            // std::cout << "After (n-): " << *(p + (n-loop)) << std::endl;
    }
}  
void arrayCopy(int *p,int n,int *q)     // copy n consecutive elements from q to p
{
    for (int loop{0}; loop < n; loop++)
        *(p + loop) = *(q + loop);
}  
bool arrayEqual(int *p,int n,int *q)    // iff n consecutive elements of p and q are equal
{
    for (int loop{0}; loop < n; loop++)
    {
        if (*(p + loop) != *(q + loop))
            return false;
    }
    return true;
}  