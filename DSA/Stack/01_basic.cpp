#include<iostream>
#include<bits/stdc++.h>
#include<stack>
using namespace std;
    
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    
    // for(int i=4;i>=0;i--){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    return 0;
}