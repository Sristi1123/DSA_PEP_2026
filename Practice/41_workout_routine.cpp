
// map<pair<int,int>,int> memo;
// int solve(int i, vector <int> & calories,int tar){
//     if(tar==0) return 1;
//     if(i>=calories.size()||tar<0) return 0;

//     if(memo.count({i,tar})) return memo[{i,tar}];

//     int take=solve(i,calories,tar-calories[i]);
//     int skip=solve(i+1,calories,tar);

//     return memo[{i,tar}]=take+skip;
// }
// int countWorkoutRoutines(vector<int>& calories, int target) {
//     // add your code here
//     memo.clear();
//     return solve(0,calories,target);
// }