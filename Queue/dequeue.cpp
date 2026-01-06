#include <stdio.h>

#define MAX 10

int dq[MAX];
int front = -1, rear = -1;

/* Insert at front */
void insertFront(int x) {
    if ((front == 0 && rear == MAX - 1) || (front == rear + 1)) {
        printf("Deque Overflow\n");
        return;
    }

    if (front == -1)
        front = rear = 0;
    else if (front == 0)
        front = MAX - 1;
    else
        front--;

    dq[front] = x;
}

/* Insert at rear */
void insertRear(int x) {
    if ((front == 0 && rear == MAX - 1) || (front == rear + 1)) {
        printf("Deque Overflow\n");
        return;
    }

    if (front == -1)
        front = rear = 0;
    else if (rear == MAX - 1)
        rear = 0;
    else
        rear++;

    dq[rear] = x;
}

/* Delete from front */
void deleteFront() {
    if (front == -1) {
        printf("Deque Underflow\n");
        return;
    }

    printf("Deleted element: %d\n", dq[front]);

    if (front == rear)
        front = rear = -1;
    else if (front == MAX - 1)
        front = 0;
    else
        front++;
}

/* Delete from rear */
void deleteRear() {
    if (front == -1) {
        printf("Deque Underflow\n");
        return;
    }

    printf("Deleted element: %d\n", dq[rear]);

    if (front == rear)
        front = rear = -1;
    else if (rear == 0)
        rear = MAX - 1;
    else
        rear--;
}

/* Display deque */
void display() {
    if (front == -1) {
        printf("Deque is empty\n");
        return;
    }

    int i = front;
    while (1) {
        printf("%d ", dq[i]);
        if (i == rear)
            break;
        i = (i + 1) % MAX;
    }
    printf("\n");
}

/* Main */
int main() {
    int choice, value;

    do {
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                scanf("%d", &value);
                insertFront(value);
                break;
            case 2:
                scanf("%d", &value);
                insertRear(value);
                break;
            case 3:
                deleteFront();
                break;
            case 4:
                deleteRear();
                break;
            case 5:
                display();
                break;
            case 6:
                printf("Exiting\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 6);

    return 0;
}
