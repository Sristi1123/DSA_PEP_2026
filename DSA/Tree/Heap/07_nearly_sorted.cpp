// https://www.geeksforgeeks.org/problems/nearly-sorted-1587115620/1


// class Solution {
//   public:
//     void nearlySorted(vector<int>& arr, int k) {
//         // code here
//         priority_queue<int, vector<int>, greater<int>> minHeap;
//         int n=arr.size();
//         for(int i=0;i<k+1;i++){
//             minHeap.push(arr[i]);
//         }
//         int idx=0;
//         for(int i=k+1;i<n;i++){
//             arr[idx++]=minHeap.top();
//             minHeap.pop();
//             minHeap.push(arr[i]);
//         }
//         while(!minHeap.empty()){
//             arr[idx++]=minHeap.top();
//             minHeap.pop();
//         }
//     }
// };