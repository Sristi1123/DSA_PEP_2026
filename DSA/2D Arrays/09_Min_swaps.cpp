// https://leetcode.com/problems/minimum-swaps-to-arrange-a-binary-grid/description/?envType=daily-question&envId=2026-03-02

// class Solution {
// public:
//     int minSwaps(vector<vector<int>>& grid) {
//         int n=grid.size();
//         vector<int> zeroes(n,0);
//         for(int i=0;i<n;i++){
//             int count=0;
//             for(int j=n-1;j>=0;j--){
//                 if(grid[i][j]==0) count++;
//                 else break;
//             }
//             zeroes[i]=count;
//         }
//         int swaps=0;
//         for(int i=0;i<n;i++){
//             int req=n-i-1;
//             if(zeroes[i]>=req) continue;
//             int j=i+1;
//             while(j<n && zeroes[j]<req){
//                 j++;
//             }
//             if(j==n) return -1;
//             while(j>i){
//                 swap(zeroes[j],zeroes[j-1]);
//                 swaps++;
//                 j--;
//             }
//         }
//         return swaps;
//     }
// };