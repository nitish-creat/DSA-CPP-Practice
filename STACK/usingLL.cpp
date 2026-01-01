#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        next = NULL;
    }
};

class Stack{
    Node* top;
    public:
    Stack(){
        top=NULL;
    }

    void push(int val){
        Node* newNode= new Node(val);
        newNode->next=top;
        top=newNode;
    }
    int pop(){
        if(top==NULL){
            cout<<"Stack underflow"<<endl;
            return -1;
        }
        Node* temp= top;
        int Popele = top->data;
        top=top->next;
        delete temp;
        return Popele;
    }

    int peek(){
        if(top==NULL){
            cout<<"Stack is empty"<<endl;
            return -1;
        }

        return top->data;
    }
    void print(){
        if(top==NULL){
            cout<<"stack is empty"<<endl;
            return;
        }
        Node* temp= top;
        while(temp){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout <<endl;
    }

    bool isEmpty(){
        return top == NULL;
    }

    ~Stack(){
        while(!isEmpty()){
            pop();
        }
    }
};

int main() {
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.print();
    cout<<"pop element is: "<<s.pop()<<endl;
    s.print();
    cout<<"pop element is: "<<s.pop()<<endl;
    cout<<"pop element is: "<<s.pop()<<endl;
    cout<<"peek element is: "<<s.peek()<<endl;
    cout<<"pop element is: "<<s.pop()<<endl;
    cout<<"pop element is: "<<s.pop()<<endl;
    return 0;
}