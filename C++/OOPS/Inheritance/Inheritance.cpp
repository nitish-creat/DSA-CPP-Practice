#include <bits/stdc++.h>
using namespace std;

class Human{
    public:
    int height;
    int weight;
    int age;

    public:
    int getAge(){
        return this->age;
    }
    void setAge(int age){
        this->age = age;
    }
};

class Male : public Human{
    public:
    string colour;

    void sleep(){
        cout<<"Male sleep"<<endl;
    }
};

class female : protected Human{
    public:
    string colour;

    void Seth(int h){
        this->height = h;
    }

    int geth(){
        return this->height;
    }
};

int main() {
    Male m1;
    m1.age=20;
    m1.colour ="White";
    cout<<"Age is : "<<m1.age<<endl;
    cout<<"colour is : "<<m1.colour<<endl;
    m1.sleep();

    female f1;
    f1.Seth(21);
    // f1.age=221;   // NOT ACCESSIBLE BECAUSE OF THE MODE IS PROTECTED
    cout<<"Age of f1: "<<f1.geth();

    return 0;
}