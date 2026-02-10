// https://www.geeksforgeeks.org/problems/infix-to-postfix-1587115620/1

// class Solution {
//   public:
//   int precedence(char c){
//       if(c=='^') return 3;
//       else if(c=='*'|| c=='/') return 2;
//       else if(c=='+'||c=='-') return 1;
//       return -1;
//   }
//     string infixToPostfix(string& s) {
//         // approach
//         // 1) -> operand-> append in ans
//         string ans="";
//         //  2)-> '(' -> push in stack
//         stack<char> st;
//         //  3)-> ')' -> pop from to ans until '('
//         // for(int i=0;i<s.size();i++){
//         //     if(s[i]=='+'|| s[i]=='-' || s[i]=='*' || s[i]=='/'
//         //     || s[i]=='('){
//         //         st.push(s[i]);
//         //     }else if(s[i]==')'){
//         //         st.pop()
//         //     }
//         //     else{
//         //         ans+=s[i];
//         //     }
//         // }
        
//         for(char ch:s){
//             if(isalnum(ch)){
//                 ans+=ch;
//             }
//             else if(ch=='('){
//                 st.push(ch);
//             }
//             else if(ch==')'){
//                 while(!st.empty() && st.top()!='('){
//                     ans+=st.top();
//                     st.pop();
//                 }
//                 st.pop();
//             }
//             else{
//                 while(!st.empty() && precedence(st.top())>=precedence(ch) && 
//                 !(ch=='^' && st.top()=='^')){
//                     ans+=st.top();
//                     st.pop();
//                 }
//                 st.push(ch);
//             }
//         }
//         while(!st.empty()){
//             ans+=st.top();
//             st.pop();
//         }
//         return ans;
//     }
// };
