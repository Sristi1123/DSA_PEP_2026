// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

// class Solution {
// public:
//     int firstoccurence(vector<int> &arr, int target){
//         int n=arr.size();
//         int start=0;
//         int end=n-1;
//         int res=-1;
//         while(start<=end){
//             // if mid is target-> store it in resvariable and go left (becz we will always find first occurence on left)
//             int mid=start+(end-start)/2;
//             if(arr[mid]==target){
//                 res=mid;
//                 end=mid-1;
//             }else if(arr[mid]<target) start=mid+1;
//             else end=mid-1; 
//         }return res;
//     }
    
//     int secondoccurence(vector<int> &arr, int target){
//         int n=arr.size();
//         int start=0;
//         int end=n-1;
//         int res=-1;
//         while(start<=end){
//             int mid=start+(end-start)/2;
//             if(arr[mid]==target){
//                 res=mid;
//                 start=mid+1;
//             }else if(arr[mid]<target) start=mid+1;
//             else end=mid-1; 
//         }
//         return res;
//     }

//     vector<int> searchRange(vector<int>& arr, int target) {
//         return {firstoccurence(arr,target),secondoccurence(arr,target)};
//     }
// };