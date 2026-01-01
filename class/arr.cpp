#include <bits/stdc++.h>

using namespace std;
void evenIndex(int arr[],int size){
    for(int i=0;i<size;i++){
        if(i%2==0){
            cout<<arr[i]<<" ";
        }
    }
}

// task 2
void isprime(int n){
   if(n <= 1){
        cout << n << " No it is not prime ";
        return;
    }
    if(n == 2){
        cout << n << " Yes it is prime ";
        return;
    }
    if(n % 2 == 0){
        cout << n << " No it is not prime ";
        return;
    }
    for(int i=3;i*i<n;i++){
        if(n%i==0){
            cout<<n<<" No it is not prime ";
            return;
        }
    }
    cout<<n<<" Yes it is prime ";
}

int main() {
    int n=6;
    int arr[n]={2,442,524,23,53,24};
    evenIndex(arr,n);
    cout<<endl;
    int digit;
    for(int i=0;i<n;i++){
        int temp=arr[i];
        while(temp>0){
            digit=temp%10;
            isprime(digit);
            temp/=10;
        }
        cout<<endl;
    }
    return 0;
}