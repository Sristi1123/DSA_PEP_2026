// int minSubArrayLen(int target, vector<int>& nums) {
//     // add your code here    
//     int n=nums.size();
//     int left=0;
//     int ans=INT_MAX;
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=nums[i];
//         while(sum>=target){
//             int pos=i-left+1;
//             ans=min(ans,pos);
//             sum-=nums[left];
//             left++;
//         }
//     }
//     if(ans==INT_MAX){
//         return 0;
//     }
//     return ans;
// }