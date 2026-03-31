// https://www.geeksforgeeks.org/problems/knapsack-with-duplicate-items4201/1

// class Solution {
//   public:
//     int t[1001][1001];
//     int helper(vector<int>& val, vector<int>& wt, int w, int n){
//         if(n==0||w==0) return 0;
//         for(int i=0;i<n+1;i++){
//             for(int j=0;j<w+1;j++){
//                 if(i==0 || j==0) t[i][j]=0;
//             }
//         }
//         for(int i=1;i<n+1;i++){
//             for(int j=1;j<w+1;j++){
//                 if(wt[i-1]<=j){
//                     t[i][j]=max(val[i-1]+t[i][j-wt[i-1]],t[i-1][j]);
//                 }else{
//                     t[i][j]=t[i-1][j];
//                 }
//             }
//         }
//         return t[n][w];
//     }
//     int knapSack(vector<int>& val, vector<int>& wt, int capacity) {
//         // code here
//         int n=val.size();
//         return helper(val,wt,capacity, n);
//     }
// };