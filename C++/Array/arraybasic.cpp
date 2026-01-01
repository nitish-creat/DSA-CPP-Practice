#include <bits/stdc++.h>

using namespace std;

int main() {
    int arr[100]={2,3,4,51,2,34,2};

    for(int i=0;i<7-i;i++){
        for(int j=0;j<7-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for(int i =0;i<7;i++){
        cout<<" "<<arr[i];
    }

    return 0;
}

