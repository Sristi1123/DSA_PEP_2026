// https://leetcode.com/problems/single-number/

// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         int n=nums.size();

//         int ans=0;
//         for(int i:nums){
//             ans=ans^i;
//         }
//         return ans;

        
//         // unordered_map<int,int> freq;
//         // for(int i:nums){
//         //     freq[i]++;
//         // }
//         // for(auto i:freq){
//         //     if(i.second==1){
//         //         return i.first;
//         //     }
//         // }
//         // return -1;
//     }
// };