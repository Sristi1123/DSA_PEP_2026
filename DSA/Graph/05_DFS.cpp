// https://www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1

// class Solution {
//   public:
// //    It is a recursive algorithm

//     void helper(int node,vector<vector<int>>& adj,vector<bool> &visited,vector<int> &ans){
//         visited[node]=true;
//         ans.push_back(node);
        
//         for(auto neighbour:adj[node]){
//             if(!visited[neighbour]){
//                 helper(neighbour,adj,visited,ans);
//             }
//         }
//     }
//     vector<int> dfs(vector<vector<int>>& adj) {
//         // Code here
//         int n=adj.size();
//         vector<bool> visited(n,false);
//         vector<int> ans;
        
//         helper(0,adj,visited,ans);
//         return ans;
//     }
// };