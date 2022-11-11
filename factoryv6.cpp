/*Developer: Justin T. Alexander
Date: October 25, 2022
Project: Factory
This program computes a K-factory using a List ADT.*/
//Program works in IDE, but Athene crashes when iterating after removal.
#include <iostream>
#include <fstream>
#include <string>
#include "adt_list.h"
using namespace std;

void verify(List<int>::Iterator &i, int number, int kFactor, int &untilInsert, int &toInsert)
{   //if current value is invalid && there's not a queued value to be inserted
    if (number % kFactor != 0 && untilInsert <= 0)  
    {
        toInsert = number;          //toInsert will be incremented and reinserted into list
        while (number % kFactor != 0)   //compute timing of reinsertion
            number += 1;   //ATHENE PROBLEM LINE 1/2
        untilInsert = (number - toInsert);
        i.remove();
    }
}

int main(int argc, char*argv[])
{
    List<int> numbers;
    int input;

    while (cin >> input)
    {
        numbers.append(input);
    }
    
    int kFactor,                    //the value we'll be verifying multiples of
    untilInsert{0}, toInsert{-7};   //middlemen used in verify/insert functionality    
    if (argc > 0)
    {
        kFactor = stoi(argv[1]);
        List<int>::Iterator i = numbers.getHead();
        while (i)
        {
            verify(i, *i, kFactor, untilInsert, toInsert);
            ++i;        //ATHENE PROBLEM LINE 2/2   
            if (untilInsert > 0)   //runs until value is incremented to multiple of K
            {
                --untilInsert;
                ++toInsert;
            }
            if (untilInsert == 0 && toInsert >= 0)  //if value pending && countdown = 0, insert it
            {
                i.insert(toInsert);
                toInsert = -7;
                untilInsert--;
            }
        }

        if (untilInsert >= 0)   //if there's a value pending addition when Iterator ends
        {    
            while (toInsert%kFactor != 0)
                ++toInsert;
            numbers.append(toInsert);
        }

        i = numbers.getHead();
        while (i)
        {
            cout << *i << " ";
            i++;
        }
    }   
}