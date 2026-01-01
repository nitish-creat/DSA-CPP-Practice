// #include <bits/stdc++.h>
// #include<utility>
// using namespace std;

// int main() {
//     pair<int , string>p={1,"nitish rana"};
//     cout<< p.first << " " << p.second;
//     return 0;
// }


// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     vector<pair<int,string>> st={
//         {82,"Nitish rana"},
//         {90,"Nikhil"},

//     };

//     sort(st.rbegin(),st.rend());

//     for(auto &p : st){
//         cout << p.second << " scored "<< p.first <<endl;
//     }
//     return 0;
// }


// #include <bits/stdc++.h>
// #include <utility>
// using namespace std;

// int main() {
//     pair<int,int>p(1,2);

//     pair<pair<int,string>,string> s1={{1,"Nitish rana"},"lovely professional university"};
//     cout<< s1.first.second<<endl;
//     cout << s1.second;
//     // cout << p.first;

//     return 0;
// }

// QUESTION : WAP TO SORT THE FOLLOWING DETAILS OF STUDENTS AND THEIR MARKS 
// BASED ON THEIR MARKS SORT THEM IN DESC ORDER 
// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     vector<pair<int,string>> students= {
//         {99,"nikhil"},
//         {88,"nitish rana"},
//         {97,"aaryan"},
//         {95,"aawesh"},
//         {98,"bhumit"},
//     };

//     sort(students.rbegin(),students.rend());
//     for(auto &s : students){
//         cout<< s.second <<" scored "<<s.first << endl;
//     }
//     return 0;
// }


#include <bits/stdc++.h>

using namespace std;

int main() {
    pair<int,int> a= {3,3} , b={3,3};
    cout<< (a<=b);
    return 0;
}