// GFG problem: https://www.geeksforgeeks.org/problems/third-largest-element/1

// class Solution {
//   public:
//     int thirdLargest(vector<int> &arr) {
//         // code here
//         int n=arr.size();
//         int first=-1;
//         int second=-1;
//         int third=-1;
//         for(int i=0;i<n;i++){
//             if(arr[i]>first){
//                 third=second;
//                 second=first;
//                 first=arr[i];
//             }
//             else if(arr[i]>second){
//                 third=second;
//                 second=arr[i];
//             }
//             else if(arr[i]>third){
//                 third=arr[i];
//             }
//         }
//         return third;
//     }
// };