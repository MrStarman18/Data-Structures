#include <iostream>
#include <cassert>
#include "stack_list.h"
using namespace std;

int main()
{
    char A = 'A', B = 'B', C = 'C', popped;

    Stack<char> s;
    cout << s.isEmpty() << endl;    //assert(s.isEmpty());
    
    s.push(A);
    cout << s.isEmpty() << endl;    //assert(!s.isEmpty());
    s.push(B);

    popped = s.pop();
    cout << popped << endl; //assert(popped == B);
    popped = s.pop();
    cout << popped << endl; //assert(popped == A);
    cout << s.isEmpty() << endl;
    C++;
    
    // Add more function calls and assertions
}