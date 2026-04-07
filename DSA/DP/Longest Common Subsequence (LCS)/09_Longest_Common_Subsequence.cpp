// https://www.geeksforgeeks.org/problems/longest-repeating-subsequence2004/1

// class Solution {
//   public:
//     int t[1001][1001];
//     int helper(string &s,string &u,int n, int m){
//         if(n==0||m==0) return 0;
//         for(int i=0;i<n+1;i++){
//             for(int j=0;j<m+1;j++){
//                 if(i==0||j==0) t[i][j]=0;
//             }
//         }
//         for(int i=1;i<n+1;i++){
//             for(int j=1;j<m+1;j++){
//                 if(s[i-1]==u[j-1] && (i!=j)){
//                     t[i][j]=1+t[i-1][j-1];
//                 }else{
//                     t[i][j]=max((t[i][j-1]),t[i-1][j]);
//                 }
//             }
//         }
//         return t[n][m];
//     }
//     int LongestRepeatingSubsequence(string &s) {
//         // Code here
//         int n=s.length();
//         return helper(s,s,n,n);
//     }
// };