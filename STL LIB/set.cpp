#include <bits/stdc++.h>

using namespace std;

int main() {
    set<int> st;
    st.insert(2);
    st.insert(3);
    st.insert(1);
    st.insert(2);

    for(auto it = st.begin();it!=st.end();it++){
        cout<< *it <<" ";  // print sorted
    }
    cout<<endl;
 
    auto it = st.find(1);
    cout<<*it;

    return 0;
}