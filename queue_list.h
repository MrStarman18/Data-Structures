template <typename T>
class Queue {
private: 
    class Node {    //copied from "stack_list.h"
    public:
        Node* next;
        T data;

        Node(Node* nextNode)
        {
            next = nextNode;
        }
        Node(T value, Node* nextNode)   
        {
            data = value;
            next = nextNode;
        }
        //destructor not needed, memory released in Stack destructor
    };

    Node* head; Node* tail;

public:
    Queue() //store empty Node at head. Value stored shouldn't matter; just its address.
    {
        head = new Node(nullptr); 
        tail = head;   
    }
    ~Queue()    //Allowed a loop.
    {
        Node* p = head;
        while (p)
        {
            Node* toDelete = p;
            p = p->next;
            delete toDelete;    
        }       
    }

    bool isEmpty()
    {
        return (head == tail);  //both pointing to "empty" Head Node if true.
    }
    void push(T pushed)
    {
        tail->next = new Node(pushed, nullptr); //update current Node's next pointer,
        tail = tail->next;                      //then increment tail.
    }
    T pop()
    {
        //if (toDelete != nullptr)  //We can assume this will never be true for the assignment.
        Node* toDelete = head->next;
        
        T toReturn = toDelete->data;
        if (toDelete == tail)       //if head->next is the tail (queue will become empty)
        {
            tail = head;
            head->next = nullptr;   //no other Nodes left in queue.
        }    
        else
        {
            head->next = toDelete->next;
        }
        delete toDelete;
        return toReturn;
    }
};