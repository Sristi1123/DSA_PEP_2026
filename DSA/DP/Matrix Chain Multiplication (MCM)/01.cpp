// https://www.geeksforgeeks.org/problems/matrix-chain-multiplication0303/1


// class Solution {
//   public:
//     int t[101][101];
//     int solve(vector<int> &arr, int i, int j){
//         if(i>=j) return 0;
//         int a=INT_MAX;
//         if(t[i][j]!=-1) return t[i][j];
//         for(int k=i;k<=j-1;k++){
//             int temp=solve(arr,i,k)+solve(arr,k+1,j)+(arr[i-1]*arr[k]*arr[j]);
//             if(temp<a){
//                 a=temp;
//             }
//         }
//         return t[i][j]=a;
//     }
//     int matrixMultiplication(vector<int> &arr) {
//         // code here
//         int n=arr.size();
//         memset(t,-1,sizeof(t));
//         return solve (arr, 1,n-1);
//     }
// };