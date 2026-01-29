#include<iostream>
#include<bits/stdc++.h>
using namespace std;
    
string reverse(string str){
    int low=0;
    int high=str.size()-1;

    while(low<high){
        swap(str[low++],str[high--]);
    }
    return str;
}

bool checkPalindrome(string str1){
    // string ori=str1;
    // string rev=reverse(str1);

    // if(rev==ori){
    //     return true;
    // }

    // return false;

    int low=0;
    int high=str1.size()-1;

    while(low<high){
        if(str1[low++]!=str1[high--]){
            return false;
        }
    }
    return true;
}

int main(){
    string str;
    cin>>str;
    cout<<checkPalindrome(str);
    return 0;
}