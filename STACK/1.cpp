#include <bits/stdc++.h>
using namespace std;

class Stack{
    public:
    int top;
    int *arr;
    int size;

    Stack(int n){
        size = n;
        arr= new int[size];
        top = -1;
    }

    void push(int element){
        if(size - top >1){
            top++;
            arr[top]=element;
            cout<<"Element Pushed: "<<arr[top]<<endl;
        }else{
            cout<<"Stack overflow :)";
        }
    }
    
    void pop(){
        if(top == -1){
            cout<<"stack UnderFlow:)";
        }
        else{
            cout<<"Element Popped: "<<arr[top]<<endl;
            top--;
        }
    }

    void peek(){
        if(top == -1 ){
            cout<<"Stack is empty :)";
        }else{
           cout<<"First element: "<<arr[top]<<endl; 
        }
    }
    bool isEmpty(){
        if(top >= 0){
            return false;
        }else{
            return true;
        }
    }
};

int main() {
    Stack st(5);
    st.push(32);
    st.push(9);
    st.push(323);
    st.pop();
    st.peek();
    st.pop();
    st.pop();
    if(st.isEmpty()){
        cout<<"The stack is empty"<<endl;
    }
    st.pop();
    return 0;
}