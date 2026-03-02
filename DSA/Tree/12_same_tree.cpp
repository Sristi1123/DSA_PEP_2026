// https://leetcode.com/problems/same-tree/description/

// class Solution {
// public:
//     bool isSameTree(TreeNode* p, TreeNode* q) {
            //  p and q dono hi null ho 
        // p and q dono hi non null ho or values match ho jae 
//         if(p==nullptr && q==nullptr) return true;
//         if(p==nullptr || q==nullptr) return false;

//         if(p->val!=q->val){
//             return false;
//         }
//         return isSameTree(p->left,q->left)&&isSameTree(p->right,q->right);
//     }
// };