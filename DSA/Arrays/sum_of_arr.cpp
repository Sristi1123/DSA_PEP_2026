// Gfg problem: https://www.geeksforgeeks.org/problems/sum-of-array2326/1

// User function template for C++
class Solution {
  public:
    // Function to return sum of elements
    int arraySum(vector<int>& arr) {
        // code here
        int n=arr.size()-1;
        int sum=0;
        for(int i=0;i<=n;i++){
            sum+=arr[i];
        }
        return sum;
    }
};