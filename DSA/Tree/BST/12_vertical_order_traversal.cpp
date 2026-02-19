// https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/


// class Solution {
// public:
//     vector<vector<int>> verticalTraversal(TreeNode* root) {
//         vector<vector<int>> res;
//         if(root==NULL) return res;

//         // outer map-> for horizontal distance (to automatically sort the hd)-> left to right
//         // inner map-> for level(sort level->top to bottom)
//         map<int,map<int,multiset<int>>> nodes;

//         // each element in queue stores -> TreeNode* -> the curr node, int hd, int depth
//         queue<pair<TreeNode*,pair<int,int>>>q;

//         q.push(make_pair(root,make_pair(0,0)));

//         while(!q.empty()){
//             pair<TreeNode*,pair<int,int>> temp=q.front();
//             q.pop();

//             TreeNode* node=temp.first;
//             int hd=temp.second.first;
//             int level=temp.second.second;

//             nodes[hd][level].insert(node->val);

//             // if left exist -> hd will -1 and level will be +1
//             if(node->left){
//                 q.push(make_pair(node->left,make_pair(hd-1,level+1)));
//             }
//             if(node->right){
//                 // if right exist -> hd will +1 and level will be +1
//                 q.push(make_pair(node->right,make_pair(hd+1,level+1)));
//             }
//         }
//         for(auto &it: nodes){
//             vector<int> ans;
//             for(auto &levelPair:it.second){
//                 for(auto &values: levelPair.second){
//                     ans.push_back(values);
//                 }
//             }
//             res.push_back(ans);
//         }
//         return res;
//     }
// };