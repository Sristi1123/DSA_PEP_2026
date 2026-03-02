// int firstOcc(vector<int> &arr, int x){
//     int n=arr.size();
//     int start=0;
//     int end=n-1;
//     int res=-1;
//     while(start<=end){
//         int mid=start+(end-start)/2;
//         if(arr[mid]==x){
//             res=mid;
//             end=mid-1;
//         }
//         else if(arr[mid]>x){
//             end=mid-1;
//         }else start=mid+1;
//     }
//     return res;
// }
// int secondOcc(vector<int> &arr, int x){
//     int n=arr.size();
//     int start=0;
//     int end=n-1;
//     int res=-1;
//     while(start<=end){
//         int mid=start+(end-start)/2;
//         if(arr[mid]==x){
//             res=mid;
//             start=mid+1;
//         }else if(arr[mid]>x){
//             end=mid-1;
//         }else start=mid+1;
//     }
//     return res;
// }
// vector<int> findCipherRestaurant(vector<int>& arr, int x) {
//     // Your implementation here
//     int n=arr.size();
//     return {firstOcc(arr,x),secondOcc(arr,x)};
// }