// https://www.geeksforgeeks.org/problems/is-binary-tree-heap/1

// class Solution {
//   public:
//     int countNode(Node* root){
//         if(root==nullptr) return 0;
//         return 1+countNode(root->left)+countNode(root->right);
//     }
//     bool isCBT(Node* root,int idx, int count){
//        if(root==nullptr) return true;
//        if(idx>=count) return false;
//        else{
//            bool left=isCBT(root->left,2*idx+1,count);
//            bool right=isCBT(root->right,2*idx+2,count);
//            return left && right;
//        }
//     }
//     bool isMaxHeap(Node* root){
//         if(root->left==nullptr && root->right==nullptr) return true;
//         if(root->right==nullptr) return (root->data > root->left->data);
//         else{
//             bool left=isMaxHeap(root->left);
//             bool right=isMaxHeap(root->right);
//             return (left && right && (root->data > root->left-> data && root->data > root->right->data));
//         }
//     }
//     bool isHeap(Node* tree) {
//         // code here
//         int idx=0;
//         int count=countNode(tree);
//         if(isCBT(tree,idx,count)  && isMaxHeap(tree)){
//             return true;
//         }    
//         return false;
//     }
// };