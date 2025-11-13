//Author: Aryan Singh
//Date: 13/11/15
//Description: I know the concept and logic how its done, but didn't done the code by myself. Have pasted from copy and chatgpt. 
  Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
    // Helper to get kth node from current position
    ListNode* getKthNode(ListNode* temp, int k) {
        k--;
        while (temp != NULL && k > 0) {
            temp = temp->next;
            k--;
        }
        return temp;
    }

    // Helper to reverse a linked list
    ListNode* reverseLinkedList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        while (curr != NULL) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;
    }

    // Main function
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (!head || k <= 1) return head;

        ListNode* temp = head;
        ListNode* prevLast = NULL;

        while (temp != NULL) {
            ListNode* kthNode = getKthNode(temp, k);
            if (kthNode == NULL) {
                if (prevLast) prevLast->next = temp;
                break;
            }

            ListNode* nextNode = kthNode->next;
            kthNode->next = NULL;

            // Reverse current k-group
            ListNode* newHead = reverseLinkedList(temp);

            if (prevLast == NULL) {
                head = newHead;  // first group becomes new head
            } else {
                prevLast->next = newHead;
            }

            prevLast = temp;     // temp becomes tail of reversed group
            temp = nextNode;     // move to next group
        }

        return head;
    }
};
