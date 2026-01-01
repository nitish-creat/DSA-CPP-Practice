#include <bits/stdc++.h>
using namespace std;

int main() {
    fstream file2;
    file2.open("new1.txt",ios::in | ios::out);
    if(!file2){
        cout<<"file not exists";
        return 1;
    }
    file2<<"helwww world";
    file2.close();
    return 0;
}