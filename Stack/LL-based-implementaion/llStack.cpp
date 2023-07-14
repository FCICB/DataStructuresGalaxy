
#include "llStack.h"
#include "bits/stdc++.h"
using namespace std;
Node::Node(int value) {
    data=value;
    next= nullptr;
}
// ll class implementation
llStack::llStack() {
    top= nullptr;
}
llStack::~llStack() {

}
void llStack::push(int element) {
    // create a new node
    Node* newNode=new Node(element);

    // set the next pointer of the new node to the current top node
    newNode->next=top;
    //update the top pointer to the new node
    top=newNode;
}
int llStack::pop() {
    // if stack is empty retun error val
    if(isEmpty()){
        return -1;
    }
    // get the value of the top element
    int value=top->data;

    // Move the top pointer to the next node
    Node* temp=top;
    top=top->next;

    //deallocate memory for the prev top node
    delete temp;
    //return the popped value
    return value;
}
bool llStack::isEmpty() {
    return (top== nullptr);
}
int llStack::peek() {
    // if the stack is empty , return an error value
    if(isEmpty()){
        return -1;
    }
    return top->data;
}
int main(){

    llStack stack;
    stack.push(50);
    stack.push(80);
    stack.push(90); // 50 80 90
    cout<<"======Top element======\n"<<stack.peek()<<endl; //30

    stack.pop();
    stack.pop();

    cout<<"======check if the stack is empty======\n"<<"Is stack empty? "<<(stack.isEmpty()?"Yes":"No")<<endl; //No

    stack.pop();

    cout<<"\n======check if the stack is full======\n"<<"Is stack empty? "<<(stack.isEmpty()?"Yes":"No")<<endl; //yes


}
