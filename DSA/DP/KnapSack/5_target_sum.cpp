// https://leetcode.com/problems/target-sum/description/

// class Solution {
// public:
//     int t[21][1001];
//     int helper(vector<int>& nums, int tar, int n){
//         for(int i=0;i<n+1;i++){
//             for(int j=0;j<tar+1;j++){
//                 if(j==0) t[i][j]=1;
//                 else t[i][j]=0;
//             }
//         }
//         for(int i=1;i<n+1;i++){
//             for(int j=0;j<tar+1;j++){
//                 if(nums[i-1]<=j){
//                     t[i][j]=t[i-1][j-nums[i-1]]+t[i-1][j];
//                 }else{
//                     t[i][j]=t[i-1][j];
//                 }
//             }
//         }
//         return t[n][tar];
//     }
//     int subset(vector<int>& nums, int target, int n){
//         int sum=0;
//         for(int i=0;i<n;i++){
//             sum+=nums[i];
//         }
//         int s1=(target+sum)/2;
//         if(abs(target) > sum) return 0;
//         if((sum + target) % 2 != 0) return 0;
//         return helper(nums,s1,n);
//     }
//     int findTargetSumWays(vector<int>& nums, int target) {
//         int n=nums.size();
//         return subset(nums,target,n);
//     }
// };