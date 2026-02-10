// https://www.geeksforgeeks.org/problems/queue-reversal/1

// class Solution {
//   public:
//     void reverseQueue(queue<int> &q) {
//         // code here

//         if(q.empty()) return;
//         int temp=q.front();
//         q.pop();
        
//         reverseQueue(q);
//         q.push(temp);


//  Approach->2
//         // stack<int> st;
//         // while(!q.empty()){
//         //     st.push(q.front());
//         //     q.pop();
//         // }
//         // while(!st.empty()){
//         //     q.push(st.top());
//         //     st.pop();
//         // }
        
//     }
// };