#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> keys(n);
    for (int i = 0; i < n; i++) {
        cin >> keys[i];
    }
    int size = 7;
    vector<vector<int>> table(size);

    for (int key : keys) {
        int index = key % size;
        table[index].push_back(key);
    }

    for (int i = 0; i < size; i++) {
        cout << "Index " << i << ": ";
        if (table[i].empty()) {
            cout << "Empty";
        } else {
            for (int val : table[i]) {
                cout << val << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
