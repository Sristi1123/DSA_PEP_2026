//https://leetcode.com/problems/squares-of-a-sorted-array/

// class Solution {
// public:
//     vector<int> sortedSquares(vector<int>& nums) {
//         int n=nums.size();
//         vector<int> ans(n);
//         // for(int i=0;i<n;i++){
//         //     ans[i]=nums[i]*nums[i];
//         // }
//         // sort(ans.begin(),ans.end());
//         // return ans;
//         int left=0;
//         int right=n-1;
//         int pos=n-1;
//         while(left<=right){
//             if(abs(nums[left])>abs(nums[right])){
//                 ans[pos]=nums[left]*nums[left];
//                 left++;
//             }else {
//                 ans[pos]=nums[right]*nums[right];
//                 right--;
//             }
//             pos--;
//         }
//         return ans;
//     }
// };