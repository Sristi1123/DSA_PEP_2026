// https://leetcode.com/problems/minimum-depth-of-binary-tree/?envType=problem-list-v2&envId=tree

// class Solution {
// public:
//     int minDepth(TreeNode* root) {
//         if(root==NULL){
//             return 0;
//         }
//         int x=minDepth(root->left);
//         int y=minDepth(root->right);
//         int z=min(x,y)+1;
//         if(x==0){
//             return y+1;
//         }else if(y==0){
//             return x+1;
//         }
//         return z;
//     }
// };