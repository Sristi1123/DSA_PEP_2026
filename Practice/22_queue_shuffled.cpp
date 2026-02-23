// queue<int> reverseLastK(queue<int> q, int k) {
//     // add your code here
//     int n=q.size();
//     if(k>n) return q;
//     for(int i=0;i<n-k;i++){
//         q.push(q.front());
//         q.pop();
//     }
//     stack<int> st;
//     for(int i=0;i<k;i++){
//         st.push(q.front());
//         q.pop();
//     }
//     while(!st.empty()){
//         q.push(st.top());
//         st.pop();
//     }
//     return q;
// }