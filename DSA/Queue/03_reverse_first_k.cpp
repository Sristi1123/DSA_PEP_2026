// https://www.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1

// class Solution {
//   public:
//     queue<int> reverseFirstK(queue<int> q, int k) {
//         // code here
//         stack<int> st;
//         int n=q.size();
//         if(k>n) return q;
//         for(int i=0;i<k;i++){
//             st.push(q.front());
//             q.pop();
//         }
//         for(int i=0;i<k;i++){
//             q.push(st.top());
//             st.pop();
//         }
//         for(int i=0;i<n-k;i++){
//             q.push(q.front());
//             q.pop();
//         }
//         return q;
//     }
// };