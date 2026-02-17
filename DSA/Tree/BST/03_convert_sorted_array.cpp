// https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/

// class Solution {
// public:
//     TreeNode* helper(vector<int>& nums,int start, int end){
//         int n=nums.size();
//         int mid=start+(end-start)/2;
//         if(start>end) return NULL;
//         TreeNode* x=new TreeNode(nums[mid]);
//         x->left=helper(nums,start, mid-1);
//         x->right=helper(nums,mid+1,end);
//         return x;
//     }
//     TreeNode* sortedArrayToBST(vector<int>& nums) {
//         //  recursively build the left subtree and right subtree
//         int start=0;
//         int end=nums.size()-1;
//         return helper(nums,start,end);
//     }
// };