// https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1

// #include <vector>
// #include <queue>
// using namespace std;

// class Solution {
//   public:
//     vector<int> firstNegInt(vector<int>& arr, int k) {
//         int n = arr.size();
//         queue<int> q;  
//         vector<int> res;
//         int i = 0;
//         int j = 0;
//         while (j < n) {
//             if (arr[j] < 0) {
//                 q.push(arr[j]);
//             }
//             if(j-i+1<k){
//                 j++;
//             }
//             else if(j-i+1==k){
//                 if (!q.empty()) {
//                     res.push_back(q.front());
//                 } else {
//                     res.push_back(0);
//                 }
//                 if (!q.empty() && arr[i] == q.front()) {
//                     q.pop();
//                 }
//                 i++;
//                 j++;
//             }
//         }
//         return res;
//     }
// };