#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next=NULL;     //we don't want the pointer garbage
    }
};
void insertAtEnd(Node* &head, int val){
    Node* node=new Node(val);
    if(head==NULL){
        head=node;
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=node;
}
int main(){
    // Node* n1=new Node(5);
    // Node* n2=new Node(3);
    // n1->next=n2;
    

    // -->Segmentation fault
    // Node* head=NULL;
    // insertAtEnd(head,1);

    Node* head=NULL;
    insertAtEnd(head,1);
    return 0;
}