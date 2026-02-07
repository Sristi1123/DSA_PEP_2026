// int findSmallest(vector<int>& gems) { 
//     // add your code here 
//     int n=gems.size();
//     int start=0;
//     int end=n-1;
//     while(start<end){
//         int mid=start+(end-start)/2;
//         if(gems[mid]>gems[end]){
//             start=mid+1;
//         }else{
//             end=mid;
//         }
//     }
//     return gems[start];

//     // int minn=gems[0];
//     // for(int i=0;i<n;i++){
//     //     if(gems[i]<minn){
//     //         minn=gems[i];
//     //     }
//     // }
//     // return minn;
// }