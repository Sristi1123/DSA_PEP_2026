// https://www.geeksforgeeks.org/problems/bfs-traversal-of-graph/1

// class Solution {
//   public:
//     vector<int> bfs(vector<vector<int>> &adj) {
//         // code here
//         int n=adj.size();
//         queue<int> q;
//         vector<int> ans;
//         vector<bool> visited(n,false);
//         // start bfs from node 0
//         q.push(0);
//         visited[0]=true;
//         while(!q.empty()){
//             int front=q.front();
//             q.pop();
//             ans.push_back(front);
            
//             for(auto neighbour: adj[front]){
//                 if(!visited[neighbour]){
//                     q.push(neighbour);
//                     visited[neighbour]=true;
//                 }
//             }
//         }
//         return ans;
//     }
// };