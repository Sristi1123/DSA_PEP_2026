// int solve(int index,vector<int>&coins,int target){
//     if(target==0) return 1;
//     if(target<0 || index==coins.size()) return 0;
//     int take=solve(index,coins,target-coins[index]);
//     int skip=solve(index+1,coins,target);
//     return take+skip;
// }
// int countCombinations(vector<int>& candidates, int target) {
//     // add your code here
//     return solve(0,candidates,target);
// }


// --> approach 2
// int countCombinations(vector<int>& candidates, int target) {
//     // add your code here
//     int n=candidates.size();
//     vector<int> dp(target+1,0);
//     dp[0]=1;
//     for(int i:candidates){
//         for(int j=i;j<=target;j++){
//             dp[j]+=dp[j-i];
//         }
//     }
//     return dp[target];
// }