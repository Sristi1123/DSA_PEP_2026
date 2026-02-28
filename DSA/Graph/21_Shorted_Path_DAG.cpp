// https://www.naukri.com/code360/problems/shortest-path-in-dag_8381897?leftPanelTabValue=PROBLEM

// void dfs(int node,vector<vector<pair<int,int>>> &adj, vector<int> &visited, stack<int> &st){
//     visited[node]=1;
    
//     for(auto i: adj[node]){
//         int neighbour=i.first;
//         if(!visited[neighbour]){
//             dfs(neighbour,adj,visited,st);
//         }
//     }
//     //after visited all the neighbour push the current node into stack 
//     //from here i can't go further any neighbour
//     st.push(node);

// }

// vector<int> shortestPathInDAG(int n, int m, vector<vector<int>> &edges)
// {
//     // Write your code here
//     // unordered_map<int,list<pair<int,int>>> adj(n);
//     vector<vector<pair<int,int>>> adj(n);
//     for(int i=0;i<m;i++){
//         int u=edges[i][0];
//         int v=edges[i][1];
//         int w=edges[i][2];

//         adj[u].push_back({v,w});
//     }
//     vector<int> visited(n,0);
//     stack<int> st;
//     for(int i=0;i<n;i++){
//         if(!visited[i]){
//             // dfs
//             dfs(i, adj, visited, st);
//         }
//     }
//     vector<int> dist(n,INT_MAX);
//     dist[0]=0;
//     while(!st.empty()){
//         int node=st.top();
//         st.pop();
//         if(dist[node]!=INT_MAX){
//             for(auto &edge:adj[node]){
//                 int neighbour=edge.first;
//                 int weight=edge.second;
//                 if(dist[node]+weight<dist[neighbour]){
//                     dist[neighbour]=dist[node]+weight;
//                 }
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         if(dist[i]==INT_MAX){
//             dist[i]=-1;
//         }
//     }
//     return dist;
// }