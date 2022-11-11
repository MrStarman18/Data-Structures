#include <iostream>
#include <cassert>
#include "queue_fixed.h"
using namespace std;
//This program was provided by Dr. Hammond as the minimum testing for the Stack header.

int main()
{
    Queue<double> q(5);
    double A = -4.15, B = 209.37, C;
    cout << q.getSize() << endl;
    q.push(A);
    q.push(B);
    cout << q.getSize() << endl;
    C = q.pop();
    cout << q.getSize() << endl;
    cout << A << endl;
    cout << C << endl;
    assert(C == A);
}