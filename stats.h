/*Developer: Justin T. Alexander
Dates: October 5, 2022
Project: Stats
This program defines functions for the Stats assignment.
*/
#include <stdexcept>
#include <cstdlib>      //for abs. value in deviation function
#include <algorithm>    //for count in mode function

double sum(double *a, int n) //returns the total of all values (n values?)
{
    
    if (a == nullptr)   {throw std::invalid_argument("null pointer");}
    else if (n < 0)    {throw std::out_of_range("illegal count");}
    else if (n == 0)    {return 0;}
    double total = 0;
    for (int loop{0}; loop < n; loop++)
        total += *(a+loop);
    return total;
}

double mean(double *a, int n)   //returns arithmetic mean (sum/count)
{
    if (a == nullptr)   {throw std::invalid_argument("null pointer");}
    else if (n <= 0)    {throw std::out_of_range("illegal count");}
    else {
        double sumVar = sum(a, n);
        return sumVar/n;
    }
}

double largest(double *a, int n)    //returns largest value
{
    if (a == nullptr)   {throw std::invalid_argument("null pointer");}
    else if (n <= 0)    {throw std::out_of_range("illegal count");}
    double bigMan = *a;
    for (int loop{0}; loop < n; loop++)
        if (a[loop] > bigMan) {bigMan = a[loop];}
    return bigMan;
}

double smallest(double *a, int n) //returns smallest value
{
    if (a == nullptr)   {throw std::invalid_argument("null pointer");}
    else if (n <= 0)    {throw std::out_of_range("illegal count");}
    double lilMan = *a;
    for (int loop{0}; loop < n; loop++)
        if (a[loop] < lilMan) {lilMan = a[loop];}
    return lilMan;
}

double range(double *a, int n)  //returns difference between largest and smallest values
{
    if (a == nullptr)   {throw std::invalid_argument("null pointer");}
    else if (n <= 0)    {throw std::out_of_range("illegal count");}
    double bigMan, lilMan;
    bigMan = largest(a, n); 
    lilMan = smallest(a, n);
    return bigMan - lilMan;
}

double deviation(double *a, int n)  //returns mean absolute difference
{
    if (a == nullptr)   {throw std::invalid_argument("null pointer");}
    else if (n <= 0)    {throw std::out_of_range("illegal count");}
    double meanOf;
    double *absArray = new double[n]{};   //only runs if errors not thrown?
    meanOf = mean(a,n);
    for (int loop{0}; loop < n; loop++)
    {
        absArray[loop] = std::abs(meanOf - a[loop]);
    }
    meanOf = mean(absArray, n);
    delete[] absArray;
    absArray = nullptr;
    return meanOf;
    
}

int countOf(double *a, int start, int end, double toFind)   //used to find mode
{
    int found = 0;
    for (int loop{start}; loop < end; loop++)
    {
        if (a[loop] == toFind)
            found++;
    }
    return found;
}

double mode(double *a, int n)
{
    if (a == nullptr)   {throw std::invalid_argument("null pointer");}
    else if (n <= 0)    {throw std::out_of_range("illegal count");}
    double winner{0};
    int winnersFound{0}, currentCount{0}, winnerCount{0};
    for (int loop{0}; loop < n; loop++)
    {
        currentCount = countOf(a, 0, n, a[loop]);
        if (currentCount == winnerCount && a[loop] != winner)
        {
            winnersFound++;
        }
        else if (currentCount > winnerCount)
        {
            winnerCount = currentCount; //# of elements it takes to be a winner
            winnersFound = 1;   //new highest winner found
            winner = a[loop];
        }
    }
    
    if (winnersFound > 1)  {throw std::domain_error("multiple modes");}
    else if (winnersFound < 0) {throw std::domain_error("invalid(negative) mode");}
    return winner;
}