// https://www.geeksforgeeks.org/problems/form-a-palindrome2544/1
// https://leetcode.com/problems/minimum-insertion-steps-to-make-a-string-palindrome/description/

// class Solution {
//   public:
//     int t[501][501];
//     int lcs(string &s,string &u,int n,int m){
//         if(n==0||m==0) return 0;
//         if(t[n][m]!=-1) return t[n][m];
//         int res=0;
//         if(s[n-1]==u[m-1]){
//             t[n][m]=1+lcs(s,u,n-1,m-1);
//         }else{
//             t[n][m]=max(lcs(s,u,n-1,m),lcs(s,u,n,m-1));
//         }
//         return t[n][m];
//     }
//     int findMinInsertions(string &s) {
//         // code here
//         int n=s.length();
//         string u(s.rbegin(), s.rend());  
//         memset(t, -1, sizeof(t));        
//         int a = lcs(s, u, n, n);
//         return n - a;                    
//     }
// };