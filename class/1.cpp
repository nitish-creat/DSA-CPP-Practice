#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,m,k=0;
    cout<<"Enter the size of first array you want: ";
    cin>>n;
    cout<<"Enter the size of second array you want: ";
    cin>>m;
    
    int arr1[n],arr2[m];
    int arr3[n+m];
    for(int i =0;i<n;i++){
        cout<<"Enter the element at "<<i<<" ";
        cin>>arr1[i];
        arr3[k++]=arr1[i];
    }
    for(int j =0;j<n;j++){
        cout<<"Enter the element at "<<j<<" ";
        cin>>arr2[j];
        arr3[k++]=arr2[j];
    }
    
    for(int i =0;i<k-1;i++){
        for(int j=0;j<k-i-1;j++){
            if(arr3[j+1]>arr3[j]){
                int temp = arr3[j+1];
                arr3[j+1]=arr3[j];
                arr3[j]=temp;
            }
        }
    }
    
    for(int i =0;i<k;i++){
        cout<<arr3[i]<<" ";
    }

    return 0;
}

// dry run of bubble sort and this question and some question on neo browser 