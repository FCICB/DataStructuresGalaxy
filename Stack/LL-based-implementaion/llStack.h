
#ifndef DS_IMPLEMENTATION_LLSTACK_H
#define DS_IMPLEMENTATION_LLSTACK_H


class Node {
public:
    int data; //data stored in the node
    Node* next; //pointer to the next node

    //constructor
    Node(int value);
};
class llStack{
private:
    Node* top; //pointer to top node of the stack
public:
    //constructor
    llStack();

    //destructor
    ~llStack();

    void push(int element);
    int pop();
    bool isEmpty();
    int peek();
};


#endif //DS_IMPLEMENTATION_LLSTACK_H
