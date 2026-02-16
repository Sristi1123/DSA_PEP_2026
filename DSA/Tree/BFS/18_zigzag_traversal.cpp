// https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/

// class Solution {
// public:
//     vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
//         vector<vector<int>> res;
//         if(root==nullptr) return res;
//         queue<TreeNode*> q;
//         q.push(root);
//         int count=0;
//         while(!q.empty()){
//             vector<int> levelElements;
//             int levelsize=q.size();
//             for(int i=0;i<levelsize;i++){
//                 TreeNode* topVal=q.front();
//                 q.pop();
//                 levelElements.push_back(topVal->val);
//                 if(topVal->left){
//                     q.push(topVal->left);
//                 }
//                 if(topVal->right){
//                     q.push(topVal->right);
//                 }
//             }
//             if(count%2==0){
//                 res.push_back(levelElements);
//             }else{
//                 reverse(levelElements.begin(),levelElements.end());
//                 res.push_back(levelElements);
//             }
//             count++;
//         }
//         return res;
//     }
// };