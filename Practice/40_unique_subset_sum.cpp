// int solve(int i, vector<int> & candidates, int tar){
//     if(tar==0) return 1;
//     if(i>=candidates.size()||tar<0) return 0;

//     int count=0;
//     for(int j=i;j<candidates.size();j++){
//         if(j>i && candidates[j]==candidates[j-1]) continue;

//         if(candidates[j]>tar) break;
//         count+=solve(j+1,candidates,tar-candidates[j]);
//     }
//     return count;
// }
// int countUniqueCombinations(vector<int>& candidates, int target) {
//     // add your code here
//     int n=candidates.size();
//     sort(candidates.begin(),candidates.end());
//     return solve(0,candidates,target);
// }