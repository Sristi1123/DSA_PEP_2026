// https://www.naukri.com/code360/problems/print-longest-common-subsequence_8416383?leftPanelTabValue=PROBLEM

// Tabulation approach

// int t[1001][1001];
// void helper(int n, int m, string &s1, string &s2){
//     for(int i = 0; i <= n; i++){
//         for(int j = 0; j <= m; j++){
//             if(i == 0 || j == 0){
//                 t[i][j] = 0;
//             }
//         }
//     }
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= m; j++){
//             if(s1[i-1] == s2[j-1]){
//                 t[i][j] = 1 + t[i-1][j-1];
//             } else {
//                 t[i][j] = max(t[i-1][j], t[i][j-1]);
//             }
//         }
//     }
// }
// string findLCS(int n, int m, string &s1, string &s2){
//     helper(n, m, s1, s2); 
//     int i = n, j = m;
//     string s = "";
//     while(i > 0 && j > 0){
//         if(s1[i-1] == s2[j-1]){
//             s += s1[i-1];
//             i--; j--;
//         } else {
//             if(t[i][j-1] > t[i-1][j]){
//                 j--;
//             } else {
//                 i--;
//             }
//         }
//     }
//     reverse(s.begin(), s.end());
//     return s;
// }

// approach 2

// string t[1001][1001];
// string findLCS(int n, int m,string &s1, string &s2){
// 	// Write your code here.	
// 	string res="";
// 	if(n==0||m==0) return res;
// 	if(t[n][m]!="") return t[n][m];
// 	if(s1[n-1]==s2[m-1]){
// 		 return t[n][m]=findLCS(n-1,m-1,s1,s2)+s1[n-1];
// 	}else{
// 		string sa=findLCS(n,m-1,s1,s2);
// 		string sb=findLCS(n-1,m,s1,s2);
// 		if(sa.length()>sb.length()){
// 			return t[n][m]=sa;
// 		}else{
// 			return t[n][m]=sb;
// 		}
// 	}
// }