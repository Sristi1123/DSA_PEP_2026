// https://www.geeksforgeeks.org/problems/interleave-the-first-half-of-the-queue-with-second-half/1

// optimized approach -->

// class Solution {
//   public:
//     // 11 12 13 14 15 16 17 18 19 20
//     void rearrangeQueue(queue<int> &q) {
//         stack<int> st;
//         int n=q.size()/2;
        
//         // push first half elements into the stack
//         // queue: 16 17 18 19 20 || stack: 15 14 13 12 11
//         for(int i=0;i<n;i++){
//             st.push(q.front());
//             q.pop();
//         }
//         // enqueue back the stack elements
//         //  queue: 16 17 18 19 20 15 14 13 12 11
//         while(!st.empty()){
//             q.push(st.top());
//             st.pop();
//         }
        
//         // dequeue the first half elements of queue and enqueue them back
//         // queue: 15 14 13 12 11 16 17 18 19 20 
//         for(int i=0;i<n;i++){
//             q.push(q.front());
//             q.pop();
//         }
//         // again push the first half elemenst in the stack
//         // queue: 16 17 18 19 20 || stack: 11 12 13 14 15
//         for(int i=0;i<n;i++){
//             st.push(q.front());
//             q.pop();
//         }
//         while(!st.empty()){
//             q.push(st.top());
//             st.pop();
//             q.push(q.front());
//             q.pop();
//         }
//     }
// };

// Approach 2+3 -->

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