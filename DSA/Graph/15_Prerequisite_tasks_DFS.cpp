// https://www.geeksforgeeks.org/problems/prerequisite-tasks/1

// class Solution {
//   public:
//     bool dfs(int node, unordered_map<int,list<int>> &adj,vector<int> &visited,vector<int> &rec){
//         visited[node]=1;
//         rec[node]=1;
//         for(auto neighbour: adj[node]){
//             if(!visited[neighbour]){
//                 if(dfs(neighbour,adj,visited,rec)) return true;
//             }
//         else if(rec[neighbour]) return true;
//         }
//         rec[node]=0;
//         return false;
//     }
//     bool isPossible(int N, int P, vector<pair<int, int> >& prerequisites) {
//         // Code here
//         int n=prerequisites.size();
//         unordered_map<int,list<int>> adj(N);
//         for(auto it: prerequisites){
//             int u=it.first;
//             int v=it.second;
//             adj[v].push_back(u);
//         }
//         vector<int> rec(N,0);
//         vector<int> visited(N,0);
//         for(int i=0;i<N;i++){
//             if(!visited[i]){
//                 // dfs call
//                 if(dfs(i,adj,visited,rec)) return false;
//             }
//         }
//         return true;
//     }
// };