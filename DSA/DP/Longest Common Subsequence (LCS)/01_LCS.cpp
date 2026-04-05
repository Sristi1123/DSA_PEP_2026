// https://www.geeksforgeeks.org/problems/longest-common-subsequence-1587115620/1

// Tabulation approach
// class Solution {
//   public:
//     int t[1001][1001];
//     int helper(string &s1, string &s2,int n, int m){
//         for(int i=0;i<n+1;i++){
//             for(int j=0;j<m+1;j++){
//                 if(i==0 || j==0) t[i][j]=0;
//             }
//         }
//         for(int i=1;i<n+1;i++){
//             for(int j=1;j<m+1;j++){
//                 if(s1[i-1]==s2[j-1]){
//                     t[i][j]= 1+t[i-1][j-1];
//                 }else{
//                     t[i][j]=max(t[i-1][j],t[i][j-1]);
//                 }
//             }
//         }
//         return t[n][m];
//     }
//     int lcs(string &s1, string &s2) {
//         // code here
//         int n=s1.length();
//         int m=s2.length();
//         return helper(s1,s2,n,m);
//     }
// };


// Memoization approach
// class Solution {
//   public:
//     int t[1001][1001];
//     int helper(string &s1, string &s2,int n,int m){
//         if(n==0||m==0) return 0;
//         int res=0;
//         if(t[n][m]!=-1) return t[n][m];
//         if(s1[n-1]==s2[m-1]){
//             res= 1+helper(s1,s2,n-1,m-1);
//         }else{
//             res= max((helper(s1,s2,n-1,m)),(helper(s1,s2,n,m-1)));
//         }
//         return t[n][m]=res;
//     }
//     int lcs(string &s1, string &s2) {
//         // code here
//         int n=s1.length();
//         int m=s2.length();
//         memset(t,-1,sizeof(t));
//         return helper(s1,s2,n,m);
//     }
// };
