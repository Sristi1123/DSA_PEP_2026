// https://leetcode.com/problems/boats-to-save-people/

// class Solution {
// public:
//     int numRescueBoats(vector<int>& people, int limit) {
//         int n=people.size();
//         sort(people.begin(),people.end());
//         int start=0;
//         int end=n-1;
//         int sum=0;
//         int count=0;
//         while(start<=end){
//             sum=people[start]+people[end];
//             if(sum<=limit){
//                 start++;
//             }
//             end--;
//             count++;
//         }
//         return count;
//     }
// };