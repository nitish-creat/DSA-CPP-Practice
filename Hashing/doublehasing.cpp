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
    vector<int> table(size, -1);

    for (int key : keys) {
        int h1 = key % size;
        int h2 = 1 + (key % (size - 1));

        int i = 0;
        int index;

        while (true) {
            index = (h1 + i * h2) % size;

            if (table[index] == -1) {
                table[index] = key;
                break;
            }
            i++;
        }
    }

    // Print hash table
    for (int i = 0; i < size; i++) {
        if (table[i] == -1)
            cout << "Index " << i << ": Empty" << endl;
        else
            cout << "Index " << i << ": " << table[i] << endl;
    }

    return 0;
}
