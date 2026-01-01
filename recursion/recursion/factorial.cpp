#include <bits/stdc++.h>

using namespace std;
int fact(int n,int i=1)
{
    if(n<=1){
        return i;
    }
    return fact(n-1,n*i);
}
int main() {
    int a;
    cout<<"enter any number: ";
    cin>> a;
    cout<<"Factorial of the number: "<<fact(a)<<endl;
    

    return 0;
}