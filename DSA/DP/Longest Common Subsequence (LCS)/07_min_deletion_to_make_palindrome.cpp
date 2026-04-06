//https://www.geeksforgeeks.org/problems/minimum-deletitions1648/1

// class Solution {
//   public:
//     int t[1001][1001];
//     int lcs(string &s1, string &s2, int n,int m){
//         if(n==0||m==0) return 0;
//         int res=0;
//         if(t[n][m]!=-1) return t[n][m];
//         if(s1[n-1]==s2[m-1]){
//             res=1+lcs(s1,s2,n-1,m-1);
//         }else{
//             res=max(lcs(s1,s2,n-1,m),lcs(s1,s2,n,m-1));
//         }
//         return t[n][m]=res;
//     }
//     int minDeletions(string s) {
//         memset(t,-1,sizeof(t));
//         int n=s.length();
//         int i=n-1;
//         string z="";
//         while(i>=0){
//             z+=s[i];
//             i--;
//         }
//         int m=z.length();
//         int a=lcs(s,z,n,m);
//         return n-a;
//     }
// };