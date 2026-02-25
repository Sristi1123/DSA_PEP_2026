// https://www.geeksforgeeks.org/problems/topological-sort/1

// class Solution {
//   public:
//     void dfs(int start, vector<vector<int>> &adj, vector<bool> &visited, stack<int> &st){
//         visited[start]=true;
//         for(int i:adj[start]){
//             if(!visited[i]){
//                 dfs(i,adj,visited,st);
//             }
//         }
//         st.push(start);
//     }
//     vector<int> topoSort(int V, vector<vector<int>>& edges) {
//         // code here
//         vector<vector<int>> adj(V);
//         for(auto &it:edges){
//             int u=it[0];
//             int v=it[1];
//             adj[u].push_back(v);
//         }
//         vector<bool> visited(V,false);
//         stack<int> st;
//         vector<int> ans;
//         // call dfs for every nodes
//         for(int i=0;i<V;i++){
//             if(!visited[i]){
//                 // call dfs here
//                 dfs(i,adj,visited,st);
//             }
//         }
//         while(!st.empty()){
//             ans.push_back(st.top());
//             st.pop();
//         }
//         return ans;
//     }
// };