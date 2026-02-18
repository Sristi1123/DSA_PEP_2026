//https://leetcode.com/problems/delete-node-in-a-bst/

// class Solution {
// public:
//     // step 1 -> find the node to be deleted by comparisons
//     // step 2 -> restructure its children while preserving BST order
//         // There can be 3 cases for deleting a node
//             // Case 1 -> No child (leaf node) -> this can be deleted directly
//             // Case 2 -> One Child -> replace yhe current node with its only child
//             // Case 3 -> Two Children -> to maintain the BST order, we can either choose inorder successor (smallest value RST)
//             //           or inorder predecessor (largest value in LST) and replace with current node

//     TreeNode* inorderSucc(TreeNode* node){
//         while(node->left!=NULL){
//             node=node->left;
//         }
//         return node;
//     }
//     TreeNode* deleteNode(TreeNode* root, int key) {
//         if(root==NULL) return NULL;

//         if(key<root->val){
//             root->left=deleteNode(root->left, key);
//         }
//         else if(key>root->val){
//             root->right=deleteNode(root->right,key);
//         }
//         else{
//             // Case 1: no left child
//                 // in this replace the node with its right child
//             if(root->left==NULL){
//                 TreeNode* temp=root->right;
//                 delete root;
//                 return temp;
//             }
//             // Case 2: no right child
//                 // in this replace the node with its left child
//             else if(root->right==NULL){
//                 TreeNode* temp=root->left;
//                 delete root;
//                 return temp;
//             }
//             // Case 3: both right and left child
//                 // find inorder successor
            
//             TreeNode* temp=inorderSucc(root->right);
//             // copy the min element value in the node which we were suppose to del 
//             root->val=temp->val;
//             // delete the successor from RST (as we have alredy copied the value)
//             root->right=deleteNode(root->right, temp->val);
//         }
//         return root;
//     }
// };