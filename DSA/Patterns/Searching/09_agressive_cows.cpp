// https://www.geeksforgeeks.org/problems/aggressive-cows/1

// class Solution {
//   public:
  
//     bool canPlaceCows(vector<int> &stalls, int k,int d){
//         int lastCow=stalls[0];
//         int countCows=1;
//         for(int i=1;i<stalls.size();i++){
//             int diff=stalls[i]-lastCow;
//             if(diff>=d){
//                 countCows++;
//                 lastCow=stalls[i];
//             }
            
//             if(countCows==k) return true;
//         }
//         return false;
//     }
    
//     int aggressiveCows(vector<int> &stalls, int k) {
//         // code here
//         sort(stalls.begin(),stalls.end());
        
//         int low=1;
//         int high = stalls.back() - stalls.front();
        
//         int ans=0;
//         while(low<=high){
//             int mid=low+(high-low)/2;
            
//             if(canPlaceCows(stalls,k,mid)){
//                 ans=mid;
//                 low=mid+1;
//             }else{
//                 high=mid-1;
//             }
//         }
//         return ans;
//     }
// };