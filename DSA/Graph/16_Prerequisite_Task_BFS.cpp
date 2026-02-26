// https://www.geeksforgeeks.org/problems/prerequisite-tasks/1
// https://leetcode.com/problems/course-schedule/

// class Solution {
//   public:
//     bool isPossible(int N, int P, vector<pair<int, int> >& prerequisites) {
//         // Code here
//         vector<vector<int>> adj(N);
//         for(auto it:prerequisites){
//             int u=it.first;
//             int v=it.second;
//             adj[u].push_back(v);
//         }
//         // create indegree vector
//         vector<int> indegree(N,0);
//         for(int i=0;i<N;i++){
//             for(auto j:adj[i]){
//                 indegree[j]++;
//             }
//         }
//         // push all vertices with indegree 0 in the queue
//         queue<int> q;
//         for(int i=0;i<N;i++){
//             if(indegree[i]==0){
//                 q.push(i);
//             }
//         }
//         int count=0;
//         while(!q.empty()){
//             int front=q.front();
//             q.pop();
//             count++;
//             for(auto &it:adj[front]){
//                 indegree[it]--;
//                 if(indegree[it]==0){
//                     q.push(it);
//                 }
//             }
//         }
//         if(count==N) return true;
//         return false;
//     }
// };