// https://leetcode.com/problems/reverse-words-in-a-string/

// class Solution {
// public:
//     string reverseWords(string s) {
//         int n = s.length();
//         int start = 0;
//         reverse(s.begin(), s.end());
//         for (int i = 0; i <= n; i++) {
//             if (i == n || s[i] == ' ') {
//                 reverse(s.begin() + start, s.begin() + i);
//                 start = i + 1;
//             }
//         }
//         string res = "";
//         int i = 0;
//         while (i < n) {
//             while (i < n && s[i] == ' ') i++;
//             while (i < n && s[i] != ' ') res += s[i++];
//             while (i < n && s[i] == ' ') i++;
//             if (i < n) res += ' ';
//         }

//         return res;
//     }
// };
