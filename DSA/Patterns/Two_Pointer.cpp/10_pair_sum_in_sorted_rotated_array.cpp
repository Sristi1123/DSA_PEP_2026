// https://www.geeksforgeeks.org/problems/pair-sum-in-a-sorted-and-rotated-array/1


// class Solution {
//   public:
//     bool pairInSortedRotated(vector<int>& arr, int target) {
        // code here
        // int n=arr.size();
        // int i=0;
        // int j=n-1;
        // while(i<n){
        //     if(arr[i]>target){
        //         i++;
        //     }else if(arr[j]>target){
        //         j--;
        //     }
        //     if(arr[i]+arr[j]==target){
        //         return true;
        //     }
        // }
        // return false;
        
        

        // correct method for sorted and circular array
//         int pivot=-1;
//         for(int i=0;i<n-1;i++){
//             if(arr[i]>arr[i+1]){
//                 pivot=i;
//                 break;
//             }
//         }
//         if(pivot==-1) pivot=n-1;
//         int low=(pivot+1)%n;     //if there is no pivot
//         int high=pivot;
//         while(high!=low){
//             int x=arr[low]+arr[high];
//             if(x==target){
//                 return true;
//             }else if(x>target){
//                 high=(high-1+n)%n;
//             }else{
//                 low=(low+1)%n;
//             }
//         }return false;
//     }
// };