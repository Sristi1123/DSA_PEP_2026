// https://leetcode.com/problems/maximum-depth-of-binary-tree/?envType=problem-list-v2&envId=tree

// class Solution {
// public:
//     int maxDepth(TreeNode* root) {
//         if(root==NULL){
//             return 0;
//         }
//         int x=maxDepth(root->left);
//         int y=maxDepth(root->right);
//         int z=max(x,y)+1;
//         return z;
//     }
// };