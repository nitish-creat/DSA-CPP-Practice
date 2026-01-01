// ques 2 :--
/*
* 
* *
* * *
* * * *
* * * * *
*/
// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     for(int i=0;i<5;i++){
//         for(int j=0;j<=i;j++){
//             cout << "* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//        * 
//       * *
//      * * *
//     * * * *
//    * * * * *
//   * * * * * *
//  * * * * * * *
// * * * * * * * *


// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     int n=8;
//     for(int i =1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int k = 1; k <= i; k++) {
//             cout << "* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


#include <bits/stdc++.h>

using namespace std;
void print1(int n){
    for(int i =0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<(2*i+1);j++){
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
// ques2==  
// *******
//  *****
//   ***
//    *
void print2(int n){
    for(int i = 0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<(2*n-(2*i+1));j++){
            cout<<"*";
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
int main() {
    int n;
    cout<<"Enter your input: ";
    cin>> n;
    print2(n);
    return 0;
}