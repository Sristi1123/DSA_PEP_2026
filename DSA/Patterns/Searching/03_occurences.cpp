// https://www.geeksforgeeks.org/problems/number-of-occurrence2259/1

// class Solution {
//   public:
//     int first(vector<int>& arr, int target){
//         int n=arr.size();
//         int s=0;
//         int e=n-1;
//         int first=-1;
//         while(s<=e){
//             int mid=s+(e-s)/2;
//             if(arr[mid]==target){
//                 first=mid;
//                 e=mid-1;
//             }else if(target>arr[mid]) s=mid+1;
//             else e=mid-1;
//         }
//         return first;
//     }
    
//     int second(vector<int>& arr, int target){
//         int n=arr.size();
//         int s=0;
//         int e=n-1;
//         int second=-1;
//         while(s<=e){
//             int mid=s+(e-s)/2;
//             if(arr[mid]==target){
//                 second=mid;
//                 s=mid+1;
//             }else if(target>arr[mid]) s=mid+1;
//             else e=mid-1;
//         }
//         return second;
//     }
    
//     int countFreq(vector<int>& arr, int target) {
//         // code here
//         // int n=arr.size();
//         // int count=0;
//         // for(int i=0;i<n;i++){
//         //     if(arr[i]==target){
//         //         count++;
//         //     }
//         // }
//         // return count;
//          int f = first(arr, target);
//          if (f == -1) return 0;
//          return second(arr, target) - f + 1;

//     }
// };
