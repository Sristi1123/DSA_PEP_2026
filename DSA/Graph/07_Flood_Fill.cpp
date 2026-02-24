// https://leetcode.com/problems/flood-fill/

// class Solution {
// public:
//  --> here we used dfs method
//     void dfs(vector<vector<int>>& image,int row, int col, int original,int color){
//         int n=image.size();
//         int m=image[0].size();
//         if(row<0||row>=n||col<0||col>=m) return;
//         if(image[row][col]!=original) return;
//         image[row][col]=color;
//         // top
//         dfs(image,row-1,col,original,color);
//         // bottom
//         dfs(image,row+1,col,original,color);
//         // left
//         dfs(image,row,col-1,original,color);
//         // right
//         dfs(image,row,col+1,original,color);

//     }
//     vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
//         // min time/max time/ min space (as it traverse on every neighbour and increase our time so will we go ahead by BFS method as it will store all the neighbours in queue and in one time it will check for all the neighbours so in min time we can fill max colors)
        
//         int original=image[sr][sc];
//         if(original==color) return image;

//         dfs(image,sr,sc,original,color);
//         return image;
//     }
// };