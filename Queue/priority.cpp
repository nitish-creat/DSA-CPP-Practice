#include <stdio.h>

#define MAX 100

int pq[MAX];
int size = 0;

/* Insert element */
void insert(int value) {
    if (size == MAX) {
        printf("Priority Queue Overflow\n");
        return;
    }
    pq[size++] = value;
}

/* Delete highest priority element */
void deletePQ() {
    if (size == 0) {
        printf("Priority Queue Underflow\n");
        return;
    }

    int maxIndex = 0;
    for (int i = 1; i < size; i++) {
        if (pq[i] > pq[maxIndex])
            maxIndex = i;
    }

    printf("Deleted element: %d\n", pq[maxIndex]);

    for (int i = maxIndex; i < size - 1; i++)
        pq[i] = pq[i + 1];

    size--;
}

/* Display elements */
void display() {
    if (size == 0) {
        printf("Priority Queue is empty\n");
        return;
    }

    for (int i = 0; i < size; i++)
        printf("%d ", pq[i]);
    printf("\n");
}

int main() {
    int choice, value;

    do {
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                scanf("%d", &value);
                insert(value);
                break;
            case 2:
                deletePQ();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 4);

    return 0;
}
