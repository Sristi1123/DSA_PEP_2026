// https://leetcode.com/problems/binary-tree-right-side-view/

// class Solution {
// public:
//     vector<int> rightSideView(TreeNode* root) {
//         vector<int> ans;
//         if(root==NULL) return ans;
//         queue<TreeNode*> q;
//         q.push(root);
//         while(!q.empty()){
//             int levelsize=q.size();
//             int lastVal=0;
//             for(int i=0;i<levelsize;i++){
//                 TreeNode* topVal=q.front();
//                 q.pop();
//                 lastVal=topVal->val;
//                 if(topVal->left){
//                     q.push(topVal->left);
//                 }
//                 if(topVal->right){
//                     q.push(topVal->right);
//                 }
//             }
//             ans.push_back(lastVal);
//         }
//         return ans;
//     }
// };