// https://leetcode.com/problems/coin-change/

// #include <algorithm>
// class Solution {
// public:
//     int t[13][10001];
//     int helper(vector<int>& coins, int sum, int n){
//         if(n==0) return 0;
//         for(int i=0;i<n+1;i++){
//             for(int j=0;j<sum+1;j++){
//                 if (j==0) t[i][j] = 0;
//                 else if(i==0) t[i][j]= INT_MAX-1;
//             }
//         }
//         for(int j=1;j<sum+1;j++){
//             if(j%coins[0]==0){
//                 t[1][j]=j/coins[0];
//             }else t[1][j]=INT_MAX-1;
//         }
//         for(int i=2;i<n+1;i++){
//             for(int j=1;j<sum+1;j++){
//                 if(coins[i-1]<=j){
//                     t[i][j] = min(1 + t[i][j - coins[i-1]], t[i-1][j]);
//                 }else{
//                     t[i][j]=t[i-1][j];
//                 }
//             }
//         }
//         return t[n][sum];
//     }
//     int coinChange(vector<int>& coins, int amount) {
//         int n=coins.size();
//         int ans=helper(coins, amount, n);
//         if(ans==INT_MAX-1) ans=-1;
//         return ans;
//     }
// };