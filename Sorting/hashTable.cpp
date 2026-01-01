#include <bits/stdc++.h>
using namespace std;

class HashTable{
    int size;
    vector<list<int>> table;

    int HashFun(int key){
        return key%size;
    }

    public:
    HashTable(int s){
        size=s;
        table.resize(size);
    }
    void insertKey(int key){
        int i = HashFun(key);
        table[i].push_back(key);
    }
    void remove(int key){
        int i = HashFun(key);
        table[i].remove(key);
    }

    bool search(int key){
        int i=HashFun(key);
        for(int val: table[i]){
            if(val==key) return true;
        }
        return false;
    }

    void display(){
        for(int i=0;i<size;i++){
            cout<<i<<"-->";
            for(int x:table[i]){
                cout<<x<<"-->";
            }
            cout<<"NULL\n";
        }
    }
};

int main() {
    HashTable ht(10);
    ht.insertKey(29);
    ht.insertKey(23);
    ht.insertKey(242);
    ht.insertKey(1);
    ht.insertKey(19);
    ht.display();
    return 0;
}