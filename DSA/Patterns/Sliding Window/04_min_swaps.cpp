//  https://leetcode.com/problems/minimum-swaps-to-group-all-1s-together-ii/submissions/

// class Solution {
// public:
//     int minSwaps(vector<int>& nums) {
//         int  n=nums.size();
//         int count=0;
//         for(int i=0;i<n;i++){
//             if(nums[i]==1){
//                 count++;
//             }
//         }
//         int ones=0;
//         for(int i=0;i<count;i++){
//             if(nums[i]==1){
//                 ones++;
//             }
//         }
//         int maxones=ones;
//         for (int i=count;i<n+count;i++){
//             ones-=(nums[(i-count)%n]);
//             ones+=nums[(i)%n];
//             maxones=max(maxones,ones);
//         }
//         return count-maxones;
//     }
// };                 

// class Solution {
// public:
//     int minSwaps(vector<int>& nums) {
//         int n=nums.size();
//         int count=0;
//         for(int i=0;i<n;i++){
//             if(nums[i]==1){
//                 count++;
//             }
//         }
//          if(count <= 1) return 0;
//         int ones=0;
//         for(int i=0;i<count;i++){
//             if(nums[i]==1){
//                 ones++;
//             }
//         }
//         int maxones=ones;
//         for(int i=count;i<n;i++){
//             if (nums[i]==1) ones++;
//             if(nums[i-count]==1) ones--;
//             maxones=max(maxones,ones);
//         }
//         return count-maxones;

//         int n = nums.size();
//         int count = 0;
//         for(int i=0;i<n;i++){
//             if(nums[i]==1){
//                 count++;
//             }
//         }
//         if(count <= 1) return 0;
//         vector<int> arr = nums;
//         arr.insert(arr.end(), nums.begin(), nums.end());
    
//         int ones = 0;
//         for(int i = 0; i < count; i++) {
//             if(arr[i] == 1) ones++;
//         }
//         int maxOnes = ones;
//         for(int i = count; i < count + n; i++) {
//             if(arr[i] == 1) ones++;
//             if(arr[i - count] == 1) ones--;
//             maxOnes = max(maxOnes, ones);
//         }
//         return count - maxOnes;
//     }
// };
