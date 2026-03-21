// https://www.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1


// Approach 1-> Recursion + Memoization

// #include <cstring>
// class Solution {
//   public:
//     static int t[1002][1002];

//     int helper(int W, vector<int> &val, vector<int> &wt, int n) {
        
//         // base condition
//         if(n==0 || W==0) return 0;

//         if(t[n][W] != -1){
//             return t[n][W];
//         }

//         // choice diagram
//         if(wt[n-1] <= W){
//             t[n][W] = max(val[n-1] + helper(W - wt[n-1], val, wt, n-1),helper(W, val, wt, n-1)
//             );
//         } else {
//             t[n][W] = helper(W, val, wt, n-1);
//         }

//         return t[n][W];
//     }

//     int knapsack(int W, vector<int> &val, vector<int> &wt) {
//         memset(t, -1, sizeof(t));
//         int n = val.size();
//         return helper(W, val, wt, n);
//     }
// };
// int Solution::t[1002][1002];

// Approach 2-> Tabulation

// class Solution {
//   public:
//     static int t[1002][1002];
//     int helper(vector<int> &wt, vector<int> &val,int w, int n) {
//         // code here
//         for(int i=0;i<n+1;i++){
//             for(int j=0;j<w+1;j++){
//                 if(i==0||j==0){
//                     t[i][j]=0;
//                 }
//             }
//         }
//         for(int i=1;i<n+1;i++){
//             for(int j=1;j<w+1;j++){
//                 if(wt[i-1]<=j){
//                     t[i][j]=max((val[i-1]+t[i-1][j-wt[i-1]]),t[i-1][j]);
//                 }else if(wt[i-1]>j){
//                     t[i][j]=t[i-1][j];
//                 }
//             }
//         }
//         return t[n][w];
        
//     }
//     int knapsack(int W, vector<int> &val, vector<int> &wt) {
//         // code here
//         int n=val.size();
//         return helper(wt,val,W,n);
//     }
// };
// int Solution::t[1002][1002];