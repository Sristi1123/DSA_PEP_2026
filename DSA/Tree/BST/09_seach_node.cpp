// https://leetcode.com/problems/search-in-a-binary-search-tree/description/

// class Solution {
//   public:
//     bool search(Node* root, int key) {
//         // code here
//         if(root==NULL) return false;
//         if(root->data==key) return true;
//         if(key>root->data){
//             return search(root->right,key);
//         }
//         else{
//             return search(root->left,key);
//         }
//         return false;
//     }
// };