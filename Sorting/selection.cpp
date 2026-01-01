#include <bits/stdc++.h>

using namespace std;
void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[min]) min = j;
        }
        swap(arr[i],arr[min]);
    }
}
int main() {
    int n=5;
    int arr[n]={22,3,42,5,43};
    selectionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}