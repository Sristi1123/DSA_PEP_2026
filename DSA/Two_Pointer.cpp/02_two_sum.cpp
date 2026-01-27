// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& numbers, int target) {
//         int n=numbers.size();
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         int c=numbers[i]+numbers[j];
        //         if(c==target){
        //             return {i+1,j+1};
        //         }
        //     }
        // }                                //time complexity is O(n^2)
        // return {-1,-1};

//         int i=0;
//         int j=n-1;
//         while(i<j){
//              //time complexity is O(log n)
//             int sum=numbers[i]+numbers[j];      
//             if(sum==target) return {i+1,j+1};
//             else if(sum<target) i++;
//             else j--;
//         }
//         return {-1,-1};
//     }
// };