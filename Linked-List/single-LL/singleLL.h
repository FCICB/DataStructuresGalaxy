#ifndef DS_IMPLEMENTATION_SINGLELL_H
#define DS_IMPLEMENTATION_SINGLELL_H


class Node {
public:
    int data; // data stored in the node
    Node* next; // pointer address to next node

    //Constructor
    Node(int value);

};
class singleLL{
private:
    Node* head; //pointer to the head of the ll

public:
    //constructor
    singleLL();

    //Destructor
    ~singleLL();

    //Func insertion of a new node at the beginning of the list
    void insertAtBeginning(int value);

    //Func insertion of a new node at the end of the list
    void insertAtEnd(int value);

    //Func to delete a node
    void deleteNode(int value);

    // Func to display element of the list
    void display();
};


#endif //DS_IMPLEMENTATION_SINGLELL_H
