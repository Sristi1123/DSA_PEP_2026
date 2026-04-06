// https://www.geeksforgeeks.org/problems/shortest-common-supersequence0322/1

// class Solution {
//   public:
//     int t[501][501];
//     int lcs(string &s1, string &s2, int n , int m){
//         if(n==0||m==0) return 0;
//         int res=0;
//         if(t[n][m]!=-1) return t[n][m];
//         if(s1[n-1]==s2[m-1]){
//             res=1+lcs(s1,s2,n-1,m-1);
//         }else{
//             res=max(lcs(s1,s2,n,m-1),lcs(s1,s2,n-1,m));
//         }
//         return t[n][m]=res;
//     }
//     int minSuperSeq(string &s1, string &s2) {
//         // code here
//         int n=s1.length();
//         int m=s2.length();
//         memset(t,-1,sizeof(t));
//         int a=lcs(s1,s2,n,m);
//         return n+m-a;
//     }
// };