#include <bits/stdc++.h>

using namespace std;
int sum(int num){
    int s=0;
    while(num>0){
        s+=num%10;
        num/=10;
    }
    return s;
}

void sort(int arr[],int size){
    for(int i=1;i<size;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }

        arr[j+1]=key;
    }
}

void selSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;

    }
}

int main() {
    int size;
    cout<<"enter the size of array: ";
    cin >> size;
    int arr[size];
    for(int i=0;i<size;i++){
        cout<<"enter the "<<i+1<<" element: ";
        cin>>arr[i];
    }

    selSort(arr,size);
    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}