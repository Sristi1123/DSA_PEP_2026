// https://leetcode.com/problems/maximum-subarray/submissions/1899317808/
// https://www.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1


// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int n=nums.size();
//         int currsum=0;
//         int maxsum=nums[0];
//         for(int i=0;i<n;i++){
//             currsum+=nums[i];
//             if(currsum>maxsum){
//                 maxsum=currsum;
//             }
//             if(currsum<0){
//                 currsum=0;
//             }
//         }
//         return maxsum;
//     }
// };