// int largestNo(vector<int> &cookies){
//     int lar=INT_MIN;
//     int n=cookies.size();
//     for(int i=0;i<n;i++){
//         if(cookies[i]>lar){
//             lar=cookies[i];
//         }
//     }
//     return lar;
// }
// long long cal(vector<int> & cookies,int speed){
//     long long total=0;
//     for(int i=0;i<cookies.size();i++){
//         total+=(cookies[i]+speed-1)/speed;
//     }
//     return total;
// }
// int minCollectionSpeed(vector<int>& cookies, int h) {
//     // Add your code here
//     int n=cookies.size();
//     int start=1;
//     int end=largestNo(cookies);
//     int ans=end;
//     while(start<=end){
//         int mid=start+(end-start)/2;
//         long long t=cal(cookies,mid);
//         if(t<=h){
//             ans=mid;
//             end=mid-1;
//         }
//         else{
//             start=mid+1;
//         }
//     }
//     return ans;
// }