// // https://leetcode.com/problems/merge-sorted-array/

// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         int x=nums1.size();
//         int y=nums2.size();
//         int z=m+n;
//         int i=m-1;
//         int j=n-1;
//         int k=z-1;
//         while(j>=0){
//             if(nums2[j]>nums1[k]){
//                 nums1[k]=nums2[j];
//                 j--;
//                 k--;
//             }
//         }return i+1;
//     }
// }


// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         int i = m - 1;        
//         int j = n - 1;       
//         int k = m + n - 1;    
//         while(i >= 0 && j >= 0) {
//             if(nums1[i] > nums2[j]) {
//                 nums1[k] = nums1[i];
//                 i--;
//             } else {
//                 nums1[k] = nums2[j];
//                 j--;
//             }
//             k--;
//         }
//         while(j >= 0) {
//             nums1[k] = nums2[j];
//             j--;
//             k--;
//         }
//     }
// };
