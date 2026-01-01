/*
SINGLE INHER.. --> DERIVED CLASS INHERITS FROM ONE BASE CLASS BUT NOT VICE VERSA

MULTIPLE INHER.. -->A DERIVED CLASS INHERITS FROM MORE THAN ONE BASE CLASS

MULTILEVEL INHER.. --> GRANDPARENT --> PARENT --> DERIVED CLASS

HIERARICAL INHER.. --> MULTIPLE CLASSES INHERIT FROM A SINGLE BASE CLASS

HYBRID INHER.. --> A COMBINATION OF TWO OR MORE TYPES OF INHER.. 
*/


// SINGLE INHER..

// #include <bits/stdc++.h>
// using namespace std;

// class A{
//     public:
//     int add(int a=0,int b=0){
//         return a+b;
//     }
// };
// class B : private A{
//     public:
//     int fun(int a=0,int b=0){
//         return add(a,b);
//     }
// };
// int main() {
//     B b;
//     int a,c;
//     cin>>a>>c;
//     cout<<b.fun(a);
//     return 0;
// }


// MULTIPLE INHER..

#include <bits/stdc++.h>
using namespace std;

class A{            
    public:
    void show(){     //IF THERE IS SAME FUNCTION IN MORE THAN ONE CLASS
        cout<<"Show from A";
    }
};

class B{
    public:
    void show(){
        cout<<"Show from b";
    }
};

class C:public A , public B{
    public:
    void show(){
        A::show();       // FOR CALLING THE FUNCTION OF CLASS A
        cout<<endl;
        B::show();
    }
};

int main() {
    C c;
    c.show();
    return 0;
}