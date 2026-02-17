// https://leetcode.com/problems/minimum-distance-between-bst-nodes/

// class Solution {
// public:
//     int a=INT_MAX;
//     int b=-1;
//     int minDiffInBST(TreeNode* root) {
//         if(root==NULL){
//             return a;
//         }
//         minDiffInBST(root->left);
//         if(b!=-1){
//             int diff=root->val-b;
//             if(diff<a){
//                 a=diff;
//             }
//         }
//         b=root->val;
//         minDiffInBST(root->right);
//         return a;
//     }
// };