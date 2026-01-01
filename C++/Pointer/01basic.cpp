// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     int a=10;
//     int b = 12;
//     int *p=&a;
//     cout<< "the address of a is : "<<&a<<endl;
//     cout<< "the address of a is with pointer p: "<<p<<endl;
//     // cout<< "the value of a is : "<<a;
//     // cout<< "the value of a is with the help of p: "<<*p;

//     *p=11;
//     cout<<a;
//     cout<<*p;
//     return 0;
// }


#include <bits/stdc++.h>

using namespace std;
// class Aop{
//     int a;
//     int b;
//     public:
//     void set(int a,int b){
//         this->a=a;
//         this->a=b;
//     }
//     int sum(){
//         return a+b;
//     }
//     int mul(){
//         return a*b;
//     }
//     int div(){
//         return a/b;
//     }
// };

int main() {
    int a=2;
    int b=3;
    int *pa=&a;
    int *pb=&b;

    int select ;
    cout<<"select 1 for addtion: "<<endl;
    cout<<"select 2 for mul: "<<endl;
    cout<<"select 3 for fiv: "<<endl;
    cout<<"select 4 for modulus: "<<endl;
    cout<<"select 0 for exit: "<<endl;
    cin>>select;
    
    switch (select)
    {
    case 1:
    cout<<"Addition: "<<*pa+*pb<<endl;
        break;
    case 2:
    cout<<"mul: "<<*pa * *pb<<endl;
        break;
    case 3:
    cout<<"division: "<<*pa/ *pb<<endl;
        break;
    case 4:
    cout<<"modulos: "<<*pa%*pb<<endl;
        break;
    
    default:
    cout<<"select from 1 to 4 only";
        break;
    }
    return 0;
}