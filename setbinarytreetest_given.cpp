#include <iostream>
#include <cassert>
#include "set_binarytree.h"
using namespace std;
//This program was provided by Dr. Hammond as the minimum testing for the BT Set header.

int main()
{
    Set<int> s;
    assert(s.getSize()==0);
    
    int a[] = {1,4,3,6,5,2,7,9};
    for (int x : a)
        s.insert(x);
    assert(s.contains(5));
    assert(!s.contains(11));
}