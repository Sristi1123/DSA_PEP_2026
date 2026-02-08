// https://www.geeksforgeeks.org/problems/pair-in-array-whose-sum-is-closest-to-x1124/1

// class Solution {
//   public:
//     vector<int> sumClosest(vector<int>& arr, int target) {
//         // code here
//         int n=arr.size();
//         if(n==1) return {};
//         sort(arr.begin(),arr.end());
//         int i=0;
//         int j=n-1;
//         int minDiff=INT_MAX;
//         int sum=0;
        
//         vector<int> ans;
//         while(i<j){
//             sum=arr[i]+arr[j];
//             int diff=abs(sum-target);
//             if(diff<minDiff){
//                 minDiff=diff;
//                 ans={arr[i],arr[j]};
//             }
//             else if(sum>target){
//                 j--;
//             }else{
//                 i++;
//             }
//         }
//         return ans;
//     }
// };