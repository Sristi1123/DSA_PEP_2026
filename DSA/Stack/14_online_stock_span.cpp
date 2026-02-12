// https://leetcode.com/problems/online-stock-span/

// class StockSpanner {
// public:
//     stack<pair<int,int>> st;
//     StockSpanner() {
        
//     }
    
//     int next(int price) {
//         int currSpan=1;
//         while(!st.empty() && st.top().first<=price){
//             currSpan+=st.top().second;
//             st.pop();
//         }
//         st.push({price,currSpan});
//         return currSpan;
//     }
// };
