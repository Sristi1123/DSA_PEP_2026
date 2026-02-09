#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class MyStack{
    public:
    int* arr;
    int top;
    int n;          //size
    MyStack(int n){
        this->n=n;    //when name clash
        arr=new int[n];
        top=-1;
    }
    
    void push(int val){
        if(n-1==top) {              //edge case
            cout<<"Stack Overflow"<<endl;
            return;
        }
        top++;
        arr[top]=val; 
    }
    void pop(){
        if(top==-1){            //edge case
            cout<<"underflow"<<endl;
            return;
        }
        top--;
    }
    int peek(){
        if(top==-1){                //edge case
            cout<<"no element";
            return -1;
        }
        return arr[top];
    }

    bool isEMpty(){
        if(top==-1){
            return true;
        }
        return false;
    }
    bool isFull(){
        if(top==n-1){
            return true;
        }
        return false;
    }
};
int main(){
    MyStack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    cout<<"Check is there any element: "<<st.isEMpty()<<endl;
    cout<<"Check is it full: "<<st.isFull()<<endl;
    st.pop();
    st.pop();
    cout<<"Check for top element: "<<st.peek()<<endl;
    cout<<"Check is it full: "<<st.isFull();
    return 0;
}