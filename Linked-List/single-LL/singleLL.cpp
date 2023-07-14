/*
#include "singleLL.h"
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// Node class
Node::Node(int value) {
    data=value;
    next= nullptr;
}
//singleLL class
singleLL::singleLL() {
    head= nullptr;
}
singleLL::~singleLL() {

}
void singleLL::insertAtBeginning(int value) {
    Node* newNode= new Node(value);

    // set pointer of the new node to the current head
    newNode->next=head;

    // update head pointer to the new node
    head=newNode;
}
void singleLL::insertAtEnd(int value) {
    // new node creation
    Node* newNode=new Node(value);

    // if the list is empty, set the new node as the head
    if(head== nullptr){
        head=newNode;
        return;
    }

    // Traverse to last node
    Node* current=head;
    while (current->next != nullptr){
        current=current->next;
    }
    // set the next ptr of the last node to the new node
    current->next=newNode;
}
void singleLL::deleteNode(int value) {
    // if the list is empty, return
    if(head== nullptr){
        return;
    }
    // if the node to be deleted is the head , update the head pointer
    if(head->data==value){
        Node* temp=head;
        head=head->next;
        delete temp;
        return;
    }
    // traverse the list to find the node to be deleted and it's prev node
    Node* current=head;
    Node* previous= nullptr;
    while(current!= nullptr && current->data != value){
        previous=current;
        current=current->next;
    }
    // if the node to be deleted is found,update the links and delete the node
    if(current!= nullptr){
        previous->next=current->next;
        delete current;
    }

}
void singleLL::display() {
    // if the list is empty, display a message
    if(head== nullptr){
        cout<<"List is empty\n";
        return;
    }
    // traverse the list and display each node data
    Node* current=head;
    while (current!= nullptr){
        cout<<current->data<<" ";
        current=current->next;
    }
    cout<<endl;
}
int main(){

    singleLL list;
    cout<<"========insertion:========\n";
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtBeginning(5);

    list.display(); //5 10 20

    list.deleteNode(10);
    cout<<"\n\n========deletion:========\n";
    list.display(); // 5 20

}
*/
