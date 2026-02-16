// https://www.geeksforgeeks.org/problems/left-view-of-binary-tree/1

// class Solution {
//   public:
//     vector<int> leftView(Node *root) {
//         // code here
//         vector<int> ans;
//         if(root==NULL) return ans;
//         queue<Node*> q;
//         q.push(root);
//         while(!q.empty()){
//             int levelsize=q.size();
//             int lastVal=0;
//             for(int i=0;i<levelsize;i++){
//                 Node* topVal=q.front();
//                 q.pop();
//                 if(i==0){
//                     ans.push_back(topVal->data);
//                 }
//                 if(topVal->left){
//                     q.push(topVal->left);
//                 }
//                 if(topVal->right){
//                     q.push(topVal->right);
//                 }
//             }
//         }
//         return ans;
//     }
// };