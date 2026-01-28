// https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1

// class Solution {
//   public:
//     int maxSubarraySum(vector<int>& arr, int k) {
//         // code here
//         int n=arr.size();
//         // int maxsum=0;
//         // for(int i=0;i<n;i++){
//         //     int sum=0;
//         //     int start=i;
//         //     int end=min(i+k-1,n-1);
//         //     while(start<=end){
//         //         sum+=arr[start];
//         //         start++;
//         //     }
//         //     maxsum=max(maxsum,sum);
//         // }
//         // return maxsum;
        
        
//         int curr=0;
//         for(int i=0;i<k;i++){
//             curr+=arr[i];
//         }
//         int max=curr;
//         for(int i=k;i<n;i++){
//             curr=curr-arr[i-k]+arr[i];
//             if(curr>max){
//                 max=curr;
//             }
//         }
//         return max;
//     }
// };