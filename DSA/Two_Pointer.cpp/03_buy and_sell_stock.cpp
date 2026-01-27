// // https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         // int n=prices.size();
//         // int a=0;
//         // int b=0;
//         // for(int i=0;i<n-1;i++){
//         //     for(int j=i+1;j<n;j++){
//         //         if(prices[i]<prices[j]){
//         //             a=prices[j]-prices[i];
//         //         }
//         //         else{
//         //             a= 0;
//         //         }
//         //         b=max(a,b);
//         //     }
//         // }return b;

    
//     }
// // };


// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         if (prices.empty()) return 0;
        
//         int minn=prices[0];
//         int profit=0;
//         int maxProfit=0;

//         for(int i=1;i<prices.size();i++){
//             if(prices[i]<minn){
//                 minn=prices[i];
//             } else {
//                 profit=prices[i]-minn;
//                 maxProfit=max(maxProfit,profit);
//             }
//         }

//         return maxProfit;
//     }
// };