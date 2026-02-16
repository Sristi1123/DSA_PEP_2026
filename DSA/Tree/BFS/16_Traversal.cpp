// class Solution {
// public:
//     void levelOrder(TreeNode* root) {
//         queue<TreeNode*> q;
//         q.push(root);
//         q.push(NULL);
//         while(!q.empty()){
//             TreeNode* frontNode=q.front();
//             q.pop();
//             if(frontNode!=NULL){
//                 cout<<frontNode->data<<" ";
//                 if(frontNode->left) q.push(frontNode->left);
//                 if(frontNode->right) q.push(frontNode->right);
//             }
//             else if(!q.empty()){
//                 q.push(NULL);
//             }
//         }
//     }
// };