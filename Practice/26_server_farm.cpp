// void dfs( vector<vector<char>> &servers, vector<vector<bool>>&visited,int r, int c){
//     int n=servers.size();
//     int m=servers[0].size();
//     if(r<0||r>=n||c<0||c>=m) return;
//     if(visited[r][c] || servers[r][c]!='.') return;
    
//     visited[r][c]=true;
//     dfs(servers,visited,r-1,c);
//     dfs(servers,visited,r+1,c);
//     dfs(servers,visited,r,c-1);
//     dfs(servers,visited,r,c+1);
// }
// int countContaminationClusters(vector<vector<char>>& servers, int n, int m)  {
//     // add your code here
//     vector<vector<bool>>visited(n,vector<bool>(m,false));
//     int count=0;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//         if(!visited[i][j]&&servers[i][j]=='.'){
//             dfs(servers,visited,i,j);
//             count++;
//         }
//         }
//     }
//     return count;
// }