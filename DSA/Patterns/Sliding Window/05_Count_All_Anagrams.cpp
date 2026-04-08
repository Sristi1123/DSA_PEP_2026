// https://www.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1
// https://leetcode.com/problems/find-all-anagrams-in-a-string/description/

// // User function template for C++
// class Solution {
//   public:
//     bool allZero(vector<int> &counter){
//         for(int &i:counter){
//             if(i!=0){
//                 return false;
//             }
//         }
//         return true;
//     }
//     int search(string &pat, string &txt) {
//         // code here
//         int n=txt.size();
//         int m=pat.size();
//         vector<int> counter(26,0);
        
//         //count the freq of each char in pat
//         for(int i=0;i<m;i++){
//             char ch=pat[i];
            
//             counter[ch-'a']++;
//         }
        
//         int i=0;
//         int j=0;
//         int res=0;
//         while(j<n){
//             counter[txt[j]-'a']--;
            
//             if(j-i+1==m){
//                 if(allZero(counter)){
//                     res++;
//                 }
                
//                 counter[txt[i]-'a']++;
//                 i++;
                
//             }
//             j++;
//         }
//         return res;
//     }
// };