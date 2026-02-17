// https://leetcode.com/problems/insert-into-a-binary-search-tree/

// class Solution {
// public:
//     TreeNode* insertIntoBST(TreeNode* root, int val) {
//         TreeNode* node=new TreeNode(val);
//         if(root==NULL){
//             return node;
//         }
//         if(val>root->val){
//             root->right=insertIntoBST(root->right,val);
//         }else{
//             root->left=insertIntoBST(root->left,val);
//         }
//         return root;
//     }
// };