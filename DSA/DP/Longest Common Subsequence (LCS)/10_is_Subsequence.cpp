// https://leetcode.com/problems/is-subsequence/description/

// class Solution {
// public:
//     int t[101][10001];
//     int lcs(string &s, string &u, int n, int m){
//         if(n==0||m==0) return 0;
//         if(t[n][m]!=-1) return t[n][m];
//         int res=0;
//         if(s[n-1]==u[m-1]){
//             t[n][m] = 1 + lcs(s, u, n-1, m-1);
//         }else{
//             t[n][m]=max((lcs(s, u, n-1,m)),(lcs(s, u, n, m-1)));
//         }
//         return t[n][m];
//     }
//     bool isSubsequence(string &s, string &u) {
//         int n=s.length();
//         int m=u.length();
//         memset(t,-1,sizeof(t));
//         int a=lcs(s,u,n,m);
//         return a==n;
//     }
// };