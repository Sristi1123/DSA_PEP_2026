// https://leetcode.com/problems/search-in-a-binary-search-tree/

// class Solution {
// public:
//     TreeNode* searchBST(TreeNode* root, int val) {
//         if(root==NULL){
//             return root;
//         }
//         if(val>root->val){
//             return searchBST(root->right,val);
//         }else if(val<root->val){
//             return searchBST(root->left,val);
//         }else{
//             return root;
//         }
//     }
// };