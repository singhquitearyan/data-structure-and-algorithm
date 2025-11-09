//Author: Aryan Singh
//DAte: 09/11/25
//Description:
  Definition for singly-linked list.
  struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
    void deleteNode(ListNode* node) {
        node -> val = node -> next -> val;
        node -> next = node -> next -> next;
        
    }
};
