// input ->9, 25 
//  output->3

// long long countPerfectSquaresInRange(long long L, long long R) {
//     // // add your code here
//     int start=1;
//     int end=sqrt(R);
//     long long x=0;
//     while(start<=end){
//         int mid=start+(end-start)/2;
//         long long square=1LL*mid*mid;
//         if(square<=R){
//             x=mid;
//             start=mid+1;
//         }else {
//             end=mid-1;
//         }
//     }
//     int n=x;
//     int s=1;
//     int e=sqrt(L);
//     long long y=0;
//     while(s<=e){
//         int mid=s+(e-s)/2;
//         long long square=1LL*mid*mid;
//         if(square<L){
//             y=mid;
//             s=mid+1;
//         }else {
//             e=mid-1;
//         }
//     }
//     int m=y;
//     return (n-m);

//     // long long x=sqrt(L);
//     // long long y=sqrt(R);
//     // return (y-x+1);
// }

