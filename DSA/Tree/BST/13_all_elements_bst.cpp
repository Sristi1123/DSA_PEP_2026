// https://leetcode.com/problems/all-elements-in-two-binary-search-trees/

// class Solution {
// public:
//     void inorder(TreeNode* root, vector<int> &ans){
//         if(root==NULL){
//             return;
//         }
//         inorder(root->left,ans);
//         ans.push_back(root->val);
//         inorder(root->right,ans);
//     }
//     vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
//         vector<int> ans;
//         // inorder(root1,ans);
//         // inorder(root2,ans);
//         // sort(ans.begin(),ans.end());
//         inorder(root1,ans);
//         vector<int> res;
//         inorder(root2,res);
//         vector<int> last;
//         for(int i=0;i<ans.size();i++){
//             last.push_back(ans[i]);
//         }
//         for(int i=0;i<res.size();i++){
//             last.push_back(res[i]);
//         }
//         sort(last.begin(),last.end());
//         return last;
//     }
// };