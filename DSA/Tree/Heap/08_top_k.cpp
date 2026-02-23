// https://leetcode.com/problems/top-k-frequent-elements/

// class Solution {
// public:
//     vector<int> topKFrequent(vector<int>& nums, int k) {
//         // if it asked for max value then we always use min heap
//         unordered_map<int,int> freq;
//         for(int i:nums){
//             freq[i]++;
//         }
//         priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
//         for(auto i: freq){
//             int num=i.first;
//             int count=i.second;

//             pq.push({count,num});

//             if(pq.size()>k){
//                 pq.pop();
//             }
//         }
//         vector<int> res;
//         while(!pq.empty()){
//             res.push_back(pq.top().second);
//             pq.pop();
//         }
//         return res;
//     }
// };