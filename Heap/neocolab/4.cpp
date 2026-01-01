#include <iostream>
using namespace std;

void heapify(int a[], int n, int i){
    int s=i,l=2*i+1,r=2*i+2;
    if(l<n && a[l]<a[s]) s=l;
    if(r<n && a[r]<a[s]) s=r;
    if(s!=i){
        swap(a[i],a[s]);
        heapify(a,n,s);
    }
}

int main(){
    int n,a[100];
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];

    for(int i=n/2-1;i>=0;i--) heapify(a,n,i);

    for(int k=0;k<2;k++){
        a[0]=a[n-1];
        n--;
        heapify(a,n,0);
    }

    for(int i=0;i<n;i++) cout<<a[i]<<" ";
    return 0;
}
