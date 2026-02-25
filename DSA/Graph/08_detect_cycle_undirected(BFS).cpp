// https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1

// class Solution {
//   public:
//     bool bfs(int start, vector<vector<int>> &adjList, vector<bool> &visited){
//         queue<int> q;
//         unordered_map<int,int> parent;
//         visited[start]=true;
//         q.push(start);
//         parent[start]=-1;
        
//         while(!q.empty()){
//             int node=q.front();
//             q.pop();
//             for(int neighbour:adjList[node]){
//                 if(!visited[neighbour]){
//                     visited[neighbour]=true;
//                     q.push(neighbour);
//                     parent[neighbour]=node;   //set parent to child
//                 }
//                 else if(parent[node]!=neighbour) return true;
//             }
//         }
//         return false;
//     }
//     bool isCycle(int V, vector<vector<int>>& edges) {
//         // Code here
        
//         // firstly we have create a list as we are not given with that 
//         vector<vector<int>> adjList(V);
//         for(auto &it: edges){
//             int u=it[0] ;  //it.first
//             int w=it[1] ;  //it.second;
            
//             adjList[u].push_back(w);
//             adjList[w].push_back(u);
//         }
//         vector<bool> visited(V,false);
//         // The graph can have multiple component -> for disconnected we have to traverse a loop
        
//         for(int i=0;i<V;i++){
//             if(!visited[i]){
//                 if(bfs(i,adjList,visited)) return true;
//             }
//         }
//         return false;
//     }
// };