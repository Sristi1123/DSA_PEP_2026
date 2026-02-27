// https://leetcode.com/problems/surrounded-regions/description/

// class Solution {
// public:
//     void dfs(vector<vector<char>>& board,int row, int col){
//         int n=board.size();
//         int m=board[0].size();
//         if(row<0 || row>n ||col<0 ||col>m|| board[row][col]!='O') return;

//         board[row][col]='#';

//         dfs(board,row-1,col);
//         dfs(board,row+1,col);
//         dfs(board,row,col-1);
//         dfs(board,row,col+1);
//     }
//     void helper(vector<vector<char>>& board,int row, int col){

//         int n=board.size();
//         int m=board[0].size();

//         if(board[row][col]=='O'){
//             board[row][col]='X';
//         }else if(board[row][col]=='#'){
//             board[row][col]='O';
//         }
//     }
//     void solve(vector<vector<char>>& board) {
//         int n=board.size();
//         int m=board[0].size();

//         for(int i=0;i<n;i++){
//             if(board[i][0] == 'O') dfs(board,i,0);
//             if(board[i][m-1] == 'O') dfs(board,i,m-1);
//         }

//         for(int j=0;j<m;j++){
//             if(board[0][j] == 'O') dfs(board,0,j);
//             if(board[n-1][j] == 'O') dfs(board,n-1,j);
//         }
        
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 helper(board,i,j);
//             }
//         }
//     }
// };