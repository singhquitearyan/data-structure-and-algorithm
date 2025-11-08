//Author: Aryan Singh
//Date: 08/11/2025
//Description: 
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution {
  public:
    Node* removeLastNode(Node* head) {
        if( head == NULL || head -> next == NULL) return NULL;
        Node* temp = head;
        while( temp -> next -> next != NULL){
            temp = temp -> next;
        }
        delete temp -> next;
        temp -> next = nullptr;
         return head;
    }
    
   
};
