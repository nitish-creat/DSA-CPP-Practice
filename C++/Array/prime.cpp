#include <bits/stdc++.h>

using namespace std;
bool check(int n){
    if(n<=1) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    for(int i=3;i*i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main() {
    int n =7;
    int arr[n]={1,2,5,3,10,9,19};
    for(int i=0;i<n;i++){
        if(check(arr[i])){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}




// print even index 
// print every digit is it prime or not