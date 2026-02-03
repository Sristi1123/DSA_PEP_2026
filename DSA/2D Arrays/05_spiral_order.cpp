//https://leetcode.com/problems/spiral-matrix/

// #include <iostream>
// using namespace std;
// void spiral(int arr[][4],int row,int col){
//     int toprow=0;
//     int bottomrow=row-1;
//     int leftcol=0;
//     int rightcol=col-1;
//     while(toprow<=bottomrow && leftcol<=rightcol){
//         // print top-row
//         for(int i=leftcol;i<=rightcol;i++){
//             cout<<arr[toprow][i]<<" ";
//         }
//         toprow++;
//         for(int j=toprow;j<=bottomrow;j++){
//             cout<<arr[j][rightcol]<<" ";
//         }
//         rightcol--;
//         for(int i=rightcol;i>=leftcol;i--){
//             cout<<arr[bottomrow][i]<<" ";
//         }
//         bottomrow--;
//         for(int j=bottomrow;j>=toprow;j--){
//             cout<<arr[j][leftcol]<<" ";
//         }
//         leftcol++;
//     }
// }
// int main(){
//     int arr[][4]={
//         {1,7,14,6},
//         {11,15,5,10},
//         {2,4,16,3},
//         {9,13,8,12}
//     };
//     spiral(arr,4,4);
// }


// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
//         vector<int> ans;
//         int n=matrix.size();
//         int m=matrix[0].size();
//         int toprow=0;
//         int bottomrow=n-1;
//         int leftcol=0;
//         int rightcol=m-1;
//         while(toprow<=bottomrow && leftcol<=rightcol){
//             for(int i=leftcol;i<=rightcol;i++){
//                 ans.push_back(matrix[toprow][i]);
//             }
//             toprow++;
//             for(int j=toprow;j<=bottomrow;j++){
//                 ans.push_back(matrix[j][rightcol]);
//             }
//             rightcol--;
//             for(int i=rightcol;i>=leftcol;i--){
//                ans.push_back(matrix[bottomrow][i]);
//             }
//             bottomrow--;
//             for(int j=bottomrow;j>=toprow;j--){
//                 ans.push_back(matrix[j][leftcol]);
//             }
//             leftcol++;
//         }
//         return ans;
//     }
// };