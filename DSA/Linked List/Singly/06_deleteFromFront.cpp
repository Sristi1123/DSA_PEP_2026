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
    if(head==NULL){
        return;
    }
    // if(head->next==nullptr){
    //     delete head;                      // delete* -> ?
    //     head=NULL;
    //     return;
    // }
    Node* temp=head;
    head=temp->next;
    delete temp;
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
    deleteFromFront(head);
    print(head);
    return 0;
}