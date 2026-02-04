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
void deleteFromAnyPosition(Node* &head,int pos){
    if(head==NULL){
        return;
    }
    Node* temp=head;
    if(pos==1){
        temp=head;
        delete temp;
        head=NULL;
        return;
    }
    Node* temp1=head;
    int count=0;
    if(temp==NULL || temp->next==NULL) return;
    while(temp!=NULL){
        count++;
        if(count==pos-1){
            temp1=temp->next;
            temp->next=temp->next->next;
            delete temp1;
        }
    }
}
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void insertAtFront(Node* &head, int val){
    Node* node=new Node(val);
    if(head==NULL){
        head=node;
        return;
    }
    node->next=head;
    head=node;
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
    int pos;
    cout<<"enter the position: ";
    cin>>pos;
    deleteFromAnyPosition(head,pos);
    print(head);
    return 0;
}