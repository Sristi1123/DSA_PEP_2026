// https://leetcode.com/problems/partition-equal-subset-sum/

// class Solution {
// public:
//     int t[201][100001];
//     bool helper(vector<int>& nums, int sum, int n) {
//         // code here
//         if(n==0&&sum==0) return true;
//         for(int i=0;i<n+1;i++){
//             for(int j=0;j<sum+1;j++){
//                 if(i==0) t[i][j]= false;
//                 if(j==0) t[i][j]= true;
//             }
//         }
//         for(int i=1;i<n+1;i++){
//             for(int j=1;j<sum+1;j++){
//                 if(nums[i-1]<=j){
//                     t[i][j]=(t[i-1][j-nums[i-1]])||(t[i-1][j]);
//                 }else{
//                     t[i][j]=t[i-1][j];
//                 }
//             }
//         }
//         return t[n][sum];
//     }
//     bool isSubsetSum(vector<int>& nums, int sum) {
//         // code here
//         int n=nums.size();
//         return helper(nums,sum,n);
//     }
//     bool canPartition(vector<int>& nums) {
//     int sum = 0;
//     for(int i = 0; i < nums.size(); i++){
//         sum += nums[i];
//     }
//     if(sum % 2 != 0) return false;

//     return isSubsetSum(nums, sum/2);
//     }
// };