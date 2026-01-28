// https://www.geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/1

// class Solution {
//   public:
//     int findFloor(vector<int>& arr, int x) {
//         // code here
//         int n=arr.size();
//         int s=0;
//         int e=n-1;
//         int ans=-1;
//         while(s<=e){
//             int mid=s+(e-s)/2;
//             if(arr[mid]<=x){
//               ans=mid;
//               s=mid+1;  
//             } 
//             else e=mid-1;
//         }
//         return ans;
//     }
// };
