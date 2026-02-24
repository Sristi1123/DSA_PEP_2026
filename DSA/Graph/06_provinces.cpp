// https://leetcode.com/problems/number-of-provinces/?envType=problem-list-v2&envId=graph

// class Solution {
// public:
//     void helper(int city,vector<vector<int>>& isConnected,vector<bool> &visited){
//         // mark the curr city as visited
//         visited[city]=true;
//         int n=isConnected.size();
//         for(int i=0;i<n;i++){       //i is neighbour
//             if(isConnected[city][i]==1 && !visited[i]){
//                 helper(i,isConnected,visited);
//             }
//         }
//     }
//     int findCircleNum(vector<vector<int>>& isConnected) {
//         int n=isConnected.size();
//         // int m=isConnected[0].size();   it is a square matrix n*n
//         vector<bool> visited(n,false);
//         int provinceCount=0;
//         // loop over all the cities
//         for(int i=0;i<n;i++){
//             if(!visited[i]){
//                 helper(i,isConnected,visited);
//                 provinceCount++;
//             }
//         }
//         return provinceCount;
//     }
// };