#include <iostream>
using namespace std;

void heapify(int a[], int n, int i){
    int s = i, l = 2*i+1, r = 2*i+2;
    if(l<n && a[l]>a[s]) s=l;
    if(r<n && a[r]>a[s]) s=r;
    if(s!=i){
        swap(a[i],a[s]);
        heapify(a,n,s);
    }
}

int main(){
    int n,a[100];
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];

    // Heap Sort (ascending)
    for(int i=n/2-1;i>=0;i--) heapify(a,n,i);
    for(int i=n-1;i>0;i--){
        swap(a[0],a[i]);
        heapify(a,i,0);
    }

    // Print odds
    for(int i=0;i<n;i++)
        if(a[i]%2!=0) cout<<a[i]<<" ";
    cout<<"\n";

    // Print evens
    for(int i=0;i<n;i++)
        if(a[i]%2==0) cout<<a[i]<<" ";

    return 0;
}
