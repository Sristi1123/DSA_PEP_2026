// https://www.geeksforgeeks.org/problems/longest-common-substring1452/1

// class Solution {
//   public:
//     int t[1001][1001];
//     int helper(string& s1, string& s2,int n, int m){
//         for(int i=0;i<n+1;i++){
//             for(int j=0;j<m+1;j++){
//                 if(i==0||j==0) t[i][j]=0;
//             }
//         }
//         int max_val=0;
//         for(int i=1;i<n+1;i++){
//             for(int j=1;j<m+1;j++){
//                 if(s1[i-1]==s2[j-1]){
//                     t[i][j]=1+t[i-1][j-1];
//                     max_val=max(max_val,t[i][j]);
//                 }else{
//                     t[i][j]=0;
//                 }
//             }
//         }
//         return max_val;
//     }
//     int longCommSubstr(string& s1, string& s2) {
//         // your code here
//         int n=s1.length();
//         int m=s2.length();
//         return helper(s1,s2,n,m);
//     }
// };