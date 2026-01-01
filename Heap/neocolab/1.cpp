#include <iostream>
using namespace std;

void heapifyDown(int heap[], int n, int i) {
    while (true) {
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (left < n && heap[left] > heap[largest])
            largest = left;
        if (right < n && heap[right] > heap[largest]){
            largest = right;
        }               
        if (largest != i) {
            swap(heap[i], heap[largest]);
            i = largest;
        } else {
            break;
        }
    }
}


// void hDown(int a[],int n, int i){
//     while(true){
//         int largest = i;
//         int l= 2*i+1;
//         int r= 2*i+2;
//         if(l < n && a[l]>a[largest]){
//             largest=l;
//         }
//         if(r<n&&a[r]>a[largest]){
//             largest=r;
//         }
//         if(largest!=i){
//             swap(a[i],a[largest]);
//             i==largest;
//         }else{
//             break;
//         }
//     }
// }

void heapifyUp(int heap[], int i) {
    while (i > 0) {
        int parent = (i - 1) / 2;
        if (heap[i] > heap[parent]) {
            swap(heap[i], heap[parent]);
            i = parent;
        } else {
            break;
        }
    }
}

int main() {
    int n;
    cin >> n;

    int heap[100];
    for (int i = 0; i < n; i++) {
        cin >> heap[i];
    }

    int key;
    cin >> key;

    int index = -1;
    for (int i = 0; i < n; i++) {
        if (heap[i] == key) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        for (int i = 0; i < n; i++)
            cout << heap[i] << " ";
        return 0;
    }

    heap[index] = heap[n - 1];
    n--;

    if (index > 0 && heap[index] > heap[(index - 1) / 2])
        heapifyUp(heap, index);
    else
        heapifyDown(heap, n, index);

    for (int i = 0; i < n; i++) {
        cout << heap[i] << " ";
    }

    return 0;
}
