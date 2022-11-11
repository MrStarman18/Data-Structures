/*Developer: Justin T. Alexander
Date: November 2, 2022
Project: Stack, fixed-size array
This header implements a Stack ADT.*/
template <typename T>
class Stack {
    T * data;
    int top;    //next open position. Top element is top-1.

public:
    Stack(int maxsize)
    {
        data = new T[maxsize]{};
        top = 0;
    }
    ~Stack()
    {
        delete[] data;
        data = nullptr;
    }

    bool isEmpty() 
    {
        return top == 0;
    }

    void push(T pushed) 
    {
        data[top] = pushed;
        ++top;
    }

    T pop() //return popped value
    {       
        --top;
        return data[top];    
    }  
};