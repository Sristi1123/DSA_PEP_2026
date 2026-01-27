// // https://www.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1 ->time complexity is O(n^2)

// class Solution {
//   public:
//     bool hasTripletSum(vector<int> &arr, int target) {
//         // Code Here
//         int n=arr.size();
//         sort(arr.begin(),arr.end());          ->time complexity is O(nlog n)
        
//         for(int i=0;i<n-2;i++){
//             int j=i+1;
//             int k=n-1;
//             while(j<k){
//                 int x=arr[i]+arr[j]+arr[k];
//                 if(x==target){
//                     return true;
//                 }
//                 else if(x>target) k--;
//                 else j++;
//             } 
//         }
//         return false;
//     }
// };