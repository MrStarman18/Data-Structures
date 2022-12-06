#include <iostream>
#include <cassert>
#include "stack_list.h"

int main()
{
    char A = 'A', B = 'B', C = 'C';
    //double A = 76, B = -33, C = 45, D = 89;
    Stack<char> s;
    s.push(A);
    s.push(B);
    s.push(C);  
    //s.print();
    char x = s.pop();  
    assert(x == C); 
   // s.print(); 
    x = s.pop();
    assert(x == B);  
    //s.push(D);   
}     