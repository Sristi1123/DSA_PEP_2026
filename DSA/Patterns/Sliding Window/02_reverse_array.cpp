//  https://www.geeksforgeeks.org/problems/reverse-array-in-groups0255/1

//time complexity ->n/k*k =>n

// class Solution {
//   public:
//     void reverseInGroups(vector<int> &arr, int k) {      //time complexity ->n/k
//         // code here
//         int n=arr.size();
//         for(int i=0;i<n;i+=k){
//             int start=i;
//             int end=min(i+k-1,n-1);
//             while(start<end){                        //time complexity ->k
//                 swap(arr[start],arr[end]);
//                 start++;
//                 end--;
//             }
//         }
//     }
// };
