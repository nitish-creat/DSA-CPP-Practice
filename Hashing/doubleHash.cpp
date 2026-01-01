#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> keys(n);
    for (int i = 0; i < n; i++) {
        cin >> keys[i];
    }

    const int TABLE_SIZE = 7;
    vector<int> table(TABLE_SIZE, -1);

    for (int key : keys) {
        int h1 = key % TABLE_SIZE;
        int h2 = 1 + (key % (TABLE_SIZE - 1));

        int i = 0;
        int index;

        while (i < TABLE_SIZE) {
            index = (h1 + i * h2) % TABLE_SIZE;
            if (table[index] == -1) {
                table[index] = key;
                break;
            }
            i++;
        }
    }

    for (int i = 0; i < TABLE_SIZE; i++) {
        if (table[i] == -1)
            cout << "Index " << i << ": Empty\n";
        else
            cout << "Index " << i << ": " << table[i] << "\n";
    }

    return 0;
}
