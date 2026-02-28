// https://leetcode.com/problems/find-missing-and-repeated-values/

// class Solution {
// public:
//     vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
//         int n=grid.size();
//         int x=n*n;
//         vector<int> freq(x+1,0);
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 freq[grid[i][j]]++;
//             }
//         }
//         int repeat=-1;
//         int miss=-1;
//         for(int i=1;i<=x;i++){
//             if(freq[i]==2) repeat=i;
//             if(freq[i]==0) miss=i;
//         }
//         return {repeat,miss};
//     }
// };