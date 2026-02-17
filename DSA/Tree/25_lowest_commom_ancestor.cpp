// https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/
// https://www.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-binary-tree/1

// class Solution {
// public:
//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//         if(root==NULL) return NULL;
//         if(root==p|| root==q) return root;
//         TreeNode* left=lowestCommonAncestor(root->left,p,q);
//         TreeNode* right=lowestCommonAncestor(root->right,p,q);

//         if(left && right){
//             return root;
//         }
//         else if(left!=NULL) return left;
//         else return right;
//     }
// };