// https://leetcode.com/problems/largest-rectangle-in-histogram/

// class Solution {
// public:
//     int largestRectangleArea(vector<int>& heights) {
//         int n=heights.size();
//         stack<int> st;
//         vector<int> left(n);
//         vector<int>right(n);

//         // find the previous smaller
//         for(int i=0;i<n;i++){
//             while(!st.empty() && heights[st.top()]>=heights[i]){
//                 st.pop();
//             }if(st.empty()){
//                 left[i]=-1;
//             }
//             else{
//                 left[i]=st.top();
//             }
//             st.push(i);
//         }
//         while(!st.empty()){
//             st.pop();
//         }

//         // find next smaller element
//         for(int i=n-1;i>=0;i--){
//             while(!st.empty() && heights[st.top()]>=heights[i]){
//                 st.pop();
//             }if(st.empty()){
//                 right[i]=n;
//             }
//             else{
//                 right[i]=st.top();
//             }
//             st.push(i);
//         }
//         // calculate the max area
//         int maxarea=heights[0];
//         for(int i=0;i<n;i++){
//             int length=heights[i];
//             int width=right[i]-left[i]-1;
//             int area=length*width;
//             if(area>maxarea){
//                 maxarea=area;
//             }
//         } 
//         return maxarea;
//     }
// };