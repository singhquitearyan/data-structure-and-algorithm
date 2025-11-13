//Author: Aryan Singh
//Date: 13/11/25
//Description: Have many confusion in the syntax and all in this but know the basic logic. DO practice it and clear the syntax of it. How each one list, and all is imoplemented

class Solution {
  public:
    Node* findTail(Node* head) {
        Node* tail = head;
        while (tail->next != NULL)
            tail = tail->next;
        return tail;
    }

    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target) {
        vector<pair<int, int>> ans;
        if (head == NULL) return ans;

        Node* left = head;
        Node* right = findTail(head);

        while (left != right && left->prev != right) {
            int sum = left->data + right->data;

            if (sum == target) {
                ans.push_back({left->data, right->data});
                left = left->next;
                right = right->prev;
            } else if (sum < target) {
                left = left->next;
            } else {
                right = right->prev;
            }
        }

        return ans;
    }
};
