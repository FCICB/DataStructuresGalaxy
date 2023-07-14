
#ifndef DS_IMPLEMENTATION_ARRAYSTACK_H
#define DS_IMPLEMENTATION_ARRAYSTACK_H


class arrayStack {
private:
    int* arr; // arr to store stack elements
    int capacity; // maximum capacity of the stack
    int top; //index of the top element of the stack
public:
    //constructor
    arrayStack(int size);
    //destructor
    ~arrayStack();

    void push(int element);
    int pop();
    bool  isEmpty();
    bool isFull();
    // Function to get the top element of the stack
    int peek();
};


#endif //DS_IMPLEMENTATION_ARRAYSTACK_H
