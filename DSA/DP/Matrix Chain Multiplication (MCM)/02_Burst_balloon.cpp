// https://leetcode.com/problems/burst-balloons/description/

// class Solution {
// public:
//     int t[301][301];
//     int solver(vector<int>& nums, int i,int j){
//         if(i>j) return 0;
//         if(t[i][j]!=-1) return t[i][j];
//         int a=INT_MIN;
//         for(int k=i;k<=j;k++){
//             int temp=solver(nums,i,k-1)+solver(nums,k+1,j)+(nums[i-1]*nums[k]*nums[j+1]);
//             if(temp>a){
//                 a=temp;
//             }
//         }
//         return t[i][j]=a;
//     }
//     int maxCoins(vector<int>& nums) {
//         int n=nums.size();
//         nums.insert(nums.begin(), 1);
//         nums.push_back(1);
//         memset(t,-1,sizeof(t));
//         return solver(nums,1,n);
//     }
// };