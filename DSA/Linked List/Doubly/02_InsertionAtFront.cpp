#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int val){
        data=val;
        prev=NULL;
        next=NULL;
    }
};
void insertAtFront(Node* &head,int val){
    Node* node=new Node(val);
    if(head==NULL){
        head=node;
        return;
    }
    head->prev=node;
    node->next=head;
    head=node;
}
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    int n;
    cout<<"Enter number of nodes: ";
    cin>>n;
    Node* head=NULL;
    while(n>0){
        int val;
        cin>>val;
        n--;
        insertAtFront(head,val);
    }
    print(head);
    return 0;
}