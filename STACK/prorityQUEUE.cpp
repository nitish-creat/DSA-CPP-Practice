#include <bits/stdc++.h>
using namespace std;

class min_p{
    int data[100];
    int p[100];
    int size;
    public:
    min_p(){
        size=0;
    }

    void push(int val,int pr){
        data[size] = val;
        p[size]= pr;
        size++;
    }
    int getM(){
        int minpr = p[0];

        int index=0;
        for(int i=0;i<size;i++){
            if(p[i]>minpr){
                minpr=p[i];
                index =i;
            }
        }
        return index;
    }

    void pop(){
        if(size==0){
            cout<<"Priority queue is empty:)";
            return;
        }
        int minIndex=getM();
        for(int i=0;i<minIndex;i++){
            data[i]=data[i+1];
            p[i]=p[i+1];
        }
        size--;
    }
    int top(){
        if(size == 0){
            cout<<"Priority queue is empty:)";
            return -1;
        }
        return data[getM()];
    }

    // bool isEmpty(){
    //     return size==0;
    // }

};

int main() {
    min_p p;
    p.push(10,2);
    p.push(12,3);
    p.push(43,4);
    p.push(15,5);
    p.push(16,6);

    cout<<p.top();
    return 0;
}