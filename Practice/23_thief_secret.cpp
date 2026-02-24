// int findLongestManuscriptSegment(string s) {
//     // Your implementation here
//     int max_count=0;
//     for(int i=0;i<s.size();i++){
//         unordered_set<char> seen;
//         int count=0;
//         int j=i;
//         while(j<s.size()){
//             if(seen.count(s[j])) break;
//             seen.insert(s[j]);
//             count++;
//             j++;
//         }
//         if(count>max_count){
//             max_count=count;
//         }
//     }
//     return max_count;
// }