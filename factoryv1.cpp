/*Developer: Justin T. Alexander
Date: October 25, 2022
Project: Factory
This program computes a K-factory using a List ADT.*/
#include <iostream>
#include <string>
#include "adt_list.h"
using namespace std;

bool verify(int number, int kFactor)
{
    if (number % kFactor == 0)
        return true;
    else
        return false;
}

int main(int argc, char*argv[])
{
    List<int> numbers;
    numbers.append(15);
    numbers.append(20);
    numbers.append(35);
    numbers.append(10);
    numbers.append(13);
    numbers.append(24);
    numbers.append(49);
    numbers.append(90);
    numbers.append(55);
    int kFactor;    //the value we'll be verifying multiples of
    if (argc > 0)
    {
        kFactor = stoi(argv[1]);
        for (List<int>::Iterator i = numbers.getHead(); i; i.operator++()) 
        {
            cout << *i << endl;
            if(! verify(i, kFactor)) //remove current element if verify = falseA
                i.remove();
        }
        List<int>::Iterator p = numbers.getHead();

        while (p)
        {
            cout << *p << " ";
            p.operator++();
        }
    }   
}