#include <iostream>
using namespace std;
/*Developers : Justin, Maddie, Stevenn
Date: Novemver 16, 2022
This program follows along with Model 2 of the Recursion worksheet given in class. */

int recursiveSummation(int n)
{
    int answer = 0;
    if (n <= 1) {return 1;}
    else
    answer = recursiveSummation(n-1);
    return answer + n;
}

int iterativeSummation(int n)
{
    int answer = 0;
    if (n >= 1)
        for (int i = 1; i <= n; i++)
            answer += i;
    else answer = 1;
    return answer;
}
int main()
{

    cout << recursiveSummation(3) << endl;
    cout << recursiveSummation(4) << endl;
    cout << recursiveSummation(-1) << endl;
    cout << iterativeSummation(-1) << endl;
    cout << iterativeSummation(3) << endl;
    cout << iterativeSummation(4) << endl;

    //Test for performance with larger numbers
    cout << recursiveSummation(1000000) << endl;    //Seg fault
    cout << iterativeSummation(1000000) << endl;    //Returns value
}