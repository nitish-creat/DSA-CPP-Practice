#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    try {
        if (n > 0)
            throw 1;        // positive
        else if (n < 0)
            throw -1;       // negative
        else
            throw 0;        // zero
    }
    catch (int x) {
        if (x == 1)
            cout << "You Entered Positive number";
        else if (x == -1)
            cout << "You Entered Negative Number";
        else
            cout << "You Entered Zero";
    }

    return 0;
}
