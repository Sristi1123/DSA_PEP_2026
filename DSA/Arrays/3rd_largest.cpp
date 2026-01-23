// GFG problem: https://www.geeksforgeeks.org/problems/third-largest-element/1
// Leetcode Problem: https://leetcode.com/problems/max-consecutive-ones/submissions/1894176714/

// class Solution {
// public:
//     int findMaxConsecutiveOnes(vector<int>& nums) {
        // int ones=0;
        // int two=0;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==1){
        //         ones++;
        //     }else{
        //         ones=0;
        //     }
        //     two=max(ones,two);
        // }return two;


//         int a=0;
//         int b=0;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]==1){
//                 a++;
//             }else{
//                 a=0;
//             }
//             b=max(a,b);
//         }
//         return b;
//     }
// };