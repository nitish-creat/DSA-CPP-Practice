#include <bits/stdc++.h>
using namespace std;

int maxSumofsubarr(int arr[],int n,int k){
    int windowSum = 0;

    for(int i=0;i<k;i++){
        windowSum += arr[i];
    }

    int maxSum = windowSum;

    for(int i=k;i<n;i++){
        windowSum += arr[i];
        windowSum -= arr[i-k];
        maxSum = max(windowSum,maxSum);
    }

    return maxSum;
}

int main() {
    int n;
    cout<<"Enter the array size: ";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Enter the subarray size : ";
    int k;
    cin>>k;

    int MaxSub = maxSumofsubarr(arr,n,k);
    cout<<"Max subarray of the main array: "<<MaxSub<<endl;
    return 0;
}