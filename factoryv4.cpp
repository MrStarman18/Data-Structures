/*Developer: Justin T. Alexander
Date: October 25, 2022
Project: Factory
This program computes a K-factory using a List ADT.*/
#include <iostream>
#include <fstream>
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
    ifstream f;
    int ix = 0; //ix is 0-100 since there are 100 elements in numbers.data
    
    f.open("data.txt");    
    if (f.is_open())
    {
        while (ix < 100 && f >> numbers.data[ix])   //read the numbers from the file
        {
            // numbers.append();
            ix++;
        }   
        f.close();
    }   
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