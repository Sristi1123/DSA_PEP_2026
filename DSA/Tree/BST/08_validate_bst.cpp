// https://leetcode.com/problems/validate-binary-search-tree/

// class Solution {
// public:
//     //  Approach 1-> using inorder -> write by your own
//     //  Approach 2-> using range 
//     bool validate(TreeNode* root,long long min, long long max){
//         if(root==NULL){
//             return true;
//         }
//         if(root->val <=min||root->val>=max) return false;
        
//         return (validate(root->left,min,root->val) && validate(root->right,root->val,max));
//     }
//     bool isValidBST(TreeNode* root) {
//         long long min=LONG_MIN;
//         long long max=LONG_MAX;
//         return validate(root, min, max);
//     }
// };