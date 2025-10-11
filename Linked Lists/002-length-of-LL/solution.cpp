//Author:Aryan Singh
//Date: 11/10/25
//Description: Length of Linked Lists

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node( int data1){
        data = data1;
        next = nullptr; 
    }
};



int lengthin(Node* head){
    int cnt = 0;
    Node* temp = head;
    while(temp){
        cout << temp->data << " "; //when we've to do traversal, this returns the each element of LL 
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

int main(){
    vector<int>arr = { 12, 5, 7, 8};
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i<arr.size(); i++){
        Node* temp =  new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    cout << " Linked list elements: ";
    int len = lengthin(head);
    cout << "Length of linked ;lists " << len << endl;
    
    return 0;

}
