// /* 
// struct TreeNode {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// };
// */
// void helper(TreeNode* root, int depth, int &maxdepth, int &sum){
//     if(root==NULL) return;
//     if(root->left==NULL && root->right==NULL){
//         if(depth>maxdepth){
//             maxdepth=depth;
//             sum=root->val;
//         }else if(depth==maxdepth){
//             sum+=root->val;
//         }
//     }
//     helper(root->left,depth+1,maxdepth,sum);
//     helper(root->right,depth+1,maxdepth,sum);
// }
// int deepestLeavesSum(TreeNode* root) {
//     // add your code here
//     int maxdepth=0;
//     int sum=0;
//     helper(root,0,maxdepth,sum);
//     return sum;
// }