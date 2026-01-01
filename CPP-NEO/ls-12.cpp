// You are using GCC
#include <iostream>
#include <iomanip>
using namespace std;

class Expense {
public:
    string category;
    double amount;
    string date;

    void setData(string c, double a, string d) {
        category = c;
        amount = a;
        date = d;
    }
};

int main() {
    int n;
    cin >> n;
    Expense arr[10];

    for (int i = 0; i < n; i++) {
        string cat, date;
        double amt;
        cin >> cat >> amt >> date;
        arr[i].setData(cat, amt, date);
    }

    string searchCategory;
    cin >> searchCategory;

    double totalSum = 0.0;
    double categorySum = 0.0;

    for (int i = 0; i < n; i++) {
        totalSum += arr[i].amount;
        if (arr[i].category == searchCategory) {
            categorySum += arr[i].amount;
        }
    }

    cout << fixed << setprecision(2);
    cout << "Total Expenses: " << totalSum << endl;
    cout << searchCategory << ": " << categorySum;

    return 0;
}


// ✅ Sample Input 1
// 4
// Food 25.50 2023-01-15
// Transportation 12.75 2023-01-17
// Shopping 50.00 2023-01-18
// Food 15.25 2023-01-20
// Food

// ✅ Expected Output
// Total Expenses: 103.50
// Food: 40.75


// You are using GCC
#include <iostream>
#include <algorithm>   // for reverse()
using namespace std;

bool isPalindrome(string s) {
    string rev = s;             // copy original string
    reverse(rev.begin(), rev.end());  // STL function to reverse

    cout << "Reversed String: " << rev << endl;

    if (s == rev)
        cout << "The string is a palindrome";
    else
        cout << "The string is not a palindrome";

    return (s == rev);
}

int main() {
    string str;
    cin >> str;
    isPalindrome(str);
    return 0;
}





// You are using GCC
#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string author;
    int year;

    void setDetails(string t, string a, int y) {
        title = t;
        author = a;
        year = y;
    }

    void display(int index) {
        cout << "Book " << index + 1 << ":" << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Publication Year: " << year;
    }
};

int main() {
    int n;
    cin >> n;
    cin.ignore(); // to consume newline after integer input

    Book arr[10];
    for (int i = 0; i < n; i++) {
        string t, a;
        int y;

        getline(cin, t);
        getline(cin, a);
        cin >> y;
        cin.ignore(); // consume newline before next title input

        arr[i].setDetails(t, a, y);
    }

    cout << "Book Information:" << endl;

    for (int i = 0; i < n; i++) {
        arr[i].display(i);
        if (i != n - 1)
            cout << endl; // ensure no extra line at end
        cout << endl;
    }

    return 0;
}


// 🧪 Test Case 1

// Input:

// 2
// India
// Gandhi
// 1947
// Tiger
// Haritha
// 2005


// Output:

// Book Information:
// Book 1:
// Title: India
// Author: Gandhi
// Publication Year: 1947
// Book 2:
// Title: Tiger
// Author: Haritha
// Publication Year: 2005