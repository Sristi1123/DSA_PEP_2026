// https://leetcode.com/problems/super-egg-drop/

// class Solution {
// public:
//     int t[101][10001];
//     int helper(int f,int e){
//         if(f==0||f==1) return f;
//         if(e==1) return f;
//         int mn=INT_MAX;
//         if(t[e][f]!=-1) return t[e][f];
//         int low=1;
//         int high=f;
//         while(low<=high){
//             int mid=(high+low)/2;
//             int breaks=helper(mid-1,e-1);
//             int not_break=helper(f-mid,e);
//             int temp=1+max(breaks,not_break);
//             mn=min(mn,temp);
//             if(breaks>not_break){
//                 high=mid-1;
//             }else{
//                 low=mid+1;
//             }
//         }
//         return t[e][f]=mn;
//     }
//     int superEggDrop(int k, int n) {
//         memset(t,-1,sizeof(t));
//         return helper(n,k);
//     }
// };