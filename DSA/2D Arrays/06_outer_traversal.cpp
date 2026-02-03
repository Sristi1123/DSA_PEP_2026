// https://www.geeksforgeeks.org/problems/boundary-traversal-of-matrix-1587115620/1


// class Solution {
//   public:
//     vector<int> boundaryTraversal(vector<vector<int>>& mat) {
//         vector<int> ans;
//         int row = mat.size();
//         int col = mat[0].size();
        
//         for(int j = 0; j < col; j++) {
//             ans.push_back(mat[0][j]);
//         }
//         for(int i = 1; i < row; i++) {
//             ans.push_back(mat[i][col - 1]);
//         }
//         if(row > 1) {
//             for(int j = col - 2; j >= 0; j--) {
//                 ans.push_back(mat[row - 1][j]);
//             }
//         }
//         if(col > 1) {
//             for(int i = row - 2; i > 0; i--) {
//                 ans.push_back(mat[i][0]);
//             }
//         }

//         return ans;
//     }
// };
