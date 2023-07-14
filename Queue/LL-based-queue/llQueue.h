
#ifndef DS_IMPLEMENTATION_LLQUEUE_H
#define DS_IMPLEMENTATION_LLQUEUE_H


class llQueue {
private:
    //node class representing a single node in the ll
    class Node{
    public:
        int data; //data stored in the node
        Node* next;
        //constructor
        Node(int value);
    };
    Node* front; //pointer to the front node of the queue
    Node* rear; //pointer to the rear node of the queue

public:
    //constructor
    llQueue();

    //destructor
    ~llQueue();

    //func to enqueue an element
    void enqueue(int element);

    //func to dequeue an element
    int dequeue();

    //func to check if the queue is empty
    bool isEmpty();

    //func to get the front element of the queue
    int getFront();
};


#endif //DS_IMPLEMENTATION_LLQUEUE_H
