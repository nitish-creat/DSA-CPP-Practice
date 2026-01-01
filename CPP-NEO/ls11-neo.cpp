#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    void setDetails(string n, int a) {
        name = n;
        age = a;
    }

    void updateAge(int newAge) {
        int* ptr = &age;  // pointer to age (member pointer concept)
        cout << "Current age: " << *ptr << endl;
        *ptr = newAge;
        cout << "Updated age: " << *ptr;
    }
};

int main() {
    Student s;
    string name;
    int currentAge, newAge;

    getline(cin, name);
    cin >> currentAge >> newAge;

    s.setDetails(name, currentAge);
    s.updateAge(newAge);

    return 0;
}



// ✅ Sample Input 1
// sandeep
// 20
// 23

// ✅ Output
// Current age: 20
// Updated age: 23

// ✅ Sample Input 2
// John Doe
// 21
// 23

// ✅ Output
// Current age: 21
// Updated age: 23


#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = arr[0];
    int smallest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest)
            largest = arr[i];
        if (arr[i] < smallest)
            smallest = arr[i];
    }

    cout << "The largest element is: " << largest << endl;
    cout << "The smallest element is: " << smallest;

    return 0;
}


// ✅ Sample Input 1
// 5
// 89 68 57 54 25

// ✅ Output
// The largest element is: 89
// The smallest element is: 25


#include <iostream>
using namespace std;

class MatrixSum {
public:
    void calculateSum(int r, int c) {
        int matrix[10][10];

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> matrix[i][j];
            }
        }

        for (int i = 0; i < r; i++) {
            int rowSum = 0;
            for (int j = 0; j < c; j++) {
                cout << matrix[i][j] << " ";
                rowSum += matrix[i][j];
            }
            cout << "SUM: " << rowSum;
            if (i != r - 1) cout << endl; // no extra newline at end
        }
    }
};

int main() {
    int r, c;
    cin >> r >> c;
    MatrixSum obj;
    obj.calculateSum(r, c);
    return 0;
}
