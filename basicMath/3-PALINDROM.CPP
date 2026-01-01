#include <bits/stdc++.h>

using namespace std;

int main() {
    int num =1231;
    int orinum=num;

    int revnum=0;
    int digit;
    while(num!=0){
        digit=num%10;
        revnum=(revnum*10)+digit;
        num/=10;
    }
    cout<<orinum<<endl;

    if(orinum==revnum){
        cout<<orinum<<"=="<<revnum<<endl;
        cout<<"Yes";
    }
    else{
        cout<<orinum<<"!="<<revnum<<endl;
        cout <<"No";
    }
    return 0;
}