//Author: Aryan Singh
//Date: 29/11/2025
//Description:

#include <bits/stdc++.h>
using namespace std;

#define MAX 100

int queueArr[MAX];
int front = -1, rear = -1;

void enqueue(int x) {
    if (rear == MAX - 1) {
        cout << "Queue Overflow!" << endl;
        return;
    }
    if (front == -1) front = 0;
    queueArr[++rear] = x;
}

int dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue Underflow!" << endl;
        return -1;
    }
    return queueArr[front++];
}

int peek() {
    if (front == -1 || front > rear) return -1;
    return queueArr[front];
}

void display() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty!" << endl;
        return;
    }
    for (int i = front; i <= rear; i++) {
        cout << queueArr[i] << " ";
    }
    cout << endl;
}

int main() {
    int choice, value;

    while (true) {
        cout << "\n---- Queue Menu ----\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
                enqueue(value);
                break;

            case 2:
                value = dequeue();
                if (value != -1)
                    cout << "Dequeued: " << value << endl;
                break;

            case 3:
                value = peek();
                if (value != -1)
                    cout << "Front element: " << value << endl;
                else
                    cout << "Queue is empty!" << endl;
                break;

            case 4:
                display();
                break;

            case 5:
                cout << "Exiting...\n";
                return 0;

            default:
                cout << "Invalid choice! Try again.\n";
        }
    }
}
