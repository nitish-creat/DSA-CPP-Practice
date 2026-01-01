#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
    Node(int val){
        data=val;
        next=NULL;
    }
};

class Queue{
    int size;
    Node* front;
    Node* rear;
    
    public:
    Queue(){
        front=NULL;
        rear=NULL;
        size =0;
    }
    void enqueue(int val){
        Node* newnode= new Node(val);
        if(front == NULL){
            front = rear = newnode;
            return;
        }
        rear->next = newnode;
        rear = newnode;
        size++;
    }

    int dequeue(){
        Node* temp = front;
        if(front ==NULL){
            cout<<"The Queue is empty";
            return -1;
        }
        if(front==rear){
            int val= front->data;
            delete front;
            front = rear = NULL;
            size--;
            return val;
        }
        int del = front->data;
        front = front->next;
        delete temp;
        size--;
        return del;
    }
    int peek(){
        if(front==NULL){
            cout<<"Queue is empyt:"<<endl;
            return -1;
        }
        return front->data;
    }
    void print(){
        Node* temp= front;
        while(temp){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    ~Queue(){
        while(front !=NULL ){
            dequeue();
        }
    }
    int Size(){
        return size+1;
    }
};

int main() {
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.print();
    cout<<"size of this queue is: "<<q.Size()<<endl;
    cout<<"delete element is: "<<q.dequeue()<<endl;
    cout<<"delete element is: "<<q.dequeue()<<endl;
    cout<<"peek element is: "<<q.peek()<<endl;
    q.print();
    cout<<"size of this queue is: "<<q.Size();
    return 0;
}