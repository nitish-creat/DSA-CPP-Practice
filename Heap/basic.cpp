#include <bits/stdc++.h>
using namespace std;

class heap{
    public:
        int arr[100];
        int size;
        heap(){
            arr[0]=-1;
            size=0;
        }
        void insert(int value){
            size += 1;
            int index = size;
            arr[index]=value;

            while(index > 1){
                int parent=  index/2;
                if(arr[parent] < arr[index]){
                    swap(arr[parent],arr[index]);
                    index = parent;
                }
                else{
                    return;
                }
            }
        }
        void print(){
            for(int i=1;i<=size;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        void deletefromheap(){
            if(size == 0){
                cout<<"Empty :)"<<endl;
                return;
            }

            arr[1]=arr[size];
            size--;

            int i=1;
            while(i<size){
                int leftIndex = 2*i;
                int rightIndex = (2*i)+1;
                if(leftIndex< size && arr[leftIndex] > arr[i]){
                    swap(arr[leftIndex],arr[i]);
                    i = leftIndex;
                }
                else if(rightIndex< size && arr[rightIndex]>arr[i]){
                    swap(arr[rightIndex],arr[i]);
                    i = rightIndex;
                }
                else{
                    return;
                }
            }
        }
};

//  HEAPIFY
void heapify(int arr[],int n, int p){
    int largest = p;
    int left = 2*p;
    int right=2*p+1;

    if(left <= n && arr[left] > arr[largest]){
        largest = left;
    }
    if(right <= n && arr[right] > arr[largest]){
        largest = right;
    }

    if(largest != p){
        swap(arr[largest],arr[p]);
        heapify(arr,n,largest);
    }
}

void heapSort(int arr[],int n){
    int size = n ;
    while(size>1){
        swap(arr[size],arr[1]);
        size--;
        heapify(arr,size,1);
    }
}


int main() {
    heap h;
    // h.insert(54);
    // h.insert(53);
    // h.insert(55);
    // h.insert(52);
    // h.insert(50);
    // h.print();
    // h.deletefromheap();
    // h.print();
    int arr[6] = {-1,54,53,55,52,50};
    int size = 5;

    for(int i = size/2 ;i> 0;i--){
        heapify(arr,size,i);
    }
    cout<<"\nheapify Elements: "<<endl;
    for(int i=1;i<=size;i++){
        cout<<arr[i]<<" ";
    } cout<<endl ;

    heapSort(arr,size);
    cout<<"\nheapsort Elements: "<<endl;
    for(int i=1;i<=size;i++){
        cout<<arr[i]<<" ";

    } cout<<endl ;
    return 0;
}