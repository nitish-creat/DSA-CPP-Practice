#include <bits/stdc++.h>
using namespace std;
class Hero{
    int h;
    public:    // ACCESS MODIFIERS PRIVATE(BY DEFALUT), PUBLIC(ACCESS EVERY WHERE), PROTECTED(DERIVED CLASS);
    char l;
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

    ~Hero(){
        cout<<"destructor is called"<<endl;
    }
};

int main() {

    //STATIC ALLOCATION
    Hero h1;
    h1.l;
    cout<<"Enter the char: ";
    cin>>h1.l;
    h1.setH(20);
    cout<<"the health is: "<<h1.getH()<<endl;
    cout<<"the size of l: "<<h1.l<<" : "<<sizeof(h1.l)<<endl;
    cout<<"the size of object is: "<<sizeof(h1)<<endl;  // ans is 8 why?? because of padding


    //DYNAMICALLY ALLOCATION
    Hero *h2 =new Hero;
    h2->setL('A');
    cout<<"Level is: "<<h2->l<<endl;
    delete h2;

    return 0;
}