// https://www.geeksforgeeks.org/problems/course-schedule/1
// https://leetcode.com/problems/course-schedule-ii/

// class Solution {
//   public:
//     vector<int> findOrder(int n, vector<vector<int>> &prerequisites) {
//         // code here
//         unordered_map<int,list<int>> adj(n);
//         for(auto it:prerequisites){
//             int u=it[0];
//             int v=it[1];
//             adj[v].push_back(u);
//         }
//         vector<int> indegree(n,0);
//         for(int i=0;i<n;i++){
//             for(auto it:adj[i]){
//                 indegree[it]++;
//             }
//         }
//         queue<int> q;
//         for(int i=0;i<n;i++){
//             if(indegree[i]==0){
//                 q.push(i);
//             }
//         }
//         vector<int> ans;
//         while(!q.empty()){
//             int front=q.front();
//             q.pop();
//             for(auto it: adj[front]){
//                 indegree[it]--;
//                 if(indegree[it]==0){
//                     q.push(it);
//                 }
//             }
//         }
//         while(!q.empty()){
//             ans.push_back(q.front());
//             q.pop();
//         }
//         return ans;
//     }
// };