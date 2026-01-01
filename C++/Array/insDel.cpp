#include <bits/stdc++.h>
using namespace std;

void traverse(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insertAtBeg(int arr[],int &n,int val){
    for(int i=n-1;i>=0;i--){
        arr[i+1]=arr[i];
    }
    arr[0]=val;
    n++;
}
void insertAtend(int arr[],int &n,int x ){
    arr[n+1]=x;
    n++;
}

void insPos(int arr[],int &n,int pos,int val){
    for(int i=n-1;i>=pos;i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=val;
    n++;
}

void dltEnd(int arr[],int&n){
    if(n>0) n--;
}
void dltbeg(int arr[],int &n){
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
}

void delpos(int arr[],int &n,int pos){
    for(int i=pos;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
}
int main() {
    int n;
    int arr[n];
    cout<<"Enter n: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Initial array: ";
    traverse(arr,n);
    cout<<"insertion at beg: ";
    insertAtBeg(arr,n,0);
    return 0;
}