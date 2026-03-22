// http://geeksforgeeks.org/problems/perfect-sum-problem5633/1

// class Solution {
//   public:
//     int t[1001][1001];
//     int helper(vector<int>& arr, int sum,int n) {
//         // code here
//         int count=0;
//         for(int i=0;i<=n;i++){
//             for(int j=0;j<=sum;j++){
//                 if(i==0 && j==0) t[i][j]=1;
//                 else if(i==0) t[i][j]=0;
//                 else if(j==0) t[i][j]=1;
//             }
//         }
//         for(int i=1;i<n+1;i++){
//             for(int j=0;j<sum+1;j++){
//                 if(arr[i-1]<=j){
//                     t[i][j]=t[i-1][j-arr[i-1]]+t[i-1][j];
//                 }else {
//                     t[i][j]=t[i-1][j];
//                 }
//             }
//         }
//         // if(t[n][sum]==1) count++;
//         return t[n][sum];
//     }
//     int perfectSum(vector<int>& arr, int target) {
//         // code here
//         int n=arr.size();
//         return helper(arr,target,n);
//     }
// };