// https://leetcode.com/problems/valid-palindrome-ii/

// class Solution {
// public:
//     bool palin(string s,int low, int high){
//         while(low<high){
//             if(s[low++]!=s[high--]){
//                 return false;
//             }
//         }
//         return true;
//     }

//     bool validPalindrome(string s) {
//         int low=0;
//         int high=s.size()-1;

//         while(low<high){
//             if(s[low]==s[high]){
//                 low++;
//                 high--;
//             }else{
//                 return (palin(s,low+1,high) || palin(s,low,high-1));
//             }
//         }
//         return true;
//     }
// };
