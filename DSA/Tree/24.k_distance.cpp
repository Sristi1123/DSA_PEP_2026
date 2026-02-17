// https://www.geeksforgeeks.org/problems/k-distance-from-root/1

// class Solution {
//   public:
//     // function should print the nodes at k distance from root
//     vector<int> Kdistance(Node *root, int k) {
//         // Your code here
//         queue<Node*> q;
//         q.push(root);
//         int levelCount=0;
//         while(!q.empty()){
//             int levelSize=q.size();
//             vector<int> levelElements;
//             for(int i=0;i<levelSize;i++){
//                 Node* topVal=q.front();
//                 q.pop();
//                 levelElements.push_back(topVal->data);
//                 if(topVal->left){
//                     q.push(topVal->left);
//                 }
//                 if(topVal->right){
//                     q.push(topVal->right);
//                 }
//             }
//             if(levelCount==k){
//                 return levelElements;
//             }
//             levelCount++;
//         }
//         return {};
//     }
// };