#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
    
string removeDuplicates(string &s){
    vector<bool>visited(256,false);
    string result="";
    for(char i:s){
       if(!visited[i]){
        result.push_back(i);
        visited[i]=true;
       }
    }
    return result;
}

int main(){
    string str="banana";
    cout<<removeDuplicates(str);
    return 0;
}