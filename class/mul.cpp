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
            cout<<"Element at "<<i<<j;
            cin>>arr1[i][j];
        }
    }

    cout<<"Second array: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"Element at "<<i<<j;
            cin>>arr2[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            arr3[i][j]=0;
            for(int k=0;k<m;k++){
                arr3[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
    cout<<"Here is the mul array : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

// define class diagrams with an example and explain relationship between the classes and implement the relationship in C++;
