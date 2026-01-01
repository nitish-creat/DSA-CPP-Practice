#include <bits/stdc++.h>

using namespace std;

void print(int n){
    if(n==5){
        return ;
    }
    cout<<n<<" ";
    n++;
    print(n);
}
int main() {
    int m=0;
    print(m);
    return 0;
}