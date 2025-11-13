//Author: Aryan Singh
//Date: 13/11/25
//Description: This is a clean code for the flatten a LL

// Function to merge two sorted bottom-linked lists
Node* mergeTwoLists(Node* temp1, Node* temp2) {
    // Dummy node to simplify merging logic
    Node* dummy = new Node(-1);
    Node* res = dummy;

    while (temp1 != NULL && temp2 != NULL) {
        if (temp1->data <= temp2->data) {
            res->bottom = temp1;
            temp1 = temp1->bottom;
        } else {
            res->bottom = temp2;
            temp2 = temp2->bottom;
        }
        res = res->bottom;
    }

    // Attach the remaining nodes
    if (temp1 != NULL) res->bottom = temp1;
    else res->bottom = temp2;

    // The merged list starts after dummy
    return dummy->bottom;
}

// Main flatten function
Node* flatten(Node* head) {
    if (head == NULL || head->next == NULL)
        return head;

    Node* temp1 = head;
    Node* temp2 = head->next;

    while (temp2 != NULL) {
        temp1 = mergeTwoLists(temp1, temp2); // merge current two lists
        temp2 = temp2->next;                 // move to next list
    }

    return temp1; // fully flattened list
}
