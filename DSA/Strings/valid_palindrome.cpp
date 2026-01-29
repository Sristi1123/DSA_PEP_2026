// https://leetcode.com/problems/valid-palindrome/

// class Solution {
// public:
//     bool isPalindrome(string s) {
//         string t=s;
//         int n=s.length();
//         int start=0;
//         int end=n-1;
//         while(start<end){
//             if(!isalnum(t[start])){
//                 start++;
//                 continue;
//             }
//             if(!isalnum(t[end])){
//                 end--;
//                 continue;
//             }
//             if(tolower(t[start])!=tolower(t[end])){
//                 return false;
//             }
//             start++;
//             end--;
//         }
//         return true;
//     }
// };