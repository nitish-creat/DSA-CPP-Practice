#include <bits/stdc++.h>
using namespace std;
 
class Stack{
    private:
    int arr[100];
    int top;
    int cap;

    public:
    Stack(int x){
        top=-1;
        cap=x;
    }

    bool isFulL(){
        return top== cap-1;
    }
    bool isEmpty(){
        return top==-1;
    }
    void push(int item){
        if(isFulL()){
            cout<<"Overflow condition"<<item<<endl;
            return;
        }
        arr[++top]=item;
        cout<<"Push: "<<item<<endl;
    }

    void pop(){
        if(isEmpty()){
            cout<<"Under flow condition"<<endl;
            return ;
        }
        cout<<"Popped out: "<<arr[top]<<endl;
        top--;
    }

    void print(){
        if(isEmpty()){
            cout<<"Now the arr is empty: "<<endl;
        }
        cout<<"\nElements: ";
        for(int i=top;i>=0;i--){
            cout<<arr[i]<<" "; 
        }
        cout<<endl;
    }

};
int main() {
    Stack s(10);
    s.push(29);
    s.push(39);
    s.push(43);
    s.push(24);

    s.pop();
    s.print();
    return 0;
}