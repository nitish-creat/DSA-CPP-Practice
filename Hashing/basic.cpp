#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<string,int> m;

    pair<string,int> p("Hello",2);
    pair<string,int> p2("world",1);
    m.insert(p);
    m.insert(p2);

    m["Hello2"] = 2;
    m["world2"] =3;

    cout<<m["hello"]<<endl;
    cout<<m["hllo"]<<endl;
    cout<<m["Hello"]<<endl;
    cout<<m["Hello2"]<<endl;
    cout<<m["world2"]<<endl;

    cout<<m.count("hello")<<endl;   // THE ANS IS 1 BECAUSE WE PRINT IT IN 15 LINE
    cout<<m.size()<<endl;   //  OTHER 2 ARE hello and hllo

    // m.erase("hello");
    cout<<m.size()<<endl;

    unordered_map<string,int> :: iterator it = m.begin();
    while(it != m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }
    return 0;
}