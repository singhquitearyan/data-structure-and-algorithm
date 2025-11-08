//Author: Aryan Singh
//Date: 08/11/2025
//Description: 

Node* deletekthelement( Node* head, int k){
    if( head == NULL) return head;
    if(k == 1){
        Node* temp = head;
        head = head -> next;
        free(temp);
        return head;
    }
    int cnt = 0;
    Node* temp = head;
    Node* prev = NULL;
    while(temp != NULL){
        cnt++;
        if(cnt == k){
            prev -> next = prev -> next -> next;
            free(temp);
            break;

        }
        prev = temp;
        temp = temp -> next;
    }
    return head;
}
