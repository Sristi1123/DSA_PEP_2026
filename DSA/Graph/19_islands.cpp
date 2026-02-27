// https://www.geeksforgeeks.org/batch/gfg-160-problems/track/graph-gfg-160/problem/find-the-number-of-islands

// class Solution {
//   public:
//     void dfs(vector<vector<char>>& grid,vector<vector<bool>> &visited,int r,int c){
//         int n=grid.size();
//         int m=grid[0].size();
//         if(r<0||r>=n||c<0||c>=m) return;
//         if(visited[r][c]||grid[r][c]=='W') return;
//         visited[r][c]=true;
//         dfs(grid,visited,r-1,c);
//         dfs(grid,visited,r+1,c);
//         dfs(grid,visited,r,c-1);
//         dfs(grid,visited,r,c+1);
//         // Diagonal conditions
//         dfs(grid,visited,r-1,c-1);
//         dfs(grid,visited,r-1,c+1);
//         dfs(grid,visited,r+1,c-1);
//         dfs(grid,visited,r+1,c+1);
//     }
//     int countIslands(vector<vector<char>>& grid) {
//         // Code here
//         int n=grid.size();
//         int m=grid[0].size();
//         int count=0;
//         vector<vector<bool>> visited(n,vector<bool>(m,false));
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(!visited[i][j]&&grid[i][j]!='W'){
//                     dfs(grid,visited,i,j);
//                     count++;
//                 }
//             }
//         }
//         return count;
//     }
// };