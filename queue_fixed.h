/*Developer: Justin T. Alexander
Date: November 3, 2022
Project: Queue, fixed-size array
This header implements a Queue ADT.*/
template <typename T>
class Queue {
    T * data;
    int head = 0;   //front
    int tail = 0;   //rear
    int maxSize;

public:
    Queue(int maxsize)
    {
        maxSize = maxsize;
        data = new T[maxSize]{};
    }

    ~Queue()
    {
        delete[] data;
        data = nullptr;
    }
    bool isEmpty()
    {
        if (head == tail)
            return true;
        else 
            return false;
    }

    void push(T pushed) 
    {
        data[tail] = pushed;
        tail = (tail+1) % maxSize;
    }

    T pop()
    {
        T toReturn = data[head];  //head == 0 would cause issues retrieving this value, so using new variable.
        head = (head+1) % maxSize;
        return toReturn;
    }

    int getSize()
    {
        return ((tail + maxSize) - head) % maxSize;
    }
};