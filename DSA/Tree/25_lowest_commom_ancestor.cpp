// https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/
// https://www.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-binary-tree/1

// class Solution {
// public:
//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//         if(root==NULL) return NULL;

        // agar root hi p ya q ho toh yahi ek ancestor ho sakta hai
//         if(root==p|| root==q) return root;
            
//         TreeNode* left=lowestCommonAncestor(root->left,p,q);
//         TreeNode* right=lowestCommonAncestor(root->right,p,q);

 // agar p ek side mein aur q doosri side mein mila toh current root hi LCA hoga
//         if(left && right){
//             return root;
//         }
// agar dono left subtree mein mile
//         else if(left!=NULL) return left;
//         else return right;
//     }
// };