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
    node->next=head;
    head->prev=node;
    head=node;
}

void insertAtAnyPosition(Node* &head, int val,int pos){
    Node* node=new Node(val);
    if(pos==1){
        insertAtFront(head,val);
        return;
    }
    int count=0;
    Node* temp=head;
    while(temp!=NULL){
        count++;
        if(count==pos-1){
            temp->next=node;
            node->prev=temp;
            temp=node;
        }
        temp=temp->next;
    }
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
    int pos;
    cout<<"enter the position: ";
    cin>>pos;
    int val;
    cin>>val;
    insertAtAnyPosition(head,val,pos);
    print(head);
    return 0;
}