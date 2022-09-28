#include <iostream>
using namespace std;
int sum_digits(int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += i + 1;
    return sum;
}

int main()
{
    int x;
    std::cin >> x;
    std::cout << sum_digits(x) << '\n';
}
