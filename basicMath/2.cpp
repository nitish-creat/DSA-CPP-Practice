#include <bits/stdc++.h>

using namespace std;
// REVERSE THE DIGIT
int main() {
    int n=94834;
    int revnum=0;
    int digit;
    while(n!=0){
        digit = n%10;
        revnum=(revnum*10)+digit;
        n/=10;
    }

    cout<<"here is the reverse number: ";
    cout<<revnum;
    return 0;
}