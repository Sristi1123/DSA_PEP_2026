// https://www.geeksforgeeks.org/problems/sum-of-binary-tree/1

// class Solution {
//   public:
//     int sumBT(Node* root) {
//         // code here
//         if(root==NULL){
//             return 0;
//         }
//         int sum=root->data;
//         sum+=sumBT(root->left);
//         sum+=sumBT(root->right);
//         return sum;
//     }
// };