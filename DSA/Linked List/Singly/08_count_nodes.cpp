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
void insertAtFront(Node* &head, int val){
    Node* node=new Node(val);
    if(head==NULL){
        head=node;
        return;
    }
    node->next=head;
    head=node;
}
void print(Node* head){
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        if(temp->data%2==0){
            count++;
        }
        temp=temp->next;
    }cout<<"even numbers: "<<count;
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
    
    print(head);
    return 0;
}