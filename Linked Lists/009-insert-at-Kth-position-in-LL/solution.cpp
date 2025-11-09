//Author: Aryan Singh
//Date: 09/11/25
//Description:

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node( int data1, Node* next1){
        data = data1;
        next = next1;
    }
    Node( int data1){
        data = data1;
        next = NULL;
    }
};

Node* inseratk( Node* head, int k, int val){

     // Case 1: list empty
    if(head == NULL){
        if(k==1){
            return new Node(val);
        }
        else return head;    // can't insert at k>1 in empty list
    }

    // Case 2: insert at head
    if( k == 1){
        Node* newNode = new Node(val);
        newNode -> next = head;
        return newNode;

    }

     // Case 3: insert at position k
    int cnt = 0;
    Node* temp = head;
    while(temp != NULL){
        cnt++;
        if( cnt == (k-1)){
            Node* x = new Node(val);
            x -> next = temp -> next;
            temp -> next = x;
            return head;
        }
        temp = temp -> next;
    }

     // Case 4: k is out of bounds (bigger than length)
    return head;
}
