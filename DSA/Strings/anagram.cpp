// https://leetcode.com/problems/valid-anagram/

// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         // map<int,int>freq;
//         int n=s.length();
//         int m=t.length();
//         // for(int i=0;i<n;i++){
//         //     freq[s[i]]++;
//         // }
//         // map<int,int>count;
//         // for(int i=0;i<m;i++){
//         //     count[t[i]]++;
//         // }
//         if(n!=m) return false;
//             vector<int> freq(26);
//             for(char i:s){
//                 freq[i-'a']++;
//             }
//             for(char j:t){
//                 freq[j-'a']--;
//             }
//             for(int i:freq){
//                 if(i!=0){
//                     return false;
//                 }
//             }
//         return true;
//     }
// };