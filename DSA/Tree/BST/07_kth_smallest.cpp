// https://leetcode.com/problems/kth-smallest-element-in-a-bst/description/

// class Solution {
// public:
//     vector<int> inorder(TreeNode* root, vector<int> &ans){
//         if(root==NULL){
//             return ans;
//         }
//         inorder(root->left,ans);
//         ans.push_back(root->val);
//         inorder(root->right,ans);
//         return ans;
//     }
//     int kthSmallest(TreeNode* root, int k) {
//         vector<int> ans;
//         inorder(root, ans);
//         return ans[k-1];
//     }
// };