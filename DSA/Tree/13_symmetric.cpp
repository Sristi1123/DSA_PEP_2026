// https://leetcode.com/problems/symmetric-tree/

// class Solution {
// public:
//     bool half(TreeNode* p, TreeNode* q){
//         if(p==NULL && q==NULL) return true;
//         if(p==NULL || q==NULL) return false;
//         if(p->val!=q->val){
//             return false;
//         }
//         return half(p->left,q->right) && half(p->right, q->left);
//     }
//     bool isSymmetric(TreeNode* root) {
//         if(root==NULL) return true;
//         return half(root->left, root->right);
//     }
// };