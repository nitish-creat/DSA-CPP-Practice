#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

// Function to add a node at the beginning
void push(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    new_node->prev = NULL;

    if ((*head_ref) != NULL)
        (*head_ref)->prev = new_node;

    (*head_ref) = new_node;
}

// Function to delete a node at a given position
void deleteNodeAtGivenPos(struct Node** head, int n) {
    if (*head == NULL || n <= 0)
        return;

    struct Node* temp=*head;
    int c=1;
    while(temp!=NULL && c<n){
        temp=temp->next;
        c++;
    }
    if(temp==nullptr){
        return;
    }
    if(temp->prev==NULL){
        *head=temp->next;
        if(*head) (*head)->prev=NULL;
        free(temp);
        return;
    }

    Node* before=temp->prev;
    Node* after= temp->next;

    before->next=after;
    if(after) after->prev=before;
    free(temp);

}

// Function to print list in reverse order
void printList(struct Node* head) {
    struct Node* last = NULL;
    while (head != NULL) {
        printf("%d ", head->data);
        last = head;
        head = head->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;
    int n, data;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &data);
        push(&head, data);
    }

    int pos;
    printf("Before deletion: ");
    printList(head);
    scanf("%d", &pos);
    deleteNodeAtGivenPos(&head, pos);
    printf("After deletion: ");
    printList(head);
    return 0;
}




// Question 3 (Delete Node in Doubly Linked List)

// Problem Statement:
// Dinesh is learning linked lists and wants to create a program that manages a two-way (doubly) linked list. The program should allow the insertion of elements at the beginning and deletion of a node from a specified position.
// The user inputs the number of nodes, their values, and the position to delete.
// The program should display both the original list and the updated list after deletion in reverse order.

// Input Format:

// The first line contains an integer n, representing the number of nodes in the doubly linked list.

// The next line contains n space-separated integers representing the data values of each node.

// Finally, an integer is provided representing the position (1-based) of the node to be deleted.

// Output Format:

// Display the contents of the list before deletion.

// Display the contents of the list after deletion.
// Input:

// 4
// 16 24 39 47
// 1


// Output:

// Before deletion: 47 39 24 16
// After deletion: 39 24 16