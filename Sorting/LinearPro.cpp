#include <bits/stdc++.h>
using namespace std;
#define size 10
class HashTable{
    int table[size];

    public:
    HashTable(){
        for(int i=0;i<size;i++){
            table[i]=-1;
        }
    }
    int hashfun(int key){
        return key % size;
    }
    void insert(int key){
        int i=hashfun(key);
        while(table[i]!=-1){
            i=(i%1)%size;
        }
    }
};

int main() {
    
    return 0;
}