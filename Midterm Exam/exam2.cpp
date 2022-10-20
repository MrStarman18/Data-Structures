#include <iostream>
struct Student
{

double rollNumber{};

std::string name{};

int age{};

double grades[20]{};
};

int main()
{
    Student joe{6.5, "joe", 14, {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19}};
    for(int loop{0}; loop < 20; loop++)
        std::cout << joe.grades[loop] << std::endl;
    
    return 0;
}