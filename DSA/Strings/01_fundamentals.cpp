// c type string in c
// char str={'h','e','l','l','o'};
// string str="hello";

// methods in string

#include <iostream>
using namespace std;

int main() {
    string str = "banana";
    bool visited[256] = {false};
    string res = "";

    for(char ch : str){
        if(!visited[ch]){
            res += ch;
            visited[ch] = true;
        }
    }

    cout << res;
    return 0;
}
