// #include <bits/stdc++.h>
// using namespace std;

// class Complex{
//     int real, img;

//     public:
//     Complex(){
//         real = img =0;
//     }
//     Complex(int r, int i){
//         real = r;
//         img = i;
//     }
//     void print(){
//         cout<<real<<" + "<<img<<"i"<<endl;
//     }

//     Complex operator +(Complex c){     
//         Complex temp;
//         temp.real= real +c.img;
//         temp.img = img +c.real;
//         return temp;
//     }
// };

// int main() {
//     int x=10,y=20;
//     Complex c1(x,y);
//     Complex c2(x+1,y+3);
//     Complex c3;

//     c3 = c1 + c2;
//     c3.print();
//     return 0;
// }




#include <iostream>
using namespace std;

class Vault {
private:
    int gold;
    int silver;
    int bronze;

public:
    Vault(int g = 0, int s = 0, int b = 0) {
        gold = g;
        silver = s;
        bronze = b;
    }

    Vault operator+(const Vault &v) const {
        return Vault(
            gold + v.gold,
            silver + v.silver,
            bronze + v.bronze
        );
    }

    Vault operator-(const Vault &v) const {
        int g = gold - v.gold;
        int s = silver - v.silver;
        int b = bronze - v.bronze;

        if (g < 0) g = 0;
        if (s < 0) s = 0;
        if (b < 0) b = 0;

        return Vault(g, s, b);
    }

    friend ostream& operator<<(ostream &out, const Vault &v) {
        out << "Gold: " << v.gold 
            << ", Silver: " << v.silver 
            << ", Bronze: " << v.bronze;
        return out;
    }
};

int main() {
    Vault v1(10, 20, 30);
    Vault v2(5, 25, 40);

    Vault merged = v1 + v2;
    Vault safeSub = v1 - v2;

    cout << "Merged Vault → " << merged << endl;
    cout << "Safe Subtraction → " << safeSub << endl;

    return 0;
}
