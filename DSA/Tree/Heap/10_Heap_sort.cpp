// https://www.geeksforgeeks.org/problems/heap-sort/1

// // The functions should be written in a way that array become sorted
// // in increasing order when heapSort() is called.

// class Solution {
//   public:
//     // Function to sort an array using Heap Sort.
//     void heapify(vector<int> & arr,int i,int n){
//         int largest=i;
//         int left=2*i+1;
//         int right=2*i+2;
//         if(left<n&& arr[left]>arr[largest]){
//             largest=left;
//         }
//         if(right<n&&arr[right]>arr[largest]){
//             largest=right;
//         }
//         if(largest!=i){
//             swap(arr[i],arr[largest]);
//             heapify(arr,largest,n);
//         }
//     }
//     void heapSort(vector<int>& arr) {
//         // code here
//         int n=arr.size();
//         for(int i=n/2-1;i>=0;i--){
//             heapify(arr,i,n);
//         }
//         for(int i=n-1;i>=0;i--){
//             swap(arr[i],arr[0]);
//             heapify(arr,0,i);
//         }
//     }
// };