#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,m;;
    cout<<"Enter the row value: ";
    cin>>n;
    cout<<"Enter the col value: ";
    cin>>m;
    int arr1[n][m],arr2[n][m],arr3[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"Element at "<<i,j;
            cin>>arr1[i][j];
        }
    }

    cout<<"Second array: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"Element at "<<i,j;
            cin>>arr2[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"Element at "<<i,j;
            arr3[i][j]=arr1[i][j]+arr2[i][j];
            
        }
    }
    cout<<"Here is the added array : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}