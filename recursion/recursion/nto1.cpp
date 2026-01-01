// #include <bits/stdc++.h>

// using namespace std;
// void reverse(int n,int i){
//     if(i<1) return;
//     cout<<i<<" ";
//     reverse(n,i-1);
// }
// int main() {
//     int n;
//     cin>>n;
//     reverse(n,n);
//     return 0;
// }

//NOW 1 TO N;


#include <bits/stdc++.h>

using namespace std;
void start(int n,int i){
    if(i>n) return ;
    cout<<i<<" ";
    start(n,i+1);
}
int main() {
    int n;
    cin>>n;
    start(n,1);
    return 0;
}