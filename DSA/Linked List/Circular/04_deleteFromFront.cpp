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
void deleteFromFront(Node* &head){
    Node* temp=head;
    
    if(head==NULL){
        return;
    }
    if(head->next==head){
        temp=head;
        head=NULL;
        delete temp;
        return;
    }
    Node* temp1=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    head=head->next;
    temp->next=head;
    delete temp1; 
}
void insertAtFront(Node* &head,int val){
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
    head=node;
}
void print(Node* head){
    Node* temp=head;
    // while(temp->next!=head){
    //     cout<<temp->data<<" ";
    //     temp=temp->next;
    // }
    // cout<<temp->data;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=head);
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
        insertAtFront(head,val);
    }
    deleteFromFront(head);
    print(head);
    return 0;
}