// #include <bits/stdc++.h>

// using namespace std;
// int m=1;
// void printName(int n,string name){
//     if(m>n){
//         return ;
//     }
//     cout<<name<<" ";
//     m++;
//     printName(n,name);
// }
// int main() {
//     int n=5;
//     string name ="Nitish Rana";
//     printName(n,name);
//     return 0;
// }


#include <bits/stdc++.h>

using namespace std;

void print(int n,int m){
    if(m>n)return ;
    cout<<m<<" ";
    print(n,m+1);
}
int main() {
    int start=1,stop=10;
    print(stop,start);
    return 0;
}