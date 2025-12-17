//Author: Aryan Singh
//Date: 17/12/2025
//Description:

#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node( int value){
        data = value;
        left = right = NULL;
    }
};
int main(){
    int x;
    cout << "Enter the root value:";
    cin >> x;
    if(x==-1) return 0;

    int first, second;
    
    Node* root = new Node(x);
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        cout << "Enter the left child of" << temp -> data << " : ";
        cin >> first;
        if(first != -1){
            temp -> left = new Node(first);
            q.push(temp -> left);
        }
        cout << "enter the right child of" << temp -> data;
        cin >> second;
        if(second != -1){
            temp -> right = new Node(second);
            q.push(temp -> right);

        }
        }
        return 0;
}
