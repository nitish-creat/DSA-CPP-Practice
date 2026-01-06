#include <bits/stdc++.h>
using namespace std;

class heap{
    public:
    int arr[100];
    int size;
    heap(){
        arr[0]=-1;
        size = 0;
    }
    void insert(int val){
        size = size+1;
        int index = size;
        arr[index]=val;
        while(index > 1){
            int parent = index / 2;
            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
            }
            else{
                return;
            }
        }
    }

    void deleteFromheap(){
        if(size==0){
            cout<<"Empty"<<endl;
            return;
        }
        arr[1]=arr[size];
        size--;
        int i=1;
        while(size>i){
            int li = 2*i;
            int ri= 2*i+1;
            if(li<size && arr[li]>arr[i]){
                swap(arr[li],arr[i]);
                i=li;
            }
            else if(ri<size && arr[ri]>arr[i]){
                swap(arr[i],arr[ri]);
                i=ri;
            }else{
                return;
            }
        }
    }

    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        } cout<<endl;
    }
};

int main() {
    heap h;
    h.insert(55);
    h.insert(40);
    h.insert(45);
    h.insert(20);
    h.insert(60);
    h.insert(46);
    h.print();
    h.deleteFromheap();
    h.print();
    return 0;
}