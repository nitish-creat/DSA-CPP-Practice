// #include <bits/stdc++.h>
// #include<utility>
// using namespace std;

// int main() {
//     pair<int , string>p={1,"nitish rana"};
//     cout<< p.first << " " << p.second;
//     return 0;
// }


#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<pair<string,int>> data={{"nitish rana",1},{"nikhil",2},{"abhijeet",3}};
    sort(data.begin(),data.end());
    for(auto &p : data){
        cout<<p.first<<" and his roll no is:"<<p.second<<endl;
    }
    return 0;
}