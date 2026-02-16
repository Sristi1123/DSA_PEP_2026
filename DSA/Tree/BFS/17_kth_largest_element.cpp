// https://leetcode.com/problems/kth-largest-sum-in-a-binary-tree/

// class Solution {
// public:
//     long long kthLargestLevelSum(TreeNode* root, int k) {
//         vector<long long> sums;
//         if(root==NULL){
//             return -1;
//         }
//         queue<TreeNode*> q;
//         q.push(root);
//         long long sum=0;
//         while(!q.empty()){
//             int levelsize=q.size();
//             sum=0;
//             for(int i=0;i<levelsize;i++){
//                 TreeNode* topval=q.front();
//                 q.pop();
//                 sum+=topval->val;
//                 if(topval->left){
//                     q.push(topval->left);
//                 }
//                 if(topval->right){
//                     q.push(topval->right);
//                 }
//             }
//             sums.push_back(sum);
//         }
//         sort(sums.begin(),sums.end());
//         if(sums.size()<k) return -1;
//         long long ans=sums[sums.size()-k];
//         return ans;
//     }
// };