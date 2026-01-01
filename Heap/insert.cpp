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
        int i = size;
        arr[i] = val;
        while(i>1){
            int parent = i / 2;
            if(arr[parent] < arr[i]){
                swap(arr[parent],arr[i]);
                i = parent;
            }
            else{
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
    h.print();
    return 0;
}