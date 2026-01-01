#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size: ";
    cin>>n;

    vector<int> keys(n);

    for(int i=0;i<n;i++){
        cin>>keys[i];
    }
    int size = 7;
    vector<int> table(size,-1);

    for(auto key : keys){
        int i = key%size;

        while(table[i]!=-1){
            i = (i+1)%size;   //Linear probing
        }

        // while(table[i] !=-1){
        //     i = (table[i] + i*i)%size;     //quadratic probing
        // }
        table[i]=key;
    }

    for(int i =0;i<size;i++){
        if(table[i] == -1 ){
            cout<<"Empty"<<endl;
        }
        else{
            cout<<table[i]<<endl;
        }
    }
    return 0;
}