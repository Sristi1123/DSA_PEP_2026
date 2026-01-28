//  https://leetcode.com/problems/minimum-swaps-to-group-all-1s-together-ii/submissions/

// class Solution {
// public:
//     int minSwaps(vector<int>& nums) {
//         int  n=nums.size();
//         int count=0;
//         for(int i=0;i<n;i++){
//             if(nums[i]==1){
//                 count++;
//             }
//         }
//         int ones=0;
//         for(int i=0;i<count;i++){
//             if(nums[i]==1){
//                 ones++;
//             }
//         }
//         int maxones=ones;
//         for (int i=count;i<n+count;i++){
//             ones-=(nums[(i-count)%n]);
//             ones+=nums[(i)%n];
//             maxones=max(maxones,ones);
//         }
//         return count-maxones;
//     }
// };                 