#include <bits/stdc++.h>
using namespace std;

class balanceException{
    double bal;
public:
    balanceException(double b): bal(b) {}
    void show(){
        cout<<"insufficient balance: "<<bal<<endl;
    }

};

int main() {
    double withdraw=100000.0, balance = 500000.0;
    try{
        if(withdraw>balance){
            throw balanceException(balance);
        }
        balance-=withdraw;
        cout<<"Remaining balance: "<<balance<<endl;
    }
    catch(balanceException &e){
        e.show();
    }
    return 0;
}