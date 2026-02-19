
// int matrixBorderSum(vector<vector<int>>& grid) {
//     // add your code here
//     int sum=0;
//     int row=grid.size();
//     int col=grid[0].size();
//     for(int j=0;j<col;j++){
//         sum+=grid[0][j];
//     }
//     for(int i=1;i<row;i++){
//         sum+=grid[i][col-1];
//     }
//     if(row>1){
//         for(int j=col-2;j>=0;j--){
//             sum+=grid[row-1][j];
//         }
//     }
//     if(col>1){
//         for(int i=row-2;i>0;i--){
//             sum+=grid[i][0];
//         }
//     }

//     return sum;
// }