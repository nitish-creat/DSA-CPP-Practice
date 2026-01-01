// #include <bits/stdc++.h>
// #include<vector>
// using namespace std;

// int main() {
//     vector<int> v1={1,3,2,4,2};
//     v1.push_back(2);
//     v1.push_back(2);
//     v1.push_back(3);
//     v1.push_back(5);

//     for(int i : v1){
//         cout<< i << " ";
//     }
//     cout<< endl;
    
    
//     // v1.clear();
//     v1.push_back(34);
//     v1.insert(v1.begin()+1,20);
//     for(int i : v1){
//         cout<< i << " ";
//     }
//     // cout<< v1.empty();
//     if(v1.empty()){
//         cout<< " now the vector is empty";
//     }
    
//     cout<< endl;
//     // cout<< v1[20]<<endl;
//     // cout<< v1.at(20)<<endl;

//     // if(v1.at(20)){
//     //     cout<< "there is nothign beyond 10";
//     // }

//     sort(v1.rbegin(),v1.rend());
//     for(int i : v1){
//         cout<< i << " ";
//     }
//     return 0;
// }


// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     int n;
//     cout<< "enter the size of the data"<<endl;
//     cin>> n;
//     vector<pair<string,int>> data;

//     for(int i=0;i<n;i++){
//         string name;
//         int roll;
        
//         cout<<"enter the name first and then roll no for the "<<i+1<<" : ";
//         cin>> name>> roll;
//         data.push_back({name,roll});
//     }

//     sort(data.rbegin(),data.rend());
//     for(auto &p : data){
//         cout<< "the name of the student is "<<p.first<< " and the his roll no is: "<<p.second<<endl;
//     }

//     data.front();
//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

int main() {
    pair<int,string> arr[3]={{1,"Nitish Rana"},{2,"nikhil"}};

    for(auto i:arr){
        cout<< i.first <<" and name is :"<<i.second<<endl;
        }
    return 0;
}