#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};
// function to create and return a new node of doubly linked list
struct Node* getnode(int data) {
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = data;
    newnode->prev = NULL;
    newnode->next = NULL;
    return newnode;
}

// function to print the doubly linked list
void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// function to insert a new node in a sorted way in a sorted doubly linked list
void sortedInsert(struct Node** head_ref, struct Node* newnode) {
    struct Node* current;

    // if list is empty
    if (*head_ref == NULL) {
        *head_ref = newnode;
        return;
    }

    // if node should be inserted at beginning
    if ((*head_ref)->data >= newnode->data) {
        newnode->next = *head_ref;
        (*head_ref)->prev = newnode;
        *head_ref = newnode;
        return;
    }

    // otherwise, locate the node after which newnode
    // is to be inserted
    current = *head_ref;
    while (current->next != NULL && current->next->data < newnode->data)
        current = current->next;

    newnode->next = current->next;

    if (current->next != NULL)
        newnode->next->prev = newnode;

    current->next = newnode;
    newnode->prev = current;
}

int main() {
    struct Node* head = NULL;
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int data;
        scanf("%d", &data);
        struct Node* newnode = getnode(data);
        sortedInsert(&head, newnode);
    }
    printf("soreted list: ");
    printList(head);
    return 0;
}




// Question 1 (Books in Library - Sorted Insert in DLL)

// Problem Statement:
// Tom manages a library system where books are categorized by their IDs using a doubly linked list in sorted order. Each time a new book is added, the list should remain sorted. Write a program to help Tom maintain the sorted order of books in the library.

// Input Format:

// The first line contains an integer n, representing the number of initial books.

// The second line contains n integers representing the IDs of the books.

// The third line contains an integer representing the ID of the final book to be added.

// Output Format:
// The program prints the sorted order of book IDs after all books have been added.

// Sample Input 1:

// 4
// 3 2 4 1


// Sample Output 1:

// 1 2 3 4


// Sample Input 2:

// 2
// 2 5


// Sample Output 2:
// 2 5


// 