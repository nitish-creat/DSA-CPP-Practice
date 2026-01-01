#include <bits/stdc++.h>

using namespace std;
bool palin(string s){
    string clean="";
    for(auto c:s){
        if(isalnum(c)){
            clean+=tolower(c);
        }
    }

    int left=0, right=clean.size()-1;
    while(left<right){
        if(clean[left]!=clean[right]){
             return false;
          }
          left++;
          right--;
    }
    return true;

}
int main() {
    string name;
    cout<<"Enter the value: ";
    getline(cin,name);
    bool check= palin(name);
    if(check){
        cout<<"Yes it is plaindrome";
    }
    else{
        cout<<"NO it's not a plaindrome";
    }
    return 0;
}