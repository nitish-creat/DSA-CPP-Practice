#include <bits/stdc++.h>

using namespace std;
// modulo % it give us the reminder

int main() {
    // int a=39;
    // int digit;
    // int sum=0;
    // int sumofdig=0;
    // while(a!=0){
    //     digit=a%10;
    //     a/=10;
    //     sum++;
    //     sumofdig+=digit;

    // }
    // cout<<sum<<endl;
    // cout<<sumofdig<<endl;

    int n=2039;
    int count=(int)(log10(n)+1);
    cout<<"this is the total count of the digit: ";
    cout<<count;
    return 0;
}