// https://leetcode.com/problems/first-unique-character-in-a-string/

// class Solution {
// public:
//     int firstUniqChar(string s) {
//         // vector<int> freq(26);
//         // for(char i:s){
//         //     freq[i-'a']++;
//         // }
//         // for(int i=0;i<s.length();i++){
//         //      if(freq[s[i]-'a']==1){
//         //         return i;
//         //     }
//         // }
//         // return -1;

//         map<int ,int>freq;
//         for(int i=0;i<s.length();i++){
//             freq[s[i]]++;
//         }
//         for(int i=0;i<s.length();i++){
//             if(freq[s[i]]==1){
//                 return i;
//             }
//         }
//         return -1;
//     }
// };