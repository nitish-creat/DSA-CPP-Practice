#include <bits/stdc++.h>
using namespace std;
class Hero{
    int h;
    // ACCESS MODIFIERS PRIVATE(BY DEFALUT), PUBLIC(ACCESS EVERY WHERE), PROTECTED(DERIVED CLASS);
    public:    
    char l;
    static int timeToComplete;
    Hero(){
        cout<<"Defalut constructor: "<<endl;
    }

    //PARA CONSTRUCTOR
    Hero(int h,char l){
        this->h=h;
        this->l=l;
    }

    // COPY CONSTRUCTOR
    Hero(Hero& temp){
        cout<<"Copy constructor called: "<<endl;
        this->h = temp.h;
        this->l =temp.l;
    }
    static int Staticfun(){
        return timeToComplete; //only static member
    }

    void print(){
        cout<<"Health is: "<<h<<endl;
        cout<<"Level is: "<<l<<endl;
    }
    int getH(){
        return h;
    }
    void setH(int health){
        h=health;
    }    
    int getL(){
        return l;
    }
    void setL(char level){
        l = level;
    }
    //DESTRUCTOR
    ~Hero(){
        cout<<"Destructor called"<<endl;
    }
};

//STATIC KEYWORD
int Hero::timeToComplete = 5;


int main() {
    
    cout<<"Static function: ";
    cout<<Hero::Staticfun()<<endl;
    cout<<"using static operator: "<<Hero::timeToComplete<<endl;
    Hero h1; // STATICALLY
    Hero*h2=new Hero(); //DYNAMICALLY
    // delete h2;

    Hero temp(10,'A');
    temp.print();
 
    Hero temp2(temp);  //COPY CONSTRUCTOR
    temp2.print();
    return 0;
}


//CONST KEYWORD

// class Student {
// public:
//     int roll;

//     void show() {
//         cout << roll;
//     }
// };

// int main() {
//     const Student s;
//     s.show();   // ❌ ERROR
// }


// class Student {
// public:
//     int roll;

//     void show() const {
//         cout << roll;
//     }
// };

// int main() {
//     const Student s;
//     s.show();   // ✅ allowed
// }
