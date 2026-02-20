// https://www.geeksforgeeks.org/problems/implement-stack-using-linked-list/1

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
class MyStack{
    public:
    Node* top;
    MyStack(){
        top=NULL;
    }
    void push(int val){
        Node* node=new Node(val);
        node->next=top;
        top=node;
    }
    void pop(){
        if(top==NULL){
            cout<<"stack underflow";
            return;
        }
        Node* temp=top;
        top=top->next;
        delete top;
    }
    int peek(){
        if(top==NULL){
            cout<<"no element";
            return;
        }
        return top->data;
        // Node* temp=top;
        // while(temp!=NULL){
        //      temp=temp->next;
        // }
        // return temp->data;
    }
    bool isEMpty(){
        return top==NULL;
    }
};
int main(){
    
    return 0;
}