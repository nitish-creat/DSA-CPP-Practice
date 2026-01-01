#include <bits/stdc++.h>
using namespace std;

class operation{
    public:
    int a;
    int b;

    void get(){
        cout<<"Enter the first input: ";
        cin>>a;
        cout<<"Enter the second input: ";
        cin>>b;

    }
    int sum(){
        cout<<"Sum of two Number: ";
        return a+b;
    }
    int sub(){
        cout<<"Sum of two Number: ";
        return a-b;
    }
    int mul(){
        cout<<"Sum of two Number: ";  
        return a*b;
    }
    int div(){
        if(b==0){
            cout<<"Invlid b";
            return a;
        }
        else{
            cout<<"division of two number: ";
            return a/b;
        }
    }
};

int main() {
    operation x;
    x.get();

    cout<<x.sum()<<endl;
    cout<<x.div();    
    return 0;
}