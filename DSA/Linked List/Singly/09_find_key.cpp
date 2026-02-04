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
bool searchkey(Node* &head,int key){
    if(head==NULL) return false;     //base case

    if(head->data==key){
        return true;
    }
    return searchkey(head->next,key);
}
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
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
    int key;
    cout<<"enter the key: ";
    cin>>key;
    cout<<searchkey(head,key);
    return 0;
}