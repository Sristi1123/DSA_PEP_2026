// https://www.geeksforgeeks.org/problems/interleave-the-first-half-of-the-queue-with-second-half/1

// class Solution {
//   public:
//     void reverse(queue<int> &q){
//         if(q.empty()){
//             return;
//         }
//         int x=q.front();
//         q.pop();
//         reverse(q);
//         q.push(x);
//     }
//     void rearrangeQueue(queue<int> &q) {
//         stack<int>st1;
//         stack<int>st2;
//         int x=q.size();
//         int n=x/2;
//         for(int i=0;i<n;i++){
//             st1.push(q.front());
//             q.pop();
//         }
//         for(int i=n;i<x;i++){
//             st2.push(q.front());
//             q.pop();
//         }
//         while(!st2.empty() && !st1.empty()){
//             q.push(st2.top());
//             q.push(st1.top());
//             st2.pop();
//             st1.pop();
//         }
//         // stack<int>st3;
//         // for(int i=0;i<x;i++){
//         //     st3.push(q.front());
//         //     q.pop();
//         // }
//         // while(!st3.empty()){
//         //     q.push(st3.top());
//         //     st3.pop();
//         // }
//         reverse(q);
//     }
// };