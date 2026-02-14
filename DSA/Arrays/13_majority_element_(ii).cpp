// https://leetcode.com/problems/majority-element-ii/

// class Solution {
// public:
//     vector<int> majorityElement(vector<int>& nums) {
//         int n=nums.size();
//         sort(nums.begin(),nums.end());
//         vector<int>x;
//         int freq=1;
//         if(n==1){
//             x.push_back(nums[0]);
//             return x;
//         }
//         for(int i=1;i<n;i++){
//             if(nums[i]==nums[i-1]){
//                 freq++;
//             }else{
//                 if(freq>n/3){
//                 x.push_back(nums[i-1]);
//                 }
//                 freq=1;
//             }
//         }
//         if (freq > n / 3) {
//             x.push_back(nums[n - 1]);
//         }
//         return x;
//     }
// };