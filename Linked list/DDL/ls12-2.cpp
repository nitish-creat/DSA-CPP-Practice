#include <iostream>
#include <string>
using namespace std;

struct Item {
    int id;
    string name;
    int quantity;
    double price;
};

struct node {
    Item data;
    node* next;
    node* prev;
};

// function to insert a new node at beginning of doubly linked list
void insertAtBeginning(node*& head, Item newitem) {
    // >>> LINE 1 <<<
    node* newnode = new node;
    newnode->data = newitem;
    newnode->next = head;
    newnode->prev = NULL;
    if (head != NULL)
        head->prev = newnode;
    head = newnode;
}

// function to search an item by ID
bool searchItem(node* head, int searchId) {
    // >>> LINE 2 <<<
    node* temp = head;
    while (temp != NULL) {
        if (temp->data.id == searchId)
            return true;
        temp = temp->next;
    }
    return false;
}

int main() {
    node* head = NULL;
    int n;
    cin >> n; // number of items

    // create the doubly linked list
    for (int i = 0; i < n; i++) {
        Item newitem;
        cin >> newitem.id >> newitem.name >> newitem.quantity >> newitem.price;
        insertAtBeginning(head, newitem);
    }

    int searchId;
    cin >> searchId;

    if (searchItem(head, searchId))
        cout << "Item with ID " << searchId << " is present in the list." << endl;
    else
        cout << "Item with ID " << searchId << " is not found in the list." << endl;

    return 0;
}


// Question 2 (Inventory Management - Search in DLL)

// Problem Statement:
// Ashok, a retail store manager, wants to keep track of items in his inventory using a doubly linked list. Each node in the list represents an item’s ID, name, quantity, and price.
// Write a program that allows Ashok to insert inventory items and then check if a particular item (based on its ID) is present in the list.

// Input Format:

// The first line contains an integer n, representing the number of items.

// The next n lines each contain:
// item_id item_name item_quantity item_price

// The final line contains an integer representing the item ID to be searched.

// Output Format:

// If the item is found, print:
// Item with ID <id> is present in the list.

// Otherwise, print:
// Item with ID <id> is not found in the list.

// Input:

// 3
// 101 Pen 15 9.99
// 102 Notebook 12 19.99
// 103 Pencil 20 5.99
// 102


// Output:

// Item with ID 102 is present in the list.