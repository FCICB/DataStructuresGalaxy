#include "arrayQueue.h"
#include "bits/stdc++.h"
using namespace std;
//constructor
arrayQueue::arrayQueue(int size) {
    arr=new int[size];
    capacity=size;
    front=0;
    rear=-1;
    cnt=0;
}
//destructor
arrayQueue::~arrayQueue() {
    delete[] arr;
}
// func to enqueue an element
void arrayQueue::enqueue(int element) {
    //check if queue is full
    if(isFull()){
        return;
    }
    // calc new rear index
    rear=(rear+1)%capacity;

    // insert the element at the rear position
    arr[rear]=element;
    cnt++;
}
//func to dequeue an element
int arrayQueue::dequeue() {
    // check if empty
    if(isEmpty()){
        return -1;
    }
    // get the front element
    int element=arr[front];
    // calc new front index
    front=(front+1)%capacity;
    //decrement the cnt
    cnt--;
    return element;
}
// check if queue is empty
bool arrayQueue::isEmpty() {
    return(cnt==0);
}
//check if queue is full
bool arrayQueue::isFull() {
    return (cnt==capacity);
}
//func to get front element of th queue
int arrayQueue::getFront() {
    //check if empty
    if(isEmpty()){
        return -1;
    }
    return arr[front];
}
int main(){
arrayQueue queue(5);
queue.enqueue(10);
queue.enqueue(20);
queue.enqueue(30);

cout<<"Front element: "<<queue.getFront()<<endl;

queue.dequeue();
queue.dequeue();
cout<<"Is queue empty? "<<(queue.isEmpty()?"Yes":"No")<<endl;

queue.dequeue();
cout<<"Is queue empty? "<<(queue.isEmpty()?"Yes":"No")<<endl;
}
