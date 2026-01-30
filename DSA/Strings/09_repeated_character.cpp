// https://www.geeksforgeeks.org/problems/find-first-repeated-character4108/1

// class Solution {
//   public:
//     string firstRepChar(string s) {
//         // code here.
//         int n=s.length();
//         vector<bool> seen(256, false);
//         string res="";
//         for(char ch: s){
//             if(seen[ch]) {
//                 res+=ch;
//                 return res;
//             }
//             seen[ch]=true;
//         }
//         return "-1";
//     }
// };