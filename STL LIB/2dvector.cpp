// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     vector<vector<int>> matrix ={
//         {1,2,3},
//         {4,5,6},
//         {7,8,9},
//     };

//     for(int i =0;i<matrix.size();i++){
//         for(int j=0;j<matrix[i].size();j++){
//             cout<< matrix[i][j]<<" ";

//         }
//         cout<< endl;
//     }
//     return 0;
// }


// vector with user input 

#include <bits/stdc++.h>
using namespace std;
// void print(vector<pair<int ,string>> students){
//     for (auto student : students) {
//         cout << "Roll No: " << student.first << ", Name: " << student.second << endl;
//     }
// }
int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    vector<pair<int, string>> students;

    for (int i = 0; i < n; i++) {
        int roll;
        string name;
        cout << "Enter roll number: ";
        cin >> roll ;
        cout << "Enter your name: ";
        cin >>name;
        students.push_back({roll, name});
    }

    cout << "\nStudent List:\n";
    for (auto student : students) {
        cout << "Roll No: " << student.first << ", Name: " << student.second << endl;
    }

    return 0;
}
