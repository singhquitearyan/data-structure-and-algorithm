//Author: Aryan Singh
//Date:29/11/2025
//Description:

#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() {
        front = rear = NULL;
    }

    void enqueue(int x) {
        Node* temp = new Node(x);

        if (rear == NULL) {   // queue is empty
            front = rear = temp;
        } else {
            rear->next = temp;
            rear = temp;
        }
        cout << x << " enqueued\n";
    }

    int dequeue() {
        if (front == NULL) {
            cout << "Queue Underflow\n";
            return -1;
        }

        Node* temp = front;
        int removed = temp->data;

        front = front->next;

        if (front == NULL)
            rear = NULL;   // queue became empty

        delete temp;
        return removed;
    }

    int peek() {
        if (front == NULL) {
            cout << "Queue is empty\n";
            return -1;
        }
        return front->data;
    }

    void display() {
        if (front == NULL) {
            cout << "Queue is empty\n";
            return;
        }

        Node* temp = front;
        cout << "Queue: ";
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};


int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    cout << "Front element: " << q.peek() << endl;

    cout << "Dequeued: " << q.dequeue() << endl;

    q.display();

    return 0;
}
