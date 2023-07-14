
#include "arrayStack.h"
#include "bits/stdc++.h"
using namespace std;
arrayStack::arrayStack(int size) {
    arr=new int[size];
    capacity=size;
    top=-1;
}
//destructor
arrayStack::~arrayStack() {
    delete[]arr;
}
// func to push an element into the stack
void arrayStack::push(int element) {
    //check if the stack is full
    if(isFull()){
        return;
    }
    //increment top index and insert the element
    arr[++top]=element;
}
// pop element func
int arrayStack::pop() {
    // if stack is empty
    if(isEmpty()){
        return -1;
    }
    // return top and decrement the top index
    return arr[top--];
}
// func to check if the stack is empty
bool arrayStack::isEmpty() {
    return (top==-1);
}
// func to check if the stack is full
bool arrayStack::isFull() {
    return (top==capacity-1);
}
//func to get the top element of the stack
int arrayStack::peek() {
    // check if stack is empty
    if(isEmpty()){
        return -1;
    }
    //return top element
    return arr[top];
}

int main(){
arrayStack stack(5);
stack.push(10);
stack.push(20);
stack.push(30); // 10 20 30
cout<<"======Top element======\n"<<stack.peek()<<endl; //30

stack.pop();
stack.pop();

cout<<"======check if the stack is empty======\n"<<"Is stack empty? "<<(stack.isEmpty()?"Yes":"No")<<endl; //No

stack.pop();

cout<<"\n======check if the stack is full======\n"<<"Is stack empty? "<<(stack.isEmpty()?"Yes":"No")<<endl; //yes

}
