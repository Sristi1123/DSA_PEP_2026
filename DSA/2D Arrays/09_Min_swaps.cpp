// https://leetcode.com/problems/minimum-swaps-to-arrange-a-binary-grid/description/?envType=daily-question&envId=2026-03-02

// class Solution {
// public:
        /*
            Intution:- find endzeroes number of continuous 0 at the end
                    for each row check for required zeroes
                    check the nearest row having 0's>=required
                    if not found return -1
                    else swap
        */

//     int minSwaps(vector<vector<int>>& grid) {
//         int n=grid.size();
        // vector<int> zeroes(n,0);
        // for(int i=0;i<n;i++){
        //     int j=n-1;
        //     int count=0;
        //     while(j>=0 && grid[i][j]==0){
        //         count++;
        //         j--;
        //     }
        //     zeroes[i]=count;
        // }
        // int steps=0;

        // for(int i=0;i<n;i++){
        //     int req=n-i-1;
        //     // >=req
        //     int j=i;
        //     while(j<n && zeroes[j]<req){
        //         j++;
        //     }
        //     if(j==n) return -1;
        //     steps+=j-i;
        //     while(j>i){
        //         swap(zeroes[j],zeroes[j-1]);
        //         j--;
        //     }
        // }
        // return steps;
//     }
// };