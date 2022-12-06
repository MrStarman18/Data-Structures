#include <iostream>
#include <cassert>
#include "queue_list.h"
using namespace std;

int main()
{
    char A = 'A', B = 'B', C = 'C', popped;

    Queue<char> q;
    assert(q.isEmpty());
    
    q.push(A);
    assert(!q.isEmpty());
    q.push(B);

    popped = q.pop();
    assert(popped == A);
    popped = q.pop();
    assert(popped == B);

    C++;
    
    // Add more function calls and assertions
}