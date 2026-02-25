// vector<int> zigZagTraversal(TreeNode* root) {
//     // add your code here
//     vector<int> ans;
//     int count=0;
//     if(root==NULL) return ans;
//     queue<TreeNode*> q;
//     q.push(root);
//     while(!q.empty()){
//         vector<int>le;
//         int size=q.size();
//         for(int i=0;i<size;i++){
//             TreeNode* topVal=q.front();
//             q.pop();
//             le.push_back(topVal->val);
//             if(topVal->left){
//                 q.push(topVal->left);
//             }
//             if(topVal->right){
//                 q.push(topVal->right);
//             }
//         }
//         if(count%2!=0){
//             reverse(le.begin(),le.end());
//         }
//         for(int x: le){
//             ans.push_back(x);
//         }
//         count++;
//     }
//     return ans;
// }