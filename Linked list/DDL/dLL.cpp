#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *prev;
    struct node *next;
};

struct node* createNode(int data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

struct node* insertEnd(struct node* head, int data) {
    struct node* newNode = createNode(data);
    if (head == NULL)
        return newNode;

    struct node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;
    return head;
}

void display(struct node* head) {
    struct node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Bubble sort for doubly linked list
void sortList(struct node* head) {
    if (head == NULL)
        return;

    int swapped;
    struct node* ptr1;
    struct node* lptr = NULL;

    do
    {
        swapped=0;
        ptr1=head;

        while(ptr1->next!=lptr){
            if(ptr1->data > ptr1->next->data){
                int temp= ptr1->data;
                ptr1->data=ptr1->next->data;
                ptr1->next->data=temp;
                swapped=1;
            }
            ptr1=ptr1->next;
        }
        lptr=ptr1;
    } while (swapped);
    
}

int main() {
    struct node* head = NULL;

    head = insertEnd(head, 3);
    head = insertEnd(head, 1);
    head = insertEnd(head, 2);
    head = insertEnd(head, 1);
    head = insertEnd(head, 3);

    printf("Before sorting: ");
    display(head);

    sortList(head);

    printf("After sorting: ");
    display(head);

    return 0;
}
