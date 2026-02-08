// https://leetcode.com/problems/power-of-two/

// class Solution {
// public:
//     bool isPowerOfTwo(int n) {
//         if(n<=0) return false;
//         //An int is 32 bits.
//         for(int i=0;i<31;i++){
//             int x=1<<i;
//             if(x==n){
//                 return true;
//             }
//         }
//         return false;
//     }
// };