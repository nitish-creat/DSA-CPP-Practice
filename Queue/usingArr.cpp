#include <bits/stdc++.h>
using namespace std;

class Queue{
    int *arr;
    int front;
    int rear;
    int size;

    public:
    Queue(int size){
        this->size= size;
        arr= new int[size];
        front=-1;
        rear =-1;
    }

    void enqueue(int val){
        if(rear == size-1){
            cout<<"Queue overflow"<<endl;
            return;
        }
        if(front == -1){
            front =0;
        }
        rear++;
        arr[rear]=val;
    }

    int dequeue(){
        if(front == -1 || front>rear){
            cout<<"Queue UnderFlow"<<endl;
            return -1;
        }
        int dequeueEle = arr[front];
        arr[front++];
        return dequeueEle;
    }

    int peek(){
        if(front ==- 1 || front>rear){
            cout<<"Queue is Empty"<<endl;
            return -1;
        }
        return arr[front];
    }
    void print(){
        if(front == -1 || front> rear){
            cout<<"Queue is empty"<<endl;
            return;
        }
        for(int i = front ; i<=rear;i++){
            cout<<arr[i]<<" ";  
        }
        cout<<endl;
    }
    int SizeQ(){
        if(front == -1 || front> rear){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return rear - front + 1;
    }
};

int main() {
    Queue q(10);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.print();
    cout<<"Size of the queue is: "<<q.SizeQ()<<endl;
    cout<<"Dequeued element: "<<q.dequeue()<<endl;
    cout<<"Dequeued element: "<<q.dequeue()<<endl;
    cout<<"peek element: "<<q.peek()<<endl;
    q.print();
    cout<<"Size of the queue is: "<<q.SizeQ();
    return 0;
}