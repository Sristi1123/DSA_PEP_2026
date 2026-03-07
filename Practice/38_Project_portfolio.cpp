// map<int,int> memo;
// int solve(int i,vector<int> &profits){
//     int n=profits.size();
//     if(i>=n) return 0;

//     if(memo.count(i)) return memo[i];
//     int t=profits[i]+solve(i+2,profits);
//     int s=solve(i+1,profits);
//     return memo[i]=max(t,s);
// }
// int maxProjectProfit(vector<int>& profits) {
//     // add your code here
//     int n=profits.size();
//     memo.clear();
//     return solve(0,profits);
// }