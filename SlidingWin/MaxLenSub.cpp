#include <bits/stdc++.h>
using namespace std;

int MaxlenSub(int arr[], int n){
    int left=0;
    int MaxLen =0;
    unordered_map<int,int> freq;
    for(int right=0 ; right<n; right++){
        freq[arr[right]]++;
        while(freq[arr[right]] > 1){
            freq[arr[left]]--;
            left++;
        }
        MaxLen = max(MaxLen,right-left+1);
    }

    return MaxLen;
}      

int main() {
    int n;
    cout<<"enter the size: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int result = MaxlenSub(arr,n);
    cout<<result;
    return 0; 
}