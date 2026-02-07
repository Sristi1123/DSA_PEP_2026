// int balancedTreasurePoint(vector<int>& arr) {
//     // add your code here
//     int n=arr.size();
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//     }
//     int leftSum=0;
//     for(int i=0;i<n;i++){
//         int rightSum = sum - leftSum - arr[i];
//         if (leftSum == rightSum) {
//             return i;
//         }
//         leftSum+=arr[i];
//     }
//     return -1;
// }
