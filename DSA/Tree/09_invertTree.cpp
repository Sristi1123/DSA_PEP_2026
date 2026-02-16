// https://leetcode.com/problems/invert-binary-tree/?envType=problem-list-v2&envId=tree

// class Solution {
// public:
//     TreeNode* invertTree(TreeNode* root) {
//         if(root==NULL){
//             return root;
//         }
//         TreeNode* x =root->left;
//         root->left=root->right;
//         root->right=x;
// 
//         invertTree(root->left);
//         invertTree(root->right);
//         return root;
//     }
// };