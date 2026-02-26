// https://leetcode.com/problems/number-of-islands/

// class Solution {
// public:
//     // here we are changing in original matrix 
//     void dfs(vector<vector<char>>& grid,int row, int col){
//         int n=grid.size();
//         int m=grid[0].size();
//         if(row<0||row>=n||col<0||col>=m||grid[row][col]=='0') return;
//         grid[row][col]='0';

//         dfs(grid,row-1,col);
//         dfs(grid,row+1,col);
//         dfs(grid,row,col-1);
//         dfs(grid,row,col+1);
//     }
//     int numIslands(vector<vector<char>>& grid) {
//         int n=grid.size();
//         int m=grid[0].size();
//         int count=0;
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(grid[i][j]=='1'){
//                     dfs(grid,i,j);
//                     count++;
//                 }
//             }
//         }
//         return count;
//     }
// };