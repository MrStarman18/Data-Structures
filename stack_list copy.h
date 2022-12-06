#include <iostream>
template <typename T>
class Stack {
private:
    class Node {
    public:
        Node* next;
        T data;

        Node(T value, Node* nextNode)   
        {
            data = value;
            next = nextNode;
        }
        //destructor not needed, memory released in Stack destructor
    };

    Node* top = nullptr;
    
public:
    Stack() {}
    ~Stack()    //Allowed a loop, thinking while next != nullptr?
    {
        Node* p = top;
        while (p)
        {
            Node* toDelete = p;
            p = p->next;
            delete toDelete;    
        }
            
    }
    
    void print()    //Allowed a loop, thinking while next != nullptr?
    {
        for (Node* p = top; p; p = p->next)
            std::cout << p->data << std::endl;
    }

    bool isEmpty()
    {
        return (top == nullptr);
    }
    void push(T pushed)
    {
        //if (top==nullptr)
            top = new Node(pushed, top);
        //else 
        //    top = new Node(pushed, nullptr);
        //std::cout << top->data;
        
    }
    T pop()
    {
        //if (top == nullptr) {return ;}  //DSA has if (top == null) {return null;}. How to check for this in C++?
        std::cout << "MM";
        T toReturn = top->data;
        std::cout << top->data;

        Node* toDelete = top;
        std::cout << toDelete->data;
        top = top->next;
        std::cout << toDelete->data << std::endl;
        delete toDelete;
        return toReturn;
    }
};