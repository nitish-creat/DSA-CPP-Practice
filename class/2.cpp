#include <bits/stdc++.h>

using namespace std;

int main() {
    int arr[]={45,53,1,4,5,24,532};
    int n=7;
    for(int i =0;i<n-1;i++){   //Bubble sort 
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}