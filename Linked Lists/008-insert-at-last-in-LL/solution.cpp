//Author: Aryan SIngh
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

Node* insertathead( Node* head, int val){
    if( head == NULL) return new Node(val);
    Node* temp = head;
    while( temp -> next !=  NULL){
        temp = temp -> next;
    }
    Node* newNode = new Node(val);
    temp -> next = newNode;
    return head; 
}
