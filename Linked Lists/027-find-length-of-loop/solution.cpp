//Author: Aryan Singh
//Date: 11/11/25
//Description:
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution {
  public:
 
    int lengthOfLoop(Node *head) {
        // code here
        Node* slow = head;
        Node* fast = head;
        while( fast != NULL && fast -> next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next
            ;
        
        if(slow == fast) {
            return findLength(slow);
        }
        }
        return 0;
    }
         int findLength( Node* meetingpoint){
        Node* temp = meetingpoint;
        int length = 1;
        
        while( temp-> next != meetingpoint){
            
            temp = temp -> next;
            length++;
            
        }
        return length;
    }

};
