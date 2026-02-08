// int ferrisWheel(vector<int>& arr, int x) {
//     int n = arr.size();
//     sort(arr.begin(), arr.end());
//     int l = 0;
//     int h = n - 1;
//     int count = 0;
//     while (l <= h) {
//         if (arr[l] + arr[h] <= x) {
//             l++;        
//         }
//         h--;            
//         count++;        
//     }
//     return count;
// }
