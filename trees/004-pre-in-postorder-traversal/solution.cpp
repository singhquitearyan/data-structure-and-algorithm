//Author: Aryan Singh
//Date: 19/12/25
//Description:

#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int value){
        data = value;
        left = right = NULL;
    }
};

void Preorder(Node* root){
    if(root == NULL) return;
    cout << root -> data;
    Preorder( root -> left);
    Preorder(root -> right);

}

void Inorder( Node* root){
    if(root == NULL) return;
    Inorder( root -> left);
    cout << root -> data;
    Inorder( root -> right);

}

void Postorder( Node* root){
    if(root == NULL) return;
    Postorder( root -> left);
    Postorder( root -> right);
    cout << root -> data;
}

Node* BinaryTree(){
    int x;
    cin >> x;
    if( x == -1) return NULL;

    Node* temp = new Node(x);
    cout<< " Enter the left child of" << x << " :";
    temp -> left = BinaryTree();
    cout << " Enter the right child of" << x << ":";
    temp -> right = BinaryTree();
    return temp;
}
int main(){
    cout << " Enter the root Node:";
    Node* root = BinaryTree();
     cout << "\nPreorder";
     Preorder(root);

     cout << "\nInorder";
     Inorder(root);

     cout<<"\nPostorder";
     Postorder(root);

     return 0;
}
