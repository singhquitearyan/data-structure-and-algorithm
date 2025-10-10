//Author: Aryan Singh
//Date: 10/10/2025
//Description: This code contains the basics of LL


#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    public:
    Node( int data1, Node* next1){
        data = data1;
        next = next1;
    }
};

int main(){
    vector<int> arr{ 2, 5, 8, 7};

    Node* y = new Node(arr[0], nullptr);
    cout << y;
    //o/p-> 0x14ae069b0 (memory location)


    Node y = Node(arr[0], nullptr);
    cout << y;
    //throws an error because you can either take a data from it 
    // or you can take a memory loaction. we're here just creating an object here.

    Node y = Node(arr[0], nullptr);
    cout << y.data;  //to print the data from it
    cout<< y.next; //to print the memory location


    Node* y = new Node(arr[0], nullptr);
    cout << y.data;  //like this will give me a error.
    cout<< y->data; //this is correct wqay to print if new kwyword is used.
    cout<< y->next; //to print the memory location

    Node* y = new Node(arr[0], nullptr);
    cout << y->data; //if we don't have to pass the null pointer baar-baar then just pass the data and it will automatically understand the
    // 'nullptr' part  l

}
