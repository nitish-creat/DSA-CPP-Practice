#include <bits/stdc++.h>
using namespace std;

class Stack{
    int top;
    int *arr;
    int size;
    public:
    Stack(int size){
        top=-1;
        this->size=size;
        arr = new int[size];
    }

    void push(int val){
        if(top == size-1){
            cout<<"Stack OverFlow :)"<<endl;
            return;
        }
        top++;
        arr[top]=val;
    }

    int pop(){
        if(top == -1){
            cout<<"Stack UnderFlow :)"<<endl;
            return -1;
        }
        return arr[top--];
    }

    int peek(){
        if(top == -1){
            cout<<"Stack is empty";
            return -1;
        }
        return arr[top];
    }

    bool isFull(){
        return top == size-1;
    }

    bool isEmpty(){
        return top == -1;
    }

    void print(){
        for(int i=top;i>=0;i--){
            cout<<arr[i]<<" ";
        }
        cout<<endl ;
    }
};

int main() {
    Stack s(10);
    s.push(20);
    s.push(2);
    s.push(3);
    s.push(22);
    s.print();

    s.pop();
    s.print();
    cout<<"Top element: "<<s.peek();
    return 0;
}