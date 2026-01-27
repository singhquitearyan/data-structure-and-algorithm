//Author: Aryan Singh
//Date: 27/01/26
//Description: Just know the process and have done dry run but difficu;ty in writing code.

class Solution {
public:
//After the 'sortStack()' function this will starrt inserting elemnt in stack once whole stack becomes empty and then will check the condition and then start inserting.
    void insertSorted(stack<int> &st, int x) {
        // Base case: if stack is empty or top <= x
        if (st.empty() || st.top() <= x) {
            st.push(x);
            return;
        }

        int temp = st.top();
        st.pop();
//If 'st.top() <= x)' this condition is violated then we have to recursively sort the array by the below function.
        insertSorted(st, x);

        st.push(temp);
    }


//This will run firstly and will remove each element from the stack and start storing in temp variable.
    void sortStack(stack<int> &st) {
        if (st.empty())
            return;

        int temp = st.top();
        st.pop();

        sortStack(st);

        insertSorted(st, temp);
    }
};
