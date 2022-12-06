#include <iostream>
#include <cassert>
#include "queue_list.h"

int main()
{
    Queue<int> s;
    s.push(804);
    int x = s.pop();
    std::cout << x << std::endl;
    std::cout << (s.isEmpty()) << std::endl;
}