int main(void)
{
    int my_array[] = {1, 5, 10, 15};
    int* an_array[] = {&my_array[2], &my_array[0]};
    char name[] = "Susan H";

    int* p = my_array;
    char* pc = name;
    int** pp = &an_array[0];

    (*p)++;
    std::cout << "Value of *p: " << *p << std::endl;

}