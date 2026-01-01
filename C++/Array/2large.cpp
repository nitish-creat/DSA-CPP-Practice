#include <bits/stdc++.h>

using namespace std;

int main() {
    int n=5;
    int arr[n]={3,42,452,54,243};
    int max=arr[0];
    
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    for(int i=0;i<n-1;i++){
        if(arr[i]==max){
            arr[i]=arr[i+1];
        }
    }
    // n--;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int secondmax=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>secondmax){
            secondmax=arr[i];
        }
    }
    cout<<max;
    cout<<endl;
    cout<<secondmax;
    return 0;
}