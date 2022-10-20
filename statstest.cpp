/*Developer: Justin T. Alexander
Dates: October 5, 2022
Project: Stats
This program tests the stats.h functions
*/
#include <iostream>
#include "stats.h"
using namespace std;
int main()
{
    double test1[5]{1, 4, 2, 6, 4}; //Remember: array converts to pointer to 1st element
    double test3[7]{5, 5, 0, 89, 2, 13, 13};  //uncomment if testing multiple modes
    //double *test2 = nullptr;  //uncomment if using a nullptr test

    try //runs through test cases until one returns an error.
    {
        cout << "sum test: " << sum(test1, 5) << endl;
        cout << "sum test 0: " << sum(test1, 0) << endl;
        cout << "sum test 3: " << sum(test3, 7) << endl;
        //cout << "sum nullptr: " << sum(test2, 6) << endl;
        //cout << "sum negative: " << sum(test1, -9) << endl;
        cout << "mean test: " << mean(test1, 5) << endl;
        //cout << "mean test 0: " << mean(test1, 0) << endl;
        //cout << "mean nullptr: " << mean(test2, 6) << endl;
        //cout << "mean negative: " << mean(test1, -7) << endl;
        cout << "small test: " << smallest(test1, 5) << endl;
        cout << "small test 0: " << smallest(test1, 0) << endl;
        cout << "large test: " << largest(test1, 5) << endl;
        cout << "large test 0: " << largest(test1, 0) << endl;
        cout << "range test: " << range(test1, 5) << endl;
        cout << "range test 0: " << range(test1, 0) << endl;
        cout << "mode test: " << mode(test1, 5) << endl;
        //cout << "mode test 3: " << mode(test3, 7) << endl;
        cout << "mode test 0: " << mode(test1, 0) << endl;
        cout << "deviation test: " << deviation(test1, 5) << endl;
        //cout << "deviation test negative: " << deviation(test1, -9) << endl;
        cout << "deviation test 0: " << deviation(test1, 0) << endl;
        cout << "deviation test 3: " << deviation(test3, 7) << endl;
        cout << "count test: " << countOf(test1, 0, 5, 4) << endl;
        cout << "count test 2: " << countOf(test1, 0, 5, 7) << endl;
        cout << "count test 0: " << countOf(test1, 0, 0, 0) << endl;
        cout << "count negative: " << countOf(test1, 0, -2, 2) << endl;
        cout << "count negative 2: " << countOf(test1, -4, -2, 2) << endl;


    }
    catch(const std::exception& e) {    //errors thrown in .h functions
        std::cout << e.what();
    }
    return 0;
}