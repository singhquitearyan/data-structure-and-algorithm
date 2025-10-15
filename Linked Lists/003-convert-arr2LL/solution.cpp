//Author: Aryan Singh
//Date: 15/10/25
//Description: Here's the solution of how to convert Array into a Linkeed Lists


#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;

    // Constructor
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

// Function to convert array → linked list
Node* convertArr2LL(vector<int>& arr) {
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

// Function to print the linked list
void printLL(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    vector<int> arr = {12, 5, 8, 7};

    Node* head = convertArr2LL(arr);

    cout << "Linked List Elements: ";
    printLL(head);

    // Optional: free memory
    Node* temp;
    while (head != nullptr) {
        temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
