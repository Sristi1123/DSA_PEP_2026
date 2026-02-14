// https://leetcode.com/problems/binary-tree-postorder-traversal/

// class Solution {
// public:
//     void Traversal(TreeNode* root, vector<int> &ans){
//         if(root==nullptr) return;
//         Traversal(root->left,ans);
//         Traversal(root->right,ans);
//         ans.push_back(root->val);
//     }
//     vector<int> postorderTraversal(TreeNode* root) {
//         vector<int> ans;
//         Traversal(root,ans);
//         return ans;
//     }
// };