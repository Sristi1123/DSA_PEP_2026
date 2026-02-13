// https://leetcode.com/problems/binary-tree-preorder-traversal/

// class Solution {
// public:
//     void Traversal(TreeNode* root, vector<int> &ans){
//         if(root==nullptr) return;
//         ans.push_back(root->val);
//         Traversal(root->left,ans);
//         Traversal(root->right,ans);
//     }
//     vector<int> preorderTraversal(TreeNode* root) {
//         vector<int> ans;
//         Traversal(root,ans);
//         return ans;
//     }
// };