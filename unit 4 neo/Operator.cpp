// UNARY OPERATOR

// #include <bits/stdc++.h>
// using namespace std;

// class Increment{
//     int value;
//     public:
//     Increment(int val){
//         value = val;
//     }

//     void operator++(){
//         value = value+1;
//     }
//     void show(){
//         cout<<value;
//     }
// };

// int main() {
//     Increment in(5);
//     cout<<"before increment: ";
//     in.show();
//     ++in;
//     cout<<"\nafter increment: ";
//     in.show();
//     return 0;
// }


// BINARY OPERATOR

#include <bits/stdc++.h>
using namespace std;

class Add{
    int a;
    public:
    /*IF WE ARE ADDING EXPLICT THEN WE CAN'T BE ABLE TO DO TYPE CONVERSION*/
    explicit Add(int n1=0){       
        a= n1;
    }

    Add operator+(Add obj){
        Add res;
        res.a = a + obj.a;
        return res;
    }

    // CLASS TYPE TO BASIC TYPE

    operator int(){
        return a;
    }

    void print(){
        cout<<a<<endl;
    }
};

int main() {
    Add n1(10);
    Add n2(20);
    int x=10;
    // Add n4 = x;    // BASIC TYPE TO CLASS TYPE
    Add n3= n1 + n2;
    n3.print();
    int b = n2;     // CLASS TYPE TO BASIC TYPE
    cout<<b<<endl;
    // cout<<endl;
    // n4.print();
    return 0;
}