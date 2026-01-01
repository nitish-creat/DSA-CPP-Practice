#include <bits/stdc++.h>

using namespace std;

void dectobin(int n){
    if(n==0){
        return;

    }
    dectobin(n/2);
    cout<< n % 2;
}
void dectooct(int a){
    if(a==0){
        return;
    }
    dectooct(a/8);
    cout<<(a%8);
}
void bintodec(int a){
    int dec =0 , base=1;
    while(a>0){
        int last = a%10;
        dec+=last*base;
        base*=2;
        a/=10;
    }
    cout<<dec;

}

int main() {
    int num,bin;
    cout<< "enter a number: ";
    cin>>num;
    cout<< "enter a binary number: ";
    cin>>bin;
    cout<<"Decimal to binary: ";
    dectobin(num);
    cout<<" \nDecimal to octal: ";
    dectooct(num);
    cout<<" \nbinary to decimal: ";
    bintodec(bin);
    return 0;
}