// https://leetcode.com/problems/binary-tree-level-order-traversal/

// class Solution {
// public:
//     vector<vector<int>> levelOrder(TreeNode* root) {
//         vector<vector<int>> ans;
//         if(root==nullptr) return ans;
        
//         queue<TreeNode*> q;
//         q.push(root);

//         while(!q.empty()){
//             vector<int>levelElements;
//             int levelsize=q.size();

//             for(int i=0;i<levelsize;i++){
//                 TreeNode* frontNode=q.front();
//                 q.pop();

//                 levelElements.push_back(frontNode->val);
//                 if(frontNode->left){
//                     q.push(frontNode->left);
//                 }
//                 if(frontNode->right){
//                     q.push(frontNode->right);
//                 }
//             }
//             ans.push_back(levelElements);
//         }
//         return ans;
//     }
// };
