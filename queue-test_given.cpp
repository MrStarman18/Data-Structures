#include <iostream>
#include <cassert>
#include "queue_fixed.h"
using namespace std;
//This program was provided by Dr. Hammond as the minimum testing for the Stack header.

int main()
{
    char A = 'A', B = 'B', C = 'C', popped;

    Queue<char> q(10);
    
    assert(q.isEmpty());
    cout << q.isEmpty() << endl;
    cout << q.getSize() << endl;

    q.push(A);
    cout << A << endl;  
    q.push(B);
    cout << B << endl; 

    assert(!q.isEmpty());
    cout << q.getSize() << endl;
    
    popped = q.pop();
    assert(popped == A);
    cout << q.getSize() << endl;
    
    popped = q.pop();
    assert(popped == B);
    cout << q.getSize() << endl;

    assert(q.isEmpty());

    C++;
    
    // Add more function calls and assertions
}