// long long timeRequiredToBuyTickets(vector<int>& v, int k) {
//     // add your code here
//     long long time=0;
//     for(int i=0;i<v.size();i++){
//         if(i<=k){
//             time+=min(v[i],v[k]);
//         }else{
//             time+=min(v[i],v[k]-1);
//         }
//     }
//     return time;
// }
