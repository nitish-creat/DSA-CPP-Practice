#include <iostream>

using namespace std;

int main() {
    int num;
    cout <<"enter the number: ";
    cin>> num;
    while(num!=0){
        if(num%2==0){
            cout<<"it is even number \n";
        }
        else{
            cout<<"it is odd number \n";
        }

        cout<<"enter the number again and if you want to exit press 0: ";
        cin>>num;

    }
    return 0;
}