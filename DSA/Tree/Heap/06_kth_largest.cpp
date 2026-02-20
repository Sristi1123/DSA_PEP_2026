// https://leetcode.com/problems/kth-largest-element-in-an-array/

// class Solution {
// public:
//     int findKthLargest(vector<int>& nums, int k) {
//         priority_queue<int, vector<int>, greater<int>> pq_min;
//         for(int i:nums){
//             pq_min.push(i);
//             if(pq_min.size()>k){
//                 pq_min.pop();
//             }
//         }
//         return pq_min.top();
//     }
// };