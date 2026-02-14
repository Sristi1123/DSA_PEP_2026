// https://leetcode.com/problems/count-complete-tree-nodes/
// https://www.geeksforgeeks.org/problems/count-number-of-nodes-in-a-binary-tree/1

// class Solution {
// public:
//     int countNodes(TreeNode* root) {
//         if(root==NULL) return 0;
//         int x=countNodes(root->left);
//         int y=countNodes(root->right);
//         return x+y+1;
//     }
// };