#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
string reverseValue(string word){
    int i=0;
    int j=word.length()-1;
    while(i<j){
        swap(word[i++],word[j--]);
    }
    return word;
}
void reverseString(string str){
    stack<string>st;
    string word="";
    int n=str.length();
    for(int i=0;i<n;i++){
        if(str[i]==' '){
           if(!word.empty()){                
            st.push(reverseValue(word));   
            word = ""; 
           } 
        }else{
            word+=str[i];
        }
    }
    if(!word.empty()) {
            st.push(reverseValue(word));
        }
    
    while(!st.empty()){
        cout<<st.top();
        st.pop();
        cout<<" ";
    }
    cout<<endl;
}
int main(){
    string str="Hello World";
    reverseString(str);          //dlroW olleH 
    return 0;
}