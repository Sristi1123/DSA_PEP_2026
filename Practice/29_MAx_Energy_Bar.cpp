// int maxEnergyBars(vector<int>& arr, int k) {
//     // Your implementation here
//     int n=arr.size();
//     vector<int> ans;
//     int sum=0;
//     for(int i=0;i<k;i++){
//         sum+=arr[i];
//     }
//     ans.push_back(sum);
//     for(int i=k;i<n;i++){
//         sum=sum-arr[i-k]+arr[i];
//         ans.push_back(sum);
//     }
//     int res=ans[0];
//     for(int i=1;i<ans.size();i++){
//         if(ans[i]>res){
//             res=ans[i];
//         }
//     }
//     return res;
// }