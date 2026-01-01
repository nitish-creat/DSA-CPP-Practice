#include <bits/stdc++.h>

using namespace std;
void ArrRev(int arr[],int start,int end){
    if(start>=end)return;
    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    ArrRev(arr,start+1,end-1);
}
int main() {
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    ArrRev(arr,0,9);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}