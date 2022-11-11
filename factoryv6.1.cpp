/*Developer: Justin T. Alexander
Date: October 25, 2022
Project: Factory
This program computes a K-factory using a List ADT.*/
#include <iostream>
#include <fstream>
#include <string>
#include "adt_list.h"
using namespace std;

void verify(List<int>::Iterator &i, int number, int kFactor, int &untilInsert, int &toInsert, bool &verifyFailed)
{   //if current value is invalid && there's not a queued value to be inserted
    if (number % kFactor != 0 && untilInsert <= 0)  
    {
        toInsert = number;          //toInsert will be incremented and reinserted into list
        while (number % kFactor != 0)   //compute timing of reinsertion
            number += 1;   //ATHENE PROBLEM LINE 1/2
        untilInsert = (number - toInsert);
        List<int>::Iterator j = i;  //Roundabout solution to Iterator Athene issue.
        i++;                        //increment i BEFORE removal.
        cout << "i: " << *i << "j: " << *j << endl;
        j.remove();                 //use temp. Iterator to remove, then j goes out of scope.
        verifyFailed = true;    //Tell main not to increment i since it's been done here.
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
    cout << "cin ended\n";
    
    int kFactor,                    //the value we'll be verifying multiples of
    untilInsert{0}, toInsert{-7};   //middlemen used in verify/insert functionality    
    if (argc > 0)
    {
        kFactor = stoi(argv[1]);
        List<int>::Iterator i = numbers.getHead();
        while (i)
        {
            bool verifyFailed = false;
            verify(i, *i, kFactor, untilInsert, toInsert, verifyFailed);
            //cout << "First verify\n";
            if (verifyFailed)   //When verify fails with new solution, i will be incremented there.
                {++i;}

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