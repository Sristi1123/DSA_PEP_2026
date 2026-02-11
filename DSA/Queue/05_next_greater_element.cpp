// https://www.geeksforgeeks.org/problems/next-larger-element-1587115620/1

// class Solution {
//   public:
//     vector<int> nextLargerElement(vector<int>& arr) {
//         // code here
//         int n=arr.size();
//         vector<int> res(n);
//         stack<int> st;
//         for(int i=n-1;i>=0;i--){
//             //remove all elements smaller than or equal
//             // to the current element
//             while(!st.empty() && st.top()<=arr[i]){
//                 st.pop();
//             }
//             if(st.empty()){
//                 res[i]=-1;
//             }else{
//                 res[i]=st.top();
//             }
//             st.push(arr[i]);
//         }
//         return res;
//     }
// };