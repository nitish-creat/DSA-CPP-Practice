
//Do bracket ques
//undo and redo ques

#include <bits/stdc++.h>
using namespace std;
class Stack{
    int top;
    int arr[5];
    public:
    Stack(){
        top =-1;
    }
    public:
    void push(int val){
        if(top==4) cout<<"Overflow!!"<<endl;
        else{
            arr[++top]=val;
            cout<<val<<" Push in stack"<<endl;
        }
    }

    void pop(){
        if(top==-1){
            cout<<"Underflow condition!"<<endl;
        }
        else{
            cout<<arr[top--]<<" Pop from the stack"<<endl;
        }
    }

    void peek(){
        if(top==-1){
            cout<<"Stack is empty";
        }
        cout<<arr[top]<<" peeked element"<<endl;
    }

    void display() {
        if (top== -1) {
            cout << "Stack is empty\n";
        } else {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; i--)
                cout << arr[i] << " ";
            cout << endl;
        }
    }
};


int main() {
    Stack s ,s1;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s1.push(232);
    s1.push(234);
    s1.push(233);
    s.pop();
    s.peek();
    s.pop();
    s.pop();
    s.display();
    s1.display();
    return 0;
}