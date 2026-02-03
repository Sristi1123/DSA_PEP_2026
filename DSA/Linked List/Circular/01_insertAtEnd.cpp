#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=NULL;
    }
};

void insertAtEnd(Node* &head,int val){
    Node* node=new Node(val);
    if(head==NULL){
        head=node;
        head->next=head;
        return;
    }
    Node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    node->next=head;
    temp->next=node;
}
void print(Node* head){
    Node* temp=head;
    while(temp->next!=head){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data;
}
int main(){
    Node* head=NULL;
    int n;
    cout<<"Enter number of nodes: ";
    cin>>n;
    while(n>0){
        int val;
        cin>>val;
        n--;
        insertAtEnd(head,val);
    }
    
    print(head);
    return 0;
}