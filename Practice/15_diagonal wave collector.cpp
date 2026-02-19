// vector<vector<int>> diagonalWaveCollector(vector<vector<int>>& grid) {
//     vector<vector<int>> res;
//     int m=grid.size();
//     int n=grid[0].size();
//     for(int s=0;s<=m+n-2;s++){
//         vector<int> diag;
//         for(int i=0;i<m;i++){
//             int j=s-i;
//             if(j>=0 && j<n){
//                 diag.push_back(grid[i][j]);
//             }
//         }
//         res.push_back(diag);
//     }
//     return res;
//     // add your code here
// }