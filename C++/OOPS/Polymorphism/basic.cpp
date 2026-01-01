#include <bits/stdc++.h>
using namespace std;

class A{
    public:
    void SayHello(){
        cout<<"Hello kya haal hai mittr"<<endl;
    }
    //FUNCTION OVERLOADING
    void SayHello(int n){
        cout<<"Hello Jiii"<<endl;
    }
};

int main() {
    A obj;
    obj.SayHello(1);
    return 0;
}