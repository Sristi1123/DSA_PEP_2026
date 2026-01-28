//  https://leetcode.com/problems/find-peak-element/description/

// class Solution {
// public:
//     int findPeakElement(vector<int>& nums) {
//         int n=nums.size();
//         int s=0;
//         int e=n-1;
//         while(s<e){
//             int mid=s+(e-s)/2;
//             if(nums[mid]<nums[mid+1]){
//                 s=mid+1;
//             }
//             else {
//                 e=mid;
//             }
//         }
//         return s;
//     }
// };

// class Solution {
// public:
//     int findPeakElement(vector<int>& nums) {
//         int n=nums.size();
//         int pivot=-1;
//         if(nums.size()==1) return 0;
//         for(int i=0;i<n-1;i++){
//             if(nums[i]>nums[i+1]){
//                 return i;
//             }
//         }
//         return n-1;
//     }
// };