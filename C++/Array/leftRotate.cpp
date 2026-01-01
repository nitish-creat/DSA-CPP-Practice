// LEFT ROTATE AN ARRAY BY ONE PLACE

// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     int arr[5]={1,2,3,4,5};
//     int n=5;
//     int temp=arr[0];
//     for(int i=1;i<n;i++){
//         arr[i-1]=arr[i];
//     }
//     arr[n-1]=temp;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


// LEFT ROTATE AN ARRAY BY N PLACE
#include <bits/stdc++.h>

using namespace std;

int main() {
    int size=5;
    int arr[size]={1,2,3,4,5};
    int n;
    cout<<"Enter you n: ";
    cin>>n;
    int temp[n];
    int j=0;
    for(int i=size-n;i<size;i++){
        temp[j++]=arr[i];
    }

    int main[size];
    int k=0;
    for(int i=0;i<n;i++){
        main[k++]=temp[i];
    }
    for(int i=0;i<size;i++){
        main[k++]=arr[i];
    }
    cout<<"Output: ";
    for(int i=0;i<size;i++){
       cout<< main[i]<<" ";
    }

    return 0;
}