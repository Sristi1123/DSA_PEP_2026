// https://www.geeksforgeeks.org/problems/coin-change2448/1

// class Solution {
//   public:
//     int t[1001][1001];
//     int helper(vector<int>& coins, int sum, int n){
//         if(n==0) return 0;
//         for(int i=0;i<n+1;i++){
//             for(int j=0;j<sum+1;j++){
//                 if(i==0) t[i][j] = 0;
//                 if(j==0) t[i][j] = 1;
//             }
//         }
//         for(int i=1;i<n+1;i++){
//             for(int j=1;j<sum+1;j++){
//                 if(coins[i-1]<=j){
//                     t[i][j]=((t[i][j-coins[i-1]])+t[i-1][j]);
//                 }else{
//                     t[i][j]=t[i-1][j];
//                 }
//             }
//         }
//         return t[n][sum];
//     }
//     int count(vector<int>& coins, int sum) {
//         // code here.
//         int n=coins.size();
//         return helper(coins,sum,n);
//     }
// };