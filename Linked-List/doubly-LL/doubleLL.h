
#ifndef DS_IMPLEMENTATION_DOUBLELL_H
#define DS_IMPLEMENTATION_DOUBLELL_H

// represents a single node in the doubly ll
class Node {
public:
    int data; //data stored in the node
    Node* prev; //pointer to prev node
    Node* next; //pointer to next node

    // constructor
    Node(int value);
};
//doubly ll class
class doublyLL{
private:
    Node* head; // pointer to the head of the doubly ll

public:
    //constructor
    doublyLL();

    //destructor
    ~doublyLL();

    void insertAtBeginning(int value);
    void insertAtEnd(int value);
    void deleteNode(int value);

    // func that displays elements of the list in the forward order
    void displayForward();

    // func displays elements in a reverse order
    void displayReverse();
};


#endif //DS_IMPLEMENTATION_DOUBLELL_H
