// https://leetcode.com/problems/median-of-two-sorted-arrays/

// class Solution {
// public:
//     double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//         int n=nums1.size();
//         int m=nums2.size();
//         vector<int> ans;
//         for(int i=0;i<n;i++){
//             ans.push_back(nums1[i]);
//         }
//         for(int i=0;i<m;i++){
//             ans.push_back(nums2[i]);
//         }
//         sort(ans.begin(),ans.end());
//         int x=n+m;
//         int i=0;
//         int j=x-1;
//         if(x%2==0){
//              return (ans[x / 2 - 1] + ans[x / 2]) / 2.0;
//         }else{
//             return ans[x/2];
//         }
//     }
// };