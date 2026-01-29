// https://leetcode.com/problems/valid-anagram/

// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         // if(s.length()!=t.length()) return false;
//         // sort(s.begin(),s.end());
//         // sort(t.begin(),t.end());
//         // return s==t;


//         int n=s.length();
//         int m=t.length();
//          vector<int>freq(26);

//         for(char i:s) freq[i-'a']++;
//         for(char i:t) freq[i-'a']--;

//         for(int i:freq){
//             if(i!=0){
//                 return false;
//             }
//         }

//         return true;
//     }
// };