/*Developer: Justin T. Alexander
Date: October 25, 2022
Project: Factory
This program computes a K-factory using a List ADT.*/
//Program as it was after refining solution but before reading from .txt file
#include <iostream>
#include <string>
#include "adt_list.h"
using namespace std;

void verify(List<int>::Iterator &i, int &number, int kFactor, int &untilInsert, int &toInsert)
{   //if current value is invalid && there's not a queued value to be inserted
    if (number % kFactor != 0 && untilInsert == 0)  
    {
        untilInsert = (number % kFactor);
        toInsert = number;
        i.remove();
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
    int kFactor,                    //the value we'll be verifying multiples of
    untilInsert{0}, toInsert{-7};   //middlemen used in verify/insert functionality    
    if (argc > 0)
    {
        kFactor = stoi(argv[1]);
        List<int>::Iterator i = numbers.getHead();
        while (i)   //while(i) with i++ iterator works!
        {
            verify(i, *i, kFactor, untilInsert, toInsert);
            if (untilInsert > 1)   //runs until value is incremented to multiple of K
            {
                --untilInsert;
                ++toInsert;
            }
            else if (untilInsert == 1 && toInsert >= 0)
            {
                i.insert(toInsert);
                toInsert = -7;
                untilInsert--;
            }
            i++;
        }

        if (untilInsert != 0)   //if there's a value pending addition when Iterator ends
            numbers.append(toInsert);

        i = numbers.getHead();
        while (i)
        {
            cout << *i << " ";
            i++;
        }
    }   
}