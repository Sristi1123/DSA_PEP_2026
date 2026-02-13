#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
};
int main(){
    Node* root=new Node(5);
    root->left=new Node(2);
    root->right=new Node(3);

    root->left->left=new Node(6);
    root->left->right=new Node(7);
    
    root->right->left=new Node(9);
    root->right->right=new Node(8);
    return 0;
}