#include <bits/stdc++.h>
using namespace std;

#define MAX 100

int queueArr[MAX];
int front = -1;
int rear  = -1;

void enqueue(int x) {
    if (rear == MAX - 1) {
        cout << "Queue Overflow\n";
        return;
    }

    if (front == -1) {  
        front = rear = 0;
    } else {
        rear++;
    }

    queueArr[rear] = x;
    cout << "Enqueued: " << x << endl;
}

int dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue Underflow\n";
        return -1;
    }

    int data = queueArr[front];

    if (front == rear) {
        front = rear = -1;
    } else {
        front++;
    }
    return data;
}
void display() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty\n";
        return;
    }

    cout << "Queue elements: ";
    for (int i = front; i <= rear; i++) {
        cout << queueArr[i] << " ";
    }
    cout << endl;
}


int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    cout << "Dequeued: " << dequeue() << endl;
    // cout << "Dequeued: " << dequeue() << endl;
    // cout << "Dequeued: " << dequeue() << endl;
    cout<<"All elements: ";
    display();
    return 0;
}
