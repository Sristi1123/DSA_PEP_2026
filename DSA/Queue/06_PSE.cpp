// https://www.geeksforgeeks.org/problems/previous-smaller-element/1

// class Solution {
//   public:
//     vector<int> prevSmaller(vector<int>& arr) {
//         //  code here
//         int n=arr.size();
//         stack<int> st;
//         vector<int> ans(n);
//         for(int i=0;i<n;i++){
//             while(!st.empty() && st.top()>=arr[i]){
//                 st.pop();
//             }
//             if(st.empty()){
//                 ans[i]=-1;
//             }else{
//                 ans[i]=st.top();
//             }
//             st.push(arr[i]);
//         }
//         return ans;
//     }
// };