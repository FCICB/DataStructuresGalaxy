/*

#include "doubleLL.h"
#include <bits/stdc++.h>
using namespace std;
// node class impl
Node::Node(int value) {
    data=value;
    prev= nullptr;
    next= nullptr;
}
//doublyl ll imp
doublyLL::doublyLL() {
    head= nullptr;
}
//destructor
doublyLL::~doublyLL() {

}
void doublyLL::insertAtBeginning(int value) {
    // create new node
    Node* newNode=new Node(value);

    // if the list is empty, set the new node as head
    if(head== nullptr){
        head=newNode;
    }else{
        // set next ptr of the new node to the current head
        newNode->next=head;

        //set the prev ptr of the curr head to the new node
        head->prev=newNode;

        //update the head pointer to the new node
        head=newNode;
    }
}
void doublyLL::insertAtEnd(int value) {
    // create a new node
    Node* newNode=new Node(value);

    // if the list is empty, set the new node as the head
    if(head== nullptr){
        head=newNode;
    }else{
        // traverse to the last node
        Node* current=head;
        while(current->next != nullptr){
            current=current->next;
        }
        // set the next ptr of the last node to the new node
        current->next = newNode;

        // set the prev ptr of the new node to the last node
        newNode->prev=current;
    }
}
void doublyLL::deleteNode(int value) {
    // if list is empty return
    if(head== nullptr){
        return;
    }
    // if the node to be deleted is the head
    if(head->data==value){
        Node* temp=head;
        //update head pointer to next node
        head=head->next;

        // if the new head exists, set it's prev ptr to nullptr
        if(head!= nullptr){
            head->prev= nullptr;
        }
        delete temp;
        return;
    }
    // traversing the list to find node to be deleted
    Node* current=head;
    while (current!= nullptr && current->data !=value){
        current=current->next;
    }
    // if node to be deleted is found
    if(current!= nullptr){
        // update the next ptr of the prev node
        if(current->prev != nullptr){
            current->prev->next=current->next;
        }
        // update the prev pointer of the next node
        if(current->next != nullptr){
            current->next->prev=current->prev;
        }
        delete current;
    }
}
void doublyLL::displayForward() {
    // list empty , display a mesgg
    if(head== nullptr){
        cout<<"List is empty.\n";
        return;
    }
    //traverse list forward and display each nod's data
    Node* current=head;
    while (current!= nullptr){
        cout<<current->data<<" ";
        current=current->next;
    }
    cout<<endl;
}
void doublyLL::displayReverse() {
    // if the list is emp display a msgg
    if(head== nullptr){
        cout<<"List is empty."<<endl;
        return;
    }
    // traverse backward and display each node's data
    Node* current=head;
    while (current->next != nullptr){
        current=current->next;
    }
    while (current!= nullptr){
        cout<<current->data<<" ";
        current=current->prev;
    }
    cout<<endl;
}
int main(){
doublyLL list;
cout<<"Insertion:\n\n";
list.insertAtEnd(10);
list.insertAtEnd(20);
list.insertAtBeginning(5);

    cout<<"=============Forward List==============\n";
list.displayForward(); // 5 10 20
    cout<<"=============Reverse List==============\n";
list.displayReverse(); // 20 10 5
    cout<<"\n\n";
cout<<"Deletion:\n\n";
list.deleteNode(10);
    cout<<"=============Forward List==============\n";
list.displayForward(); // 5 20
    cout<<"=============Reverse List==============\n";
list.displayReverse(); // 20 5
}
*/
