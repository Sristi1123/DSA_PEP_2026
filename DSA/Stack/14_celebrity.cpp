// https://www.geeksforgeeks.org/problems/the-celebrity-problem/1

// class Solution {
//   public:
//     int celebrity(vector<vector<int>>& mat) {
//         // code here
//         int n=mat.size();
//         stack<int> st;
//         // push all persons in stack
//         for(int i=0;i<n;i++){
//             st.push(i);
//         }
//         // find a potential celebrity
//         while(st.size()>1){
//             int A=st.top();
//             st.pop();
            
//             int B=st.top();
//             st.pop();
            
//             // if A knows B then A cannot be celebrity
//             if(mat[A][B]==1) st.push(B);
//             else st.push(A);
//         }
//         // if(st.empty()) return -1;
//         int pot_Celeb=st.top();
//         for(int i=0;i<n;i++){
//             if(pot_Celeb==i) continue;          //skip diagonal elements
//             if(mat[pot_Celeb][i]==1) return -1;
//             if(mat[i][pot_Celeb]==0) return -1;
//         }
//         return pot_Celeb;
//     }
// };