
// so basically patterns are not mandatory for the interview , and pattern means nested loops
// rules for the pattern is:-
// 1.the outer loop is for rows 
// 2.the inner loop is for col and connect them somehow to the rows
// 3.whatever we need to print , print in the inner loop
// 4. observe symmetry

/* ques :--
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * *
*/
#include <bits/stdc++.h>
using namespace std;
void printpattern(int n){
    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
}
int main() {
    int n;
    cout<<"Enter positive number: ";
    cin>> n;
    printpattern(n);
    return 0;
}


