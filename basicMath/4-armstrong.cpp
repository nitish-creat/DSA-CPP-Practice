#include <bits/stdc++.h>

using namespace std;

int main() {
    int num = 153;
    int orinum=num;
    int count;
    int sum=0;
    count= (int)(log10(num))+1;
    while(num!=0){
        int digit=num%10;
        sum+= pow(digit,count);
        num/=10;
    }
    if(orinum==sum){
        cout << "YEs";
    }
    else{
        cout<< "No";
    }

    return 0;
}