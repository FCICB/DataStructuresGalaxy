/*
#include "llQueue.h"
#include "bits/stdc++.h"
using namespace std;
llQueue::Node::Node(int value) {
    data=value;
    next= nullptr;
}
// llQ class implementation
llQueue::llQueue() {
    front= nullptr;
    rear= nullptr;
}
//destructor
llQueue::~llQueue() {

}
void llQueue::enqueue(int element) {
    //new node creation
    Node* newNode=new Node(element);
    //if queue is empty, update both front and rear pointers
    if(isEmpty()){
        front=newNode;
        rear=newNode;
    }else{
        // update the next pointer of the rear node
        rear->next=newNode;
        //update the rear pointer to the new node
        rear=newNode;
    }

}
int llQueue::dequeue() {
    //check if queue is empty
    if(isEmpty()){
        return -1;
    }
    // get front element
    int element=front->data;

    //Move the front pointer to the next node
    Node* temp=front;
    front=front->next;

    // if the front becomes null, update the rear pointer to null as well
    if(front== nullptr){
        rear= nullptr;
    }
    // deallocate memory for the prev front node
    delete temp;

    // return the dequeued element
    return element;
}
bool llQueue::isEmpty() {
    return (front== nullptr);
}
int llQueue::getFront() {
    // check if the queue is empty
    if(isEmpty()){
        return -1;
    }
    //return front element
    return front->data;
}

int main(){
   llQueue queue; //object creation
   queue.enqueue(10);
   queue.enqueue(20);
   queue.enqueue(30);

   cout<<"Front element: "<<queue.getFront()<<endl; //10

   queue.dequeue();
   queue.dequeue();

   cout<<"Is queue empty? "<<(queue.isEmpty()?"Yes":"No")<<endl;

   queue.dequeue();
   cout<<"Is queue empty? "<<(queue.isEmpty()?"Yes":"No")<<endl;




}
*/
