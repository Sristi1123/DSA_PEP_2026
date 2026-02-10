// https://leetcode.com/problems/valid-parentheses/

// class Solution {
// public:
//     bool isValid(string s) {
//         stack<char> st;
//         bool visited= false;
//         for(char ch:s){
//             if(ch=='('||ch=='{'||ch=='['){
//                 st.push(ch);
//             }
//             else{
//                 if (st.empty()) return false;

//                 char top = st.top();
//                 st.pop();

//                 if ((ch == ')' && top != '(') ||
//                     (ch == '}' && top != '{') ||
//                     (ch == ']' && top != '[')) {
//                     return false;
//                 }
//             }
//             // else if(ch==')'||ch=='}'||ch==']'){
//             //     if(st.top()==ch){
//             //         visited=true;
//             //         st.pop();
//             //     }
//             // }
//         }
//         return st.empty();
//     }
// };