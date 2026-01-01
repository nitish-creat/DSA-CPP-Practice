#include <bits/stdc++.h>

using namespace std;

int main() {
    int arr[]={1,1,2,3,3,3,4,4};
    int k=2;
    int bits=floor(log2(k))+1;
    cout<<bits<<endl;
    int size= sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
    int i=0;
    for(int j=1;j<size;j++){       // only for Sorted Array
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    cout<<i+1<<endl;
    for(int j=0;j<i+1;j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}