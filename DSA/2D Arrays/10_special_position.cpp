// https://leetcode.com/problems/special-positions-in-a-binary-matrix/description/?envType=daily-question&envId=2026-03-04

// for(int i = 0; i < n; i++) {
//             for(int j = 0; j < m; j++) {
//                 if(mat[i][j] == 1) {
//                     row[i]++;
//                     col[j]++;
//                 }
//             }
//         }
        
//         int count = 0;
        
//         // Check special positions
//         for(int i = 0; i < n; i++) {
//             for(int j = 0; j < m; j++) {
//                 if(mat[i][j] == 1 && row[i] == 1 && col[j] == 1) {
//                     count++;
//                 }
//             }
//         }