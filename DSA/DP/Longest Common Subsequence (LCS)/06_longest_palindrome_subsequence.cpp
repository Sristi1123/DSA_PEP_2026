// https://leetcode.com/problems/longest-palindromic-subsequence/
// https://leetcode.com/problems/shortest-common-supersequence/

// class Solution {
//   public:
//     int x[1001][1001];
//     int lcs(string &s, string &t, int n, int m){
//         if(n==0||m==0) return 0;
//         if(x[n][m]!=-1) return x[n][m];
//         int res=0;
//         if(s[n-1]==t[m-1]){
//             res=1+lcs(s,t,n-1,m-1);
//         }else{
//             res=max(lcs(s,t,n-1,m),lcs(s,t,n,m-1));
//         }
//         return x[n][m]=res;
//     }
//     int longestPalindromeSubseq(string &s) {
//         // code here
//         int n=s.length();
//         string t="";
//         int i=n-1;
//         while(i>=0){
//             t+=s[i];
//             i--;
//         }
//         memset(x,-1,sizeof(x));
//         int m=t.length();
//         int a=lcs(s,t,n,m);
//         return a;
//     }
// };