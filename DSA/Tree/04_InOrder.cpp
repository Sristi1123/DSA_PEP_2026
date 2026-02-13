// https://leetcode.com/problems/binary-tree-inorder-traversal/

// class Solution {
// public:
//     void Traversal(TreeNode* root, vector<int> &ans){
//         if(root==nullptr) return;
//         Traversal(root->left, ans);
//         ans.push_back(root->val);
//         Traversal(root->right,ans);
//     }
//     vector<int> inorderTraversal(TreeNode* root) {
//        vector<int> ans;
//        Traversal(root,ans);
//        return ans;
//     }
// };