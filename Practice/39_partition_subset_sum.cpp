// map<pair<int,int>,bool> memo;
// bool solve(int i, vector<int> &nums,int tar){
//     if(tar==0) return true;
//     if(i==nums.size()||tar<0) return false;

//     if(memo.count({i,tar})){
//         return memo[{i,tar}];
//     }
//     bool take=solve(i+1,nums,tar-nums[i]);
//     bool skip=solve(i+1,nums,tar);
//     return memo[{i,tar}]= take||skip;
// }
// bool canPartitionTreasure(vector<int>& nums) {
//     // Add your code here
//     memo.clear();
//     int total=0;
//     for(int x: nums) total+=x;

//     if(total%2!=0) return false;

//     return solve(0,nums,total/2);
// }