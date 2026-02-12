// int gcd(int l1,int l2){
//     int res=min(l1,l2);
//     while(res>1){
//         if(l1%res==0 && l2%res==0){
//             break;
//         }
//         res--;
//     }
//     return res;
// }
// string solve(const string &str1, const string &str2) {
//     // add your code here
//     string res="";
//     string em="";
//     int l1=str1.length();
//     int l2=str2.length();
//     int x=gcd(l1,l2);
//     for(int i=0;i<x;i++){
//         res+=str1[i];
//     }
//     return res;
// }