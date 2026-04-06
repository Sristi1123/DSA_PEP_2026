// https://leetcode.com/problems/shortest-common-supersequence/description/

// class Solution {
// public:
//     int t[1001][1001];
//     void helper(string &s1, string &s2, int n, int m){
//         for(int i=0;i<n+1;i++){
//             for(int j=0;j<m+1;j++){
//                 if(i==0 ||j==0) t[i][j]=0;
//             }
//         }
//         for(int i=1;i<n+1;i++){
//             for(int j=1;j<m+1;j++){
//                 if(s1[i-1]==s2[j-1]){
//                     t[i][j]=1+t[i-1][j-1];
//                 }else{
//                     t[i][j]=max(t[i][j-1],t[i-1][j]);
//                 }
//             }
//         }
//     }
//     string lcs(string &s1, string &s2, int n, int m){
//         string res="";
//         helper(s1,s2,n,m);
//         int i=n;
//         int j=m;
//         while(i>0&&j>0){
//             if(s1[i-1]==s2[j-1]){
//                 res.push_back(s1[i-1]);
//                 i--;
//                 j--;
//             }else{
//                 if(t[i][j-1]>t[i-1][j]){
//                     res.push_back(s2[j-1]);
//                     j--;
//                 }else{
//                     res.push_back(s1[i-1]);
//                     i--;
//                 }
//             }
//         }
//         while(i>0){
//             res.push_back(s1[i-1]);
//             i--;
//         }
//         while(j>0){
//             res.push_back(s2[j-1]);
//             j--;
//         }
//         reverse(res.begin(),res.end());
//         return res;
//     }
//     string shortestCommonSupersequence(string str1, string str2) {
//         int n=str1.length();
//         int m=str2.length();
//         return lcs(str1,str2,n,m);
//     }
// };