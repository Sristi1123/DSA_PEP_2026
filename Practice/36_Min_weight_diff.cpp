// map<pair<int,int>,int> memo;
// int solve(int i, vector<int> &nums, int sum){
//     if(i==nums.size()) return abs(sum);

//     if(memo.count({i,sum})) return memo[{i,sum}];

//     int add=solve(i+1,nums,sum+nums[i]);
//     int s=solve(i+1,nums,sum-nums[i]);
//     return memo[{i,sum}]=min(add,s);
// }
// int minRemainingWeight(vector<int>& nums) {
//     // add your code here
//     memo.clear();
//     return solve(0,nums,0);
// }