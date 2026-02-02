// // https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/


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
