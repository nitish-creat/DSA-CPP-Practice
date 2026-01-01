#include <bits/stdc++.h>
using namespace std;

class Base1{
    public:
    void show(){
        cout<<"base 1"<<endl;
    }
};

class Base2{
    public:
    void show(){
        cout<<"base 2"<<endl;
    }
};
class derived : public Base1 , public Base2{    
    public:
    void fun(){
       Base2::show();
    }
};


int main() {
    Base1 b1;
    Base2 b2;
    b1.show();
    derived d;
    d.fun();
    return 0;
}