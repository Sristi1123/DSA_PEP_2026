// https://leetcode.com/problems/search-insert-position/

// class Solution {
// public:
//     int searchInsert(vector<int>& nums, int target) {
//         int n=nums.size();
//         // for(int i=0;i<n;i++){
//         //     if(nums[i]>=target){
//         //         return i;
//         //     }
//         // }return n;

//         int s=0;
//         int e=n-1;
//         while(s<=e){
//             int mid=s+(e-s)/2;
//             if(nums[mid]==target) return mid;
//             else if(nums[mid]<target) s=mid+1;
//             else e=mid-1;
//         }
//         return s;
//     }
// };