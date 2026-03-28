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

/* class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

// class myStack {
//     int n;
//     int* arr;
//     int top;
//     public:
//         myStack(int n=1000) {
//         this->n=n;
//         arr=new int[n];
//         top=-1;
//     }

//     void push(int x) {
//         if(top==n-1){
//             return;
//         }
//         top++;
//         arr[top]=x;
//     }

//     void pop() {
//         if(top==-1){
//             return;
//         }
//         top--;
//     }
//     bool isEmpty() {
//         if(top==-1){
//             return true;
//         }
//         return false;
//     }


//     int peek() {
//         if(top==-1){
//             return -1;
//         }
//         return arr[top];
//     }

//     int size() {
//         return top+1;
//     }
// };