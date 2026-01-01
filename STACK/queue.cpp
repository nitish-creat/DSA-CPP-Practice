#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};
class Queue{
    private:
    Node* front;
    Node* rear;
    public:
    Queue(){
        front=NULL;
        rear=NULL;
    }

    void enqueue(int x) {
        Node* newnode= new Node();
        newnode->data = x;
        newnode->next = NULL;

        if(rear == NULL){
            front = rear = newnode;
            cout<<"Enqueued: "<<x<<endl;
            return;
        }

        rear->next = newnode;
        rear = newnode;
        cout<<"Enqueued: "<<x<<endl;
    }

    int dequeue(){
        if(front == NULL){
            cout<<"Queue Over flow :)";
            return -1;
        }
        Node* temp= front;
        int val= temp->data;

        front = front->next;
        if(front == NULL){
            rear = NULL;
        }

        delete temp;
        return val;
    }
    int peek(){
        if(!front){
            cout<<"Queue is Empty:)";
            return -1;
        }
        return front->data;
    }
    void display(){
        if(!front){
            cout<<"Empty list :)";
            return;
        }

        Node* temp= front;
        cout<<"Queue: ";
        while(temp){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
        
    }
};



int main() {
    Queue q;
    q.enqueue(29);
    q.enqueue(32);
    q.enqueue(42);
    q.enqueue(432);
    
    cout<<"first element: "<<q.peek()<<endl;
    q.display();
    
    cout<<"the element is dequeued now: "<<q.dequeue()<<endl;
    cout<<"first element: "<<q.peek()<<endl;
    cout<<"the element is dequeued now: "<<q.dequeue()<<endl;
    cout<<"first element: "<<q.peek()<<endl;
    cout<<"the element is dequeued now: "<<q.dequeue()<<endl;
    cout<<"first element: "<<q.peek()<<endl;
    cout<<"the entire queue is this: "<<endl;
    q.display();

    return 0;
}

