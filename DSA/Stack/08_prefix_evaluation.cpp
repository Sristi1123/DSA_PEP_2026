#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int prefixEval(string s){
    //create a stack
    // traverse from right to left
    // if(s[i] is operand) -> push in the stack
    // else if it is operator-> create two var to store top two elements, pop them and evaluate with operator
    // return the last remaining element  from stack -> it is the answer

    stack<int> st;
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]>='0' && s[i]<='9'){
            // int x=int(s[i]);
            st.push(s[i]-'0');
        }else{
            int a=st.top();
            st.pop();
            int b=st.top();
            st.pop();
            
            switch(s[i]){
                case '+':
                    st.push(a+b);
                    break;
                case '-':
                    st.push(a-b);
                    break;
                case '*':
                    st.push(a*b);
                    break;
                case '/':
                    st.push(a/b);
                    break;   
                case '^':
                    st.push(pow(a,b));
                    break;
            }
        }
    }
    return st.top();
}
int main(){
    string str="-+7*45+20";
    cout<<prefixEval(str);
    return 0;
}