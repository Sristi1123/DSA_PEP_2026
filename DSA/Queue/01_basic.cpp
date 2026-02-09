#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class MyQueue{
    public:
    int* arr;
    int front;
    int rear;
    int size;
    MyQueue(int size){
        this->size=size;
        arr=new int[size];
        front=-1;;
        rear=-1;
    }
    void enqueue(int val){
        if(rear==size-1){
            cout<<"Queue overflow";
            return;
        }
        if(front==-1){
            front=0;
        }
        rear++;
        arr[rear]=val;
    }
    void dequeue(){
        if(front==-1||front>rear){
            cout<<"Queue underflow";
            return;
        }
        front++;
    }
    int peek(){
        if(front==-1 ||front>rear){
            cout<<"no element";
            return 0;
        }
        return arr[front];
    }
    bool isEMpty(){
        if(front==-1||front>rear){
            return true;
        }
        return false;
    }
};
int main(){
    MyQueue mq(5);
    mq.enqueue(0);
    mq.enqueue(2);
    mq.enqueue(3);
    mq.enqueue(4);
    mq.enqueue(5);
    cout<<mq.isEMpty()<<endl;
    cout<<mq.peek();
    return 0;
}