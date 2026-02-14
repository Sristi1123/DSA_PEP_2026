//  https://leetcode.com/problems/koko-eating-bananas/description/

// class Solution {
// public:
//     int largestno(vector<int>& piles){
//         int largest=INT_MIN;
//         for(int i=0;i<piles.size();i++){
//             if(piles[i]>largest){
//                 largest=piles[i];
//             }
//         }
//         return largest;
//     }
//     long long calculatehours(vector<int>& piles, int k){
//         int n=piles.size();
//         long long totalhours=0;
//         for(int i=0;i<n;i++){
//             totalhours+=ceil(double(piles[i])/double(k));
//         }
//         return totalhours;
//     }
//     int minEatingSpeed(vector<int>& piles, int h) {
//         int n=piles.size();
//         int start=1;
//         int end=largestno(piles);
//         int ans=0;
//         while(start<=end){
//             int mid=start+(end-start)/2;
//             long long totalhours= calculatehours(piles, mid);
//             if(totalhours<=h){
//                 ans=mid;
//                 end=mid-1;
//             }else{
//                 start=mid+1;
//             }
//         }
//         return ans;
//     }
// };