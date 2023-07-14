
#ifndef DS_IMPLEMENTATION_ARRAYQUEUE_H
#define DS_IMPLEMENTATION_ARRAYQUEUE_H


class arrayQueue {
private:
    int* arr; // arr to store queue elements
    int capacity; // max capacity of the queue
    int front; //index of the front element
    int rear; // index of the rear element
    int cnt; // number of element in the queue

public:
    //constructor
    arrayQueue(int size);

    //destructor
    ~arrayQueue();

    // func to enqueue an element
    void enqueue(int element); //insert element

    //func to dequeue an element
    int dequeue(); //delete

    //check if queue is empty
    bool isEmpty();

    //check if the queue is full
    bool isFull();

    // get the front element of the queue
    int getFront();
};


#endif //DS_IMPLEMENTATION_ARRAYQUEUE_H
