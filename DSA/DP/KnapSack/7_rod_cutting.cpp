// https://www.geeksforgeeks.org/problems/rod-cutting0840/1

// class Solution {
//   public:
//     int t[1001][1001];
//     int helper(vector<int> &price,vector<int> & len, int n){
//         if(n==0 ) return 0;
//         for(int i=0;i<n+1;i++){
//             for(int j=0;j<price.size()+1;j++){
//                 if(i==0||j==0) t[i][j]=0;
//             }
//         }
//         for(int i=1;i<n+1;i++){
//             for(int j=1;j<price.size()+1;j++){
//                 if(len[i-1]<=j){
//                     t[i][j]=max((price[i-1]+t[i][j-len[i-1]]),t[i-1][j]);
//                 }else{
//                     t[i][j]=t[i-1][j];
//                 }
//             }
//         }
//         return t[n][n];
//     }
//     int cutRod(vector<int> &price) {
//         // code here
//         int n=price.size();
//         vector<int> val;
//         int count=0;
//         for(int i=0;i<n;i++){
//             count++;
//             val.push_back(count);
//         }
//         return helper(price,val,n);
//     }
// };