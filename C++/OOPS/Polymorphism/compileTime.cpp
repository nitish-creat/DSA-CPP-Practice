#include <iostream>
using namespace std;

class Number {
    int x;
public:
    Number(int a = 0) {
        x = a;
    }

    Number operator + (Number obj) {
        Number temp;
        temp.x = x + obj.x;
        return temp;
    }

    void show() {
        cout << x << endl;
    }
};

int main() {
    Number n1(10), n2(20);
    Number n3 = n1 + n2;
    n3.show();
    return 0;
}



//FUNCTION OVERLOADING

// #include <bits/stdc++.h>
// using namespace std;

// class A{
//     public:
//     void SayHello(){
//         cout<<"Hello kya haal hai mittr"<<endl;
//     }
//     //FUNCTION OVERLOADING
//     void SayHello(int n){
//         cout<<"Hello Jiii"<<endl;
//     }
// };

// int main() {
//     A obj;
//     obj.SayHello(1);
//     return 0;
// }