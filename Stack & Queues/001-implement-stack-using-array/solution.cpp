//Author: Aryan Singh
//Date: 13/11/25
//Description:

#include <iostream>
using namespace std;

class myStack {
private:
    int* arr;
    int n;
    int top;

public:
    // Constructor
    myStack(int size) {
        n = size;
        top = -1;
        arr = new int[n];
    }

    // Destructor to free memory
    ~myStack() {
        delete[] arr;
    }

    // Check if stack is empty
    bool isEmpty() {
        return (top == -1);
    }

    // Check if stack is full
    bool isFull() {
        return (top == n - 1);
    }

    // Push element onto stack
    void push(int x) {
        if (isFull()) {
            cout << "Stack Overflow!" << endl;
            return;
        }
        arr[++top] = x;
    }

    // Pop element from stack
    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow!" << endl;
            return -1;
        }
        return arr[top--];
    }

    // Peek top element
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return arr[top];
    }
};

int main() {
    myStack s(5);

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.peek() << endl;
    cout << "Popped element: " << s.pop() << endl;
    cout << "Top after pop: " << s.peek() << endl;

    return 0;
}
