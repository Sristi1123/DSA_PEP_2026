// vector<int> nge(vector<int> &arr){
//     vector<int> res;
//     stack<int> st;
//     int n=arr.size();
//     for(int i=n-1;i>=0;i--){
//         while(!st.empty()&& st.top()<=arr[i]){
//             st.pop();
//         }
//         if(st.empty()){
//             res.push_back(-1);
//         }else{
//             res.push_back(st.top());
//         }
//         st.push(arr[i]);
//     }
//     reverse(res.begin(),res.end());
//     vector<int> ans;
//     for(int i=0;i<res.size()/2;i++){
//         ans.push_back(res[i]);
//     }
//     return ans;
// }
// vector<int> nextHigherTemperatures(vector<int>& temperatures) {
//     // add your code here
//     vector<int> ans;
//     for(int i=0;i<temperatures.size();i++){
//         ans.push_back(temperatures[i]);
//     }
//     for(int i=0;i<temperatures.size();i++){
//         ans.push_back(temperatures[i]);
//     }
//     return nge(ans);
// }