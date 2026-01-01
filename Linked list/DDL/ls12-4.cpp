#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STRING_SIZE 100

// Node structure for doubly linked list
struct Node {
    char name[MAX_STRING_SIZE];
    struct Node* prev;
    struct Node* next;
};

// Function to insert node at the end of the doubly linked list
void insertAtEnd(struct Node** head, char* new_name) {
    struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
    strcpy(newnode->name, new_name);
    newnode->next = NULL;

    if (*head == NULL) {
        newnode->prev = NULL;
        *head = newnode;
        return;
    }

    struct Node* last = *head;
    while (last->next != NULL)
        last = last->next;

    last->next = newnode;
    newnode->prev = last;
}

// Function to display a doubly linked list
void displayLinkedList(struct Node* head) {
    struct Node* currentnode = head;
    while (currentnode != NULL) {
        printf("%s ", currentnode->name);
        currentnode = currentnode->next;
    }
    printf("\n");
}

// Function to split the doubly linked list into two halves
void splitDoublyLinkedList(struct Node* head, struct Node** firsthalf, struct Node** secondhalf) {
    if (head == NULL)
        return;

    struct Node* slow = head;
    struct Node* fast = head;

    // Move fast by 2 and slow by 1
    while (fast->next != NULL && fast->next->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    *firsthalf = head;
    *secondhalf = slow->next;
    slow->next = NULL;

    if (*secondhalf != NULL)
        (*secondhalf)->prev = NULL;
}

int main() {
    struct Node* head = NULL;
    struct Node* firsthalf = NULL;
    struct Node* secondhalf = NULL;
    int n;
    scanf("%d", &n);
    getchar(); // Remove newline character after integer input

    for (int i = 0; i < n; i++) {
        char name[MAX_STRING_SIZE];
        fgets(name, MAX_STRING_SIZE, stdin);
        name[strcspn(name, "\n")] = '\0'; // Remove newline
        insertAtEnd(&head, name);
    }

    splitDoublyLinkedList(head, &firsthalf, &secondhalf);

    displayLinkedList(firsthalf);
    displayLinkedList(secondhalf);

    return 0;
}




// Question 4 (Split Doubly Linked List into Two Halves)

// Problem Statement:
// Lisa is organizing a list of attendees for two consecutive events. The list of attendees’ names is stored in a doubly linked list.
// Write a program to manage the two-way linked list of attendees by creating a function that divides (splits) the list into two halves — the first half of names assigned to the first event and the second half of names assigned to the second event.

// Input Format:

// The first line contains a single integer n, representing the number of attendees.

// The following n lines contain the names of the attendees (one per line).

// Output Format:

// The first line displays the names of attendees assigned to the first event.

// The second line displays the names of attendees assigned to the second event.
// Input 1:
// 4
// John
// Emma
// Michael
// Sophia


// Output:

// John Emma
// Michael Sophia