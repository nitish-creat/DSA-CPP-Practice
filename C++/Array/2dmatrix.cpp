#include <bits/stdc++.h>

using namespace std;

int main() {
    int rows=2;
    int col=2;
    string name= "HELLO WORLD";
    int len = name.size();
    int arr [rows][col];

    // cout<< len;

    for(int i = len-1;i>=0;i--){
        cout << name[i];
    }
    // for(int i =0;i<rows;i++){
    //     for(int j=0;j<col;j++){
    //         cout << "Enter the element at [" << i << "][" << j << "]: ";
    //         cin>> arr[i][j];
    //     }
    // }
    // for(int i =0;i<rows;i++){
    //     for(int j=0;j<col;j++){
    //         cout<<arr[i][j]<<endl;
    //       }
    //     //   cout<<endl;
    // }
    // return 0;
}