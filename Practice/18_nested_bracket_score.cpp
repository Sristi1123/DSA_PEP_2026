// int scoreBrackets(const string& s) {
//     // add your code here
//     stack<int> st;
//     int sum=0;
//     int depth=0;
//     for(int i=0;i<s.size();i++){
//         if(s[i]=='('){
//             depth++;
//         }
//         else{
//             depth--;
//             if(s[i-1]=='('){
//                 sum+=(1<<depth);
//             }
//         }
//     }
//     return sum;
// }