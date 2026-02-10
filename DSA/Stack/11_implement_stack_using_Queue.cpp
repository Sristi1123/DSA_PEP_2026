// https://leetcode.com/problems/implement-stack-using-queues/

// class MyStack {
// public:
//     queue<int>q1,q2;
//     MyStack() {
        
//     }
    
//     void push(int x) {
//         // enqueue in q2
//         q2.push(x);
//         // take all elements from q1, pop them and and push in q2
//         while(!q1.empty()){
//             q2.push(q1.front());
//             q1.pop();
//         }
//         swap(q1,q2);
//     }
    
//     int pop() {
//         int topVal=q1.front();
//         q1.pop();
//         return topVal;
//     }
    
//     int top() {
//         return q1.front();
//     }
    
//     bool empty() {
//         if(q1.empty()){
//             return true;
//         }
//         return false;
//     }
// };
