//Author: Aryan Singh
//Date: 27/01/26
//Description: Have some issues in wring the stack code but got full concept of the dry run
class Solution {
public:

//this will run like given example below
    void insertAtBottom(stack<int> &st, int x) {
        if (st.empty()) {
            st.push(x);
            return;
        }

        int temp = st.top();
        st.pop();

        insertAtBottom(st, x);

        st.push(temp);
    }

//First this function will run for removing each element on the stack
    void reverseStack(stack<int> &st) {
        if (st.empty())
            return;

        int temp = st.top();
        st.pop();

        reverseStack(st);

        insertAtBottom(st, temp);
    }
};



// Phase 2: Insert at bottom while returning:

// Insert 1
// Stack empty → push 1
// Stack: 1


// Insert 2 at bottom
// Current stack: 1
// Pop 1
// Stack empty
// Push 2
// Push back 1
// Stack becomes:

// 1
// 2

// (2 is now at bottom)

// Insert 3 at bottom
// Current stack:
// 1
// 2

// Pop 1
// Pop 2
// Stack empty

// Push 3
// Push back 2
// Push back 1
// Stack:
// 1
// 2
// 3



// Insert 4 at bottom
// Pop 1
// Pop 2
// Pop 3

// Push 4
// Push back 3
// Push back 2
// Push back 1

// Final stack:
// 1
// 2
// 3
// 4


// Reversed ✔
