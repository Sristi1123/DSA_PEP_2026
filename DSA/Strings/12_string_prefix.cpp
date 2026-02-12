// https://leetcode.com/problems/check-if-string-is-a-prefix-of-array/

// class Solution {
// public:
//     bool isPrefixString(string s, vector<string>& words) {
//         string res="";
//         for(string word: words){
//             res+=word;
//             if(res==s){
//                 return true;
//             }
//             if(res.length()>s.length()) return false;
//         }
//         return false;
//     }
// };