#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

// Convert array → CIRCULAR Linked List
Node* arrToCLL(vector<int>& arr) {
    if (arr.size() == 0) return NULL;

    Node* head = new Node(arr[0]);
    Node* temp = head;

    for (int i = 1; i < arr.size(); i++) {
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }

    temp->next = head;  // important: make circular
    return head;
}

// Print circular linked list
void printList(Node* head) {
    if (head == NULL) return;

    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

// Insert at end of CLL
void insertEnd(Node*& head, int val) {
    Node* newnode = new Node(val);

    // If list is empty
    if (head == NULL) {
        head = newnode;
        newnode->next = head;
        return;
    }

    Node* temp = head;

    // Move to last node (whose next == head)
    while (temp->next != head) {
        temp = temp->next;
    }

    temp->next = newnode;
    newnode->next = head;
}

int main() {
    vector<int> arr = {2, 42, 4, 24, 4, 5, 4};

    Node* head = arrToCLL(arr);

    cout << "Initial Circular List: ";
    printList(head);

    insertEnd(head, 90);

    cout << "After Insert at End: ";
    printList(head);

    return 0;
}
