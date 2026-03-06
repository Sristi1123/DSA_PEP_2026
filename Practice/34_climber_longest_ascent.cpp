// int longestClimbersJourney(vector<int>& nums) {
//     // Add your code here

// --> not working for all test cases 
//     // int n=nums.size();
//     // if(n==0) return 0;
//     // vector<int> ans(n,1);
//     // int res=1;
//     // for(int i=1;i<n;i++){
//     //     for(int j=0;j<i;j++){
//     //         if(nums[i]>nums[j]){
//     //             ans[i]=max(ans[i],ans[j]+1);
//     //         }
//     //     }
//     //     res=max(res,ans[i]);
//     // }
//     // return res;

// --> it works
//     vector<int> res;
//     for(int x:nums){
//         auto it=lower_bound(res.begin(),res.end(),x);
//         if(it==res.end()) res.push_back(x);
//         else *it=x;
//     }return res.size();
// }