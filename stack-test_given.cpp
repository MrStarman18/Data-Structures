#include <iostream>
#include <cassert>
#include "stack_fixed.h"
using namespace std;
//This program was provided by Dr. Hammond as the minimum testing for the Stack header.
//I expanded on it some.
int main()
{
    char A = 'A', B = 'B', C = 'C', popped;

    Stack<char> s(10);

    assert(s.isEmpty());
    
    s.push(A);                  //A
    assert(!s.isEmpty());
    
    s.push(B);                  //AB

    popped = s.pop();           //A
    cout << "pop 1: " << popped << endl;
    assert(popped == B);
    popped = s.pop();           //
    cout << "pop 2: " << popped << endl;   
    assert(popped == A);
    assert(s.isEmpty());

    s.push(C);                  //C
    assert(!s.isEmpty());
    popped = s.pop();
    cout << "pop 3: " << popped << endl;
    assert(popped == C);
    s.push(A);

    // Add more function calls and assertions
}