#include <bits/stdc++.h>
using namespace std;

class Mystack{
    public:
    queue<int> q;
    
    void push(int x){
        int size = q.size();
        q.push(x);
        cout<<"\nPush element is: "<<x;
        for(int i = 0; i<size ; i++){
            q.push(q.front());
            q.pop();
        }
    }
    void pop(){
        int ele = q.front();
        q.pop();
        cout<<"\npop element is: "<< ele;
    }
    void top(){
        cout<<"\nTop element is: "<<q.front();
    }
    bool empty(){
        return q.empty();
    }
};

int main() {
    Mystack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.top();
    st.pop();
    st.top();
    return 0;
}