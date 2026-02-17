// https://leetcode.com/problems/two-sum-iv-input-is-a-bst/description/

// class Solution {
// public:
//     vector<int> inorder(TreeNode* root, vector<int> &ans){
//         if(root==NULL){
//             return ans;
//         }
//         inorder(root->left, ans);
//         ans.push_back(root->val);
//         inorder(root->right, ans);
//         return ans;
//     }
//     bool findTarget(TreeNode* root, int k) {
//         vector<int> ans;
//         inorder(root, ans);
//         int start=0;
//         int end=ans.size()-1;
//         int sum=0;
//         while(start<end){
//             sum=ans[start]+ans[end];
//             if(sum==k){
//                 return true;
//             }
//             if(sum>k){
//                 end--;
//             }else{
//                 start++;
//             }
//         }
//         return false;
//     }
// };