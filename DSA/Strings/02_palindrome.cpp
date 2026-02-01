#include <iostream>
using namespace std;

bool checkPalindrome(string str){
    int low = 0;
    int high = str.size() - 1;

    while(low < high){
        if(str[low] != str[high]){
            return false;
        }
        low++;
        high--;
    }
    return true;
}

int main(){
    string str;
    cin >> str;

    if(checkPalindrome(str))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
