#include <bits/stdc++.h>
#include<fstream>
#include<string>
using namespace std;

int main() {
    ofstream out;
    out.open("sample.txt");
    out<<"hello world..\n";
    out<<"hello world 2\n";
    out<<"hello world 3\n";
    out.close();

    ifstream in;
    in.open("sample.txt");
    string st;
    while(in.eof() == 0){
        getline(in,st);
        cout<<st<<endl;
    }
    
    return 0;
}