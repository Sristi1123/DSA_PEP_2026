// https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1

// class Solution {
//   public:
//     bool dfs(int start,unordered_map<int,int> &parent,vector<bool> &visited,vector<vector<int>> &adj){
//         visited[start]=true;
//         for(int i :adj[start]){
//             if(!visited[i]){
//                 parent[i]=start;
//                 if(dfs(i,parent,visited,adj)) return true;
//             }
//             else if(parent[start]!=i) return true;
//         }
//         return false;0;32
//     }
//     bool isCycle(int V, vector<vector<int>>& edges) {
//         // Code here
//         vector<vector<int>>adj(V);
//         for(auto &it:edges){
//             int u=it[0];
//             int v=it[1];
//             adj[u].push_back(v);
//             adj[v].push_back(u);
//         }
//         vector<bool> visited(V,false);
//         for(int i=0;i<V;i++){
//             if(!visited[i]){
//                 unordered_map<int,int> parent;
//                 parent[i]=-1;
//                 if(dfs(i,parent,visited,adj)) return true;
//             }
//         }
//         return false;
//     }
// };