// https://www.geeksforgeeks.org/problems/partitions-with-given-difference/1

// class Solution {
//   public:
//   int t[51][1001];
//     int subsetSum(vector<int>& arr, int s1, int n){
//         for(int i=0;i<n+1;i++){
//             for(int j=0;j<s1+1;j++){
//                 if(j==0) t[i][j]=1;
//                 else t[i][j]=0;
//             }
//         }
//         for(int i=1;i<n+1;i++){
//             for(int j=0;j<s1+1;j++){
//                 if(arr[i-1]<=j){
//                     t[i][j]=(t[i-1][j-arr[i-1]]+t[i-1][j]);
//                 }else{
//                     t[i][j]=t[i-1][j];
//                 }
//             }
//         }
//         return t[n][s1];
//     }
//     int helper(vector<int>& arr, int diff, int n){
//         int sum=0;
//         for(int i=0;i<n;i++){
//             sum+=arr[i];
//         }
//         if(diff > sum) return 0;
//         if((sum + diff) % 2 != 0) return 0;
//         int s1=(diff+sum)/2;
//         return subsetSum(arr,s1,n);
//     }
//     int countPartitions(vector<int>& arr, int diff) {
//         // Code here
//         int n=arr.size();
//         return helper(arr,diff,n);
//     }
// };