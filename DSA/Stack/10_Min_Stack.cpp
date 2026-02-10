// https://leetcode.com/problems/min-stack/

// class MinStack {
// public:
//     stack<int> mainStack;
//     stack<int> minStack;
//     MinStack() {
        
//     }
    
//     void push(int val) {
//         mainStack.push(val);

//         if(minStack.empty()||val<=minStack.top()){
//             minStack.push(val);
//         }else{
//             minStack.push(minStack.top());
//         }
//     }
    
//     void pop() {
//         minStack.pop();
//         mainStack.pop();
//     }
    
//     int top() {
//         return mainStack.top();
//     }
    
//     int getMin() {
//         return minStack.top();
//     }
// };
