/*Developer: Justin T. Alexander
Date: October 25, 2022
Project: Factory
This program computes a K-factory using a List ADT.*/
#include <iostream>
#include <string>
#include "adt_list.h"
using namespace std;

int verify(int &number, int kFactor)
{
    if (number % kFactor == 0)
        return number;
    else
    {
        ++number;
        //cout << "Verify check: " << number << endl;
        verify(number, kFactor);
        return number;
    }
}

int main(int argc, char*argv[])
{
    List<int> numbers;
    numbers.append(15); //test list -- will come from .txt file
    numbers.append(20);
    numbers.append(35);
    numbers.append(10);
    numbers.append(13);
    numbers.append(24);
    numbers.append(49);
    numbers.append(90);
    numbers.append(55); //end test list
    int kFactor, j{0};    //the value we'll be verifying multiples of
    if (argc > 0)
    {
        kFactor = stoi(argv[1]);
        for (List<int>::Iterator i = numbers.getHead(); i.index < numbers.count; i.operator++()) 
        {
            cout << i.index << endl;
            if (verify(*i, kFactor) != *i)    //If verify fails, remove i
            {
                j = *i;
                cout << j << endl;       //not running?
                i.remove();
            }
            //cout << *i << " ";
            if (verify(j, kFactor) == j || !i)    //insert j when verify passes or at end of list
            {
                i.insert(j);
            }
            //cout << j << " " << endl;   //also not running?
        }
        List<int>::Iterator p = numbers.getHead();

        while (p)
        {
            cout << *p << " ";
            p.operator++();
        }
    }   
}