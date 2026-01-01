#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> v={1,34,43,4323,4,2};
    vector<int> :: iterator it=v.begin();
    // cout<< (*it+1);

    for(it = v.begin();it!=v.end();it++){
        cout << (*it)<<endl;
    }
    return 0;
}