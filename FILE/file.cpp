#include <bits/stdc++.h>
using namespace std;

int main() {
    ofstream file;
    file.open("new.txt");
    if(!file){
        cout<<"there is no file";
        return 1;
    }
    file<<"yhh le bangya hacker."<<endl;
    string meme;
    cout <<"Enter the meme.: "; 
    getline(cin,meme);
    file<<meme<<endl;
    file.close();
    
    ifstream file1("new.txt");
    string content;
    if(!file1){
        cout<<"there is no file";
        return 1;
    }

    while(getline(file1,content)){
        cout <<content<<endl;
    }
    file1.close();
    return 0;
}