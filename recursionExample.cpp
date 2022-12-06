/** calculates n factorial
*/
#include <iostream>
int factorial(int n) {
     std::cout << "n is " << n << std::endl;
if (n <= 0)
    return 1;
else {
    std::cout << "need factorial of " << (n-1) 
              << std::endl;
    int answer = factorial(n-1);
    std::cout << "factorial of " << (n-1) 
              << " is " << answer<< std::endl;
    return answer * n;
}
}

void countdown(int n)
{
    if (n >= 1)
    {
        //std::cout << n << std::endl;  //cout here counts down
        countdown(n-1);
        std::cout << n << std::endl;    //cout here counts up
    }
}

int main() 
{
    countdown(10);
}

