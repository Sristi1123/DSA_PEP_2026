// https://www.geeksforgeeks.org/problems/insert-an-element-at-the-bottom-of-a-stack/1

// class Solution {
//   public:
//     stack<int> insertAtBottom(stack<int> st, int x) {
//         vector<int> ans;
//         while(!st.empty()){
//             ans.push_back(st.top());
//             st.pop();
//         }
//         st.push(x);
//         int n=ans.size()-1;
//         for(int i=n;i>=0;i--){
//             st.push(ans[i]);
//         }
//         return st;
//     }
// };