// https://leetcode.com/problems/next-greater-element-i/description/

// class Solution {
// public:
//     vector<int>nge( vector<int>& nums2){
//         stack<int> st;
//         int m=nums2.size();
//         vector<int> ans(m);
//         for(int i=m-1;i>=0;i--){
//             while(!st.empty() && st.top()<=nums2[i]){
//                 st.pop();
//             }if(st.empty()){
//                 ans[i]=-1;
//             }else{
//                 ans[i]=st.top();
//             }
//             st.push(nums2[i]);
//         }
//         return ans;
//     }
//     vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
//         unordered_map<int,int>mp;
//         vector<int> ans;
//         vector<int> res=nge(nums2);
//         for(int i=0;i<nums2.size();i++){
//             mp[nums2[i]]=res[i];
//         }
//         for(int i=0;i<nums1.size();i++){
//             ans.push_back(mp[nums1[i]]);
//         }
//         return ans;
//     }
// };